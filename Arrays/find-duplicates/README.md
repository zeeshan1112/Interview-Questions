### Find duplicates in O(n) time and O(1) extra space

##### Given an array of n elements which contains elements from 0 to n-1, with any of these numbers appearing any number of times. Find these repeating numbers in O(n) and using only constant memory space.

> Example

```
Input = {1, 2, 3, 1, 3, 6, 6};
Output = {1,3,6};
```
> ALGORITHM

```
traverse the list for i= 0 to n-1 elements
{
  check for sign of A[abs(A[i])] ;
  if positive then
     make it negative by   A[abs(A[i])]=-A[abs(A[i])];
  else  // i.e., A[abs(A[i])] is negative
     this   element (ith element of list) is a repetition
}
```

> Time Complexity: **O(n)**

> Auxiliary Space: **O(1)**

> Note: This method modifies the original array and may not be a recommended method if we are not allowed to modify the array.
This can be also done by keeping track of elements using a temp array count[], and when you see an element whose count is already set, print it as duplicate. This method uses 0(n) extra space.

> [Reference Link](http://www.geeksforgeeks.org/find-duplicates-in-on-time-and-constant-extra-space/) 

