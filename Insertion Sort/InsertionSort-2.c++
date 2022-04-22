#include<iostream>
  using namespace std;

void insertionSort(int arr[],int n) {
  int key;
  int j = 0;
  for (int i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }

}

int main() {
  int myarray[10000],size;
  cout<<"Enter size of array: ";
  cin>>size;
  cout << "Enter a "<<size<<" elements in array: ";
  for (int i = 0; i < size; i++) {
    cin >> myarray[i];
  }

  cout << "Before Sorting: " << endl;
  for (int i = 0; i < size; i++) {
    cout << myarray[i] << " ";
  }

  insertionSort(myarray,size);

  cout << endl << "After Sorting: " << endl;
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
