#include <stdio.h>

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 7;
    int sum = addNumbers(num1, num2);
    
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    
    return 0;
}





/*
gcc -pg -o myprogram .\pri4-1.c 
.\myprogram.exe
gprof .\myprogram.exe .\gmon.out > report.txt
*/