#include <iostream>
using namespace std;

void optimizedbubbleSort(int a[],int n) {
  int rounds = 0;
  for (int i = 0; i < n; i++) {
    rounds++;
    int flag = false;
    for (int j = 0; j < (n - i - 1); j++) {
      if (a[j] > a[j + 1]) {
        flag = true;
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
    if (flag == false) {
      break;
    }
  }
  cout << "No of rounds : " << rounds << endl;
}

int main() {
  int myarray[100000],size;
  cout<<"Enter a size of array: ";
  cin>>size;

  cout << "Enter a "<<size<<" integers in any order: ";
  for (int i = 0; i < size; i++) {
    cin >> myarray[i];
  }
  cout << "Before Sorting" << endl;
  for (int i = 0; i < size; i++) {
    cout << myarray[i] << " ";
  }
  cout << endl;
  optimizedbubbleSort(myarray,size); // sorting

  cout << "After Sorting" << endl;
  for (int i = 0; i < size; i++) {
    cout << myarray[i] << " ";
  }

  return 0;
}