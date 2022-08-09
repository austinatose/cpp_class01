#include <bits/stdc++.h>
using namespace std;

// perform select sort
void selectSort(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int min = array[i];
    for (int j = i + 1; j < size; j++) {
      if (array[j] < min) {
        min = array[j];
      }
    }
    cout << array[i] << " " << min << endl;
    int mindex = distance(array, find(array, array + size, min));
    swap(array[i], array[mindex]);
    cout << array[i] << " " << min << endl;
    for (int k = 0; k < size; k++) {
        cout << array[k] << " ";
      }
      cout << "\n";
  }
}


// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}


int main() {
  int data[] = {1, 3, 5, 2, 4};
  
  // find array's length
  int size = sizeof(data) / sizeof(data[0]);
  
  selectSort(data, size);
  
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(data, size);
}
