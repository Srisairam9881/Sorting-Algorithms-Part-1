#include <iostream>
using namespace std;

void selectionSort(int arr[]) {
  for (int i = 0; i < 4; i++) {
    int min = i;

    for (int j = i + 1; j < 5; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    if (min != i) {
      int temp = arr[min];
      arr[min] = arr[i];
      arr[i] = temp;
    }
  }
}

int main() {

  int myarr[5];
  cout << "Enter 5 integers in random order: " << endl;
  for (int i = 0; i < 5; i++) {
    cin >> myarr[i];
  }

  cout << "UNSORTED ARRAY: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << myarr[i] << "  ";
  }
  cout << endl;

  selectionSort(myarr); // sorting actually happening

  cout << "SORTED ARRAY: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << myarr[i] << "  ";
  }
  return 0;
}
/*
output-1:
Enter 5 integers in random order: 5 4 3 2 1
UNSORTED ARRAY: 5 4 3 2 1
SORTED ARRAY: 1 2 3 4 5

output-2:
Enter 5 integers in random order: 1 2 7 6 3
UNSORTED ARRAY: 1 2 7 6 3
SORTED ARRAY: 1 2 3 6 7

*/
