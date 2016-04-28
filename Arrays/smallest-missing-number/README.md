### Find smallest missing number in a sequence

##### Given a sorted array of n integers where each integer is in the range from 0 to m-1 and m > n. Find the smallest number that is missing from the array.

> Example

```
Input = {0, 1, 2, 3, 4, 5, 6, 7, 10};
Output = 8;
```
> ALGORITHM

**Use Modified Binary Search**
```
1. If first element is not same as its index then return first index.
2. Else get the middle index say mid
    1. If arr[mid] greater than mid then the required element lies in left half.
    2. Else the required element lies in right half.
```

> Time Complexity: **O(log n)**

> Auxiliary Space: **O(1)**

> Note: This method doesn’t work if there are duplicate elements in the array.

>> [Reference Link](http://www.geeksforgeeks.org/find-the-first-missing-number/) 

