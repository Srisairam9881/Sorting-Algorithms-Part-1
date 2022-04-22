#include<iostream>
using namespace std;

void bubbleSort(int a[],int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < (n - i - 1); j++) {
      if (a[j] > a[j + 1]) {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}

int main() {
  int myarray[100000],size;

  cout<<"Enter Size of array: ";
  cin>>size;
  cout << "Enter a "<<size<<" elements in array: ";
  for (int i = 0; i < size; i++) {
    cin >> myarray[i];
  }
  cout << "Before Sorting: ";
  for (int i = 0; i < size; i++) {
    cout << myarray[i] << " ";
  }

  bubbleSort(myarray,size); // sorting

  cout << endl << "After Sorting: ";
  for (int i = 0; i < size; i++) {
    cout << myarray[i] << " ";
  }

  return 0;
}
/*
output-1:
Enter Size of array: 7
Enter a 7 elements in array: 7 6 5 4 3 2 1
Before Sorting: 7 6 5 4 3 2 1
After Sorting: 1 2 3 4 5 6 7

output-2:
Enter Size of array: 5
Enter a 7 elements in array: 1 2 7 3 4
Before Sorting: 1 2 7 3 4
After Sorting: 1 2 3 4 7

*/
