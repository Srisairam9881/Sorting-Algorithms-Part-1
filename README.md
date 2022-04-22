# Sorting-Algorithms-Part-1
### Topics
* 1.Selection Sort Algorithm with C++ Code | Sorting Algorithms
* 2.Insertion Sort Algorithm with C++ Code | Sorting Algorithms
* 3.Bubble Sort Algorithm with C++ Code | Sorting Algorithms
* 4.Optimized Bubble Sort Algorithm with Code | Sorting Algorithms
##

## 1.Selection Sort Algorithm with C++ Code | Sorting Algorithms | Data Structures & Algorithms
#### Selection Sort :-
* Selection sort is a sorting algorithm, specifically an in-place comparison sort.
* It has O(n^2) time complexity, making it inefficient on large lists.
* The algorithm divides the input list into two parts: the sublist of items already sorted, which is built up from left to right at the front (left) of the list, and the * sublist of items remaining to be sorted that occupy the rest of the list.
* Initially, the sorted sublist is empty and the unsorted sublist is the entire input list. The algorithm proceeds by finding the smallest (or largest, depending on sorting order) element in the unsorted sublist, exchanging (swapping) it with the leftmost unsorted element (putting it in sorted order), and moving the sublist boundaries one element to the right.
##
![selection-sorting-featured-image](https://user-images.githubusercontent.com/80576654/164586593-0b3a149c-2f01-43f3-b043-7d5f8f0e09e5.jpg)
##

### Selection Sort Algorithm –
       for i=0 to n-1   // outer for loop
           min = i     // set min value to i
       for j=i+1 to n   // inner loop
          if arr[j] less than arr[min] then   // check which element is smaller
             min=j   // store index of smallest element to min
      end for       // inner loop
     if min not equal to i then   // swap if min does not match to i
          swap arr[min] with arr[i]  // swapping
    end for   // outer for loop
##
### Time Complexity	 
* Best:	       O(n2)
* Worst:	       O(n2)
* Average:	       O(n2)
* Space Complexity:	O(1)
* Stability:	       No
##
