#include <iostream>
  using namespace std;

void bubbleSort(int a[]) {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < (5 - i - 1); j++) {
      if (a[j] > a[j + 1]) {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
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

  bubbleSort(myarray); // sorting

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
