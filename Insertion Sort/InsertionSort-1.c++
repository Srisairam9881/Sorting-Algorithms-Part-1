#include<iostream>
  using namespace std;

void insertionSort(int arr[]) {
  int temp;
  int j = 0;
  for (int i = 1; i < 5; i++) {
    temp = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > temp) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = temp;
  }

}

int main() {
  int myarray[5];
  cout << "Enter 5 integers in any order: ";
  for (int i = 0; i < 5; i++) {
    cin >> myarray[i];
  }

  cout << "Before Sorting: ";
  for (int i = 0; i < 5; i++) {
    cout << myarray[i] << " ";
  }

  insertionSort(myarray);

  cout << endl << "After Sorting: ";
  for (int i = 0; i < 5; i++) {
    cout << myarray[i] << " ";
  }

  return 0;
}
/*
output-1:
Enter 5 integers in any order: 5 4 3 2 1
Before Sorting: 5 4 3 2 1
After Sorting: 1 2 3 4 5

output-2:
Enter 5 integers in any order: 1 2 7 6 3
Before Sorting: 1 2 7 6 3
After Sorting: 1 2 3 6 7

*/
