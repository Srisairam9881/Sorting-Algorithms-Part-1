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

  cout << "UNSORTED ARRAY: " << endl;
  for (int i = 0; i < size; i++) {
    cout << myarr[i] << "  ";
  }
  cout << endl;

  selectionSort(myarr,size); // sorting actually happening

  cout << "SORTED ARRAY: " << endl;
  for (int i = 0; i < size; i++) {
    cout << myarr[i] << "  ";
  }
  return 0;
}