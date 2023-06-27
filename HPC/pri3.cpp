#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
  int pivot = arr[high];
  int i = low - 1;

  for (int j = low; j <= high - 1; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }

  swap(arr[i + 1], arr[high]);
  return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
  if (low < high) {
    int pivotIndex = partition(arr, low, high);
    quickSort(arr, low, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, high);
  }
}

int main() {
  vector<int> arr = {9, 3, 2, 6, 1, 8, 4, 7, 5};

  cout << "Original Array: ";
  for (const auto& num : arr) {
    cout << num << " ";
  }

  quickSort(arr, 0, arr.size() - 1);

  cout << "\nSorted Array: ";
  for (const auto& num : arr) {
    cout << num << " ";
  }

  return 0;
}
