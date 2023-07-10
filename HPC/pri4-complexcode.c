#include <stdio.h>
#include <time.h>

void timeConsumingTask() {
    for (int i = 0; i < 1000000000; i++) {
        // Perform some computations
    }
}

int main() {
    clock_t start = clock();
    
    // Perform time-consuming task
    timeConsumingTask();
    
    clock_t end = clock();
    double executionTime = (double)(end - start) / CLOCKS_PER_SEC;
    
    printf("Execution Time: %.2f seconds\n", executionTime);
    
    return 0;
}

/*
gcc -pg -o complexprogram .\pri4-complexcode.c
.\complexprogram.exe
gprof .\complexprogram.exe .\gmon.out > complexreport.txt
*/