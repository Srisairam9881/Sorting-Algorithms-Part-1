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
/*
output-1:
Enter Size of array: 7
Enter a 7 elements in array: 7 6 5 4 3 2 1
Before Sorting: 7 6 5 4 3 2 1
No of rounds :7
After Sorting: 1 2 3 4 5 6 7
output-2:

Enter Size of array: 5
Enter a 7 elements in array: 1 2 7 3 4
Before Sorting: 1 2 7 3 4
No of rounds : 2
After Sorting: 1 2 3 4 7

*/
