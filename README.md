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
* Best:	       O(n^2)   
* Worst:	       O(n^2)
* Average:	       O(n^2)
* Space Complexity:	O(1)
* Stability:	       No

##### Complexity = O(n2)

Also, we can analyze the complexity by simply observing the number of loops. There are 2 loops so the complexity is n*n = n2.

#### Time Complexities:

##### Worst Case Complexity: O(n2)
* If we want to sort in ascending order and the array is in descending order then, the worst case occurs.
##### Best Case Complexity: O(n2)
* It occurs when the array is already sorted
##### Average Case Complexity: O(n2)
* It occurs when the elements of the array are in jumbled order (neither ascending nor descending).
*
    The time complexity of the selection sort is the same in all cases. At every step, you have to find the minimum element and put it in the right place. The minimum     element is not known until the end of the array is not reached.

#### Space Complexity:

Space complexity is O(1) because an extra variable temp is used.
##
### 
    Cycle          Number of Comparison
    
    1st	        (n-1)
    2nd	        (n-2)
    3rd	        (n-3)
    ...	         ...
    last	          1
##
