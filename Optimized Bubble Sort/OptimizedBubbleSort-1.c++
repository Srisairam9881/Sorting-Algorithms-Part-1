#include <iostream>
using namespace std;

void optimizedbubbleSort(int a[]) {
  int rounds = 0;
  for (int i = 0; i < 5; i++) {
    rounds++;
    int flag = false;
    for (int j = 0; j < (5 - i - 1); j++) {
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
  int myarray[5];
  cout << "Enter 5 integers in any order: ";
  for (int i = 0; i < 5; i++) {
    cin >> myarray[i];
  }
  cout << "Before Sorting: ";
  for (int i = 0; i < 5; i++) {
    cout << myarray[i] << " ";
  }
  cout << endl;
  optimizedbubbleSort(myarray); // sorting

  cout << "After Sorting: ";
  for (int i = 0; i < 5; i++) {
    cout << myarray[i] << " ";
  }

  return 0;
}
/*
output-1:
Enter 5 integers in any order: 5 4 3 2 1
Before Sorting: 5 4 3 2 1
No of rounds : 5
After Sorting: 1 2 3 4 5

output-2:
Enter 5 integers in any order: 1 2 7 6 3
Before Sorting: 1 2 7 6 3
No of rounds : 3
After Sorting: 1 2 3 6 7

*/
