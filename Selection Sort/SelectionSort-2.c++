#include <iostream>
using namespace std;

void selectionSort(int arr[],int n) {
  for (int i = 0; i < n; i++) {
    int min = i;

    for (int j = i + 1; j < n; j++) {
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

  int myarr[100000],size;
  cout<<"Enter size of array: ";
  cin>>size;
  cout << "Enter a "<<size<<" elements in array: ";
  for (int i = 0; i < size; i++) {
    cin >> myarr[i];
  }

  cout << "UNSORTED ARRAY: ";
  for (int i = 0; i < size; i++) {
    cout << myarr[i] << "  ";
  }
  cout << endl;

  selectionSort(myarr,size); // sorting actually happening

  cout << "SORTED ARRAY: ";
  for (int i = 0; i < size; i++) {
    cout << myarr[i] << "  ";
  }
  return 0;
}
/*
output-1:
Enter Size of array: 7
Enter a 7 elements in array: 7 6 5 4 3 2 1
UNSORTED ARRAY: 7 6 5 4 3 2 1
SORTED ARRAY: 1 2 3 4 5 6 7

output-2:
Enter Size of array: 5
Enter a 7 elements in array: 1 2 7 3 4
UNSORTED ARRAY: 1 2 7 3 4
SORTED ARRAY: 1 2 3 4 7

*/
