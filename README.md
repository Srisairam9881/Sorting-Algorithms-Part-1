# Sorting-Algorithms-Part-1
### Topics
* 1.Selection Sort Algorithm with C++ Code | Sorting Algorithms
* 2.Bubble Sort Algorithm with C++ Code | Sorting Algorithms
* 3.Optimized Bubble Sort Algorithm with C++ Code | Sorting Algorithms
* 4.Insertion Sort Algorithm with Code | Sorting Algorithms
##

# 1.Selection Sort Algorithm with C++ Code | Sorting Algorithms | Data Structures & Algorithms
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

#### The time complexity of the selection sort is the same in all cases. At every step, you have to find the minimum element and put it in the right place. The minimum      element is not known until the end of the array is not reached.

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
* Number of comparisons: (n - 1) + (n - 2) + (n - 3) + ..... + 1 = n(n - 1) / 2 nearly equals to n2.
##

### Selection Sort Applications
    The selection sort is used when

* a small list is to be sorted
* cost of swapping does not matter
* checking of all the elements is compulsory
* cost of writing to a memory matters like in flash memory (number of writes/swaps is O(n) as compared to O(n2) of bubble sort)
##

# 2.Bubble Sort Algorithm with C++ Code | Sorting Algorithms | Data Structures & Algorithms

#### Bubble Sort :–
* Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
* This algorithm is suitable for small data sets
* Its average and worst case complexity are of (n^2) where n is the number of items.
* It is known as bubble sort, because with every complete iteration the largest element bubbles up towards the last place or the highest index just like a water bubble rises up to the water surface.
##
![bubble-sort-sorting-algorithm](https://user-images.githubusercontent.com/80576654/164590094-6d1d143f-e342-4153-9961-ec8c8154896c.jpg)
##

#### Working –
* Step 1 – Starting with the first element(index = 0), compare the current element with the next element of the array.
* Step 2 – If the current element is greater than the next element of the array, swap them.
* Step 3 – If the current element is less than the next element, move to the next element.
* Step 4 – Repeat Step 1 till the list is sorted.
##

### Bubble Sort Algorithm –
    1.declare variables – i, j
    2.loop : i = 0 to n – 1 // outer loop
      1.loop : j = 0 to n -i- 1 // inner loop
             1.if ( a[j]>a[j+1] ) then
               1.swap a[j] & a[j+1]
      2.  end loop // inner loop
    3.end loop // outer loop
##

# 3.Optimized Bubble Sort Algorithm with C++ Code | Sorting Algorithms | Data Structures & Algorithms
### Optimized Bubble Sort –
* Optimized bubble sort is basically a smarter version of bubble sort algorithm. Hence the algorithm is same with a mechanism to determine whether the list/array DS is sorted or not after every iteration
* This ensures that the algorithm only runs till the array/list is sorted.
Regular bubble sort runs iterations which are equal to the size of the array irrespective of whether the array is sorted before those number of iterations or not.
* In optimized bubble sort, we have a flag variable that keeps track of whether the list is completely sorted or not.
* In optimized bubble sort, whenever there is a swapping in any iteration, it means that the array/list is still not sorted & hence the flag is set to FALSE.
* Whenever there is no swapping in a particular iteration, the flag is set to TRUE
* At the end of every iteration, this flag variable is checked. If value is true, it means swapping happened & hence the list isn’t sorted completely so next iteration is allowed. If value is false, it means swapping never happened, hence the list is already sorted & there is no point in further iterations hence exit algorithm.



![optimized-bubble-sort-featured-image](https://user-images.githubusercontent.com/80576654/164599703-174ddcd0-b646-4bd0-8cc5-c06df74f727b.jpg)



#### Working –
* Step 1 – Starting with the first element(index = 0), compare the current element with the next element of the array. Set flag = false
* Step 2 – If the current element is greater than the next element of the array, swap them. Set flag = true
* Step 3 – If the current element is less than the next element, move to the next element.
* Step 4 – At end of iteration check flag, if true, continue iteration else exit iterations.
* Step 4 – Repeat Step 1 till the list is sorted.
#### Algorithm –
     1.declare variables – i, j
     2.loop : i = 0 to n – 1 // outer looploop : j = 0 to n -i- 1 //
     3.set flag = false
           1.inner loopif ( a[j]>a[j+1] ) then
                   1.set flag = true
                   2. swap a[j] & a[j+1]
           2.end loop // inner loop
           3.if flag == false then
             1.EXIT
     4.end loop // outer loop
### Bubble Sort Complexity
#### Time Complexity	 
* Best: O(n)
* Worst: O(n^2)
* Average: O(n^2)
* Space Complexit: O(1)
* Stability: Yes
##

### Complexity in Detail
* Bubble Sort compares the adjacent elements.	        

*       Cycle               Number of Comparisons  
        1st	                    (n-1)
        2nd                       (n-2)
        3rd                       (n-3)
      .......                    .......  
       last                         1
     
* Hence, the number of comparisons is

* (n-1) + (n-2) + (n-3) +.....+ 1 = n(n-1)/2
* nearly equals to n^2

* Hence, Complexity: O(n2)

* Also, if we observe the code, bubble sort requires two loops. Hence, the complexity is n*n = n^2

### 1. Time Complexities
#### Worst Case Complexity: O(n2)
* If we want to sort in ascending order and the array is in descending order then the worst case occurs.
#### Best Case Complexity: O(n)
* If the array is already sorted, then there is no need for sorting.
#### Average Case Complexity: O(n2)
* It occurs when the elements of the array are in jumbled order (neither ascending nor descending).
### 2. Space Complexity
* Space complexity is O(1) because an extra variable is used for swapping.
* In the optimized bubble sort algorithm, two extra variables are used. Hence, the space complexity will be O(2).
##
