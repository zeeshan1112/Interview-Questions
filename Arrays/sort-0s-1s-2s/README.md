### Sort an array of 0s, 1s and 2s

##### Given an array A[] consisting 0s, 1s and 2s, write a function that sorts A[]. The functions should put all 0s first, then all 1s and all 2s in last.

> Example

```
Input = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
Output = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2};
```
> ALGORITHM

![alt text](http://d1gjlxt8vb0knt.cloudfront.net//wp-content/uploads/DNF1.png "Iteration Image")

Invariant: a[1..Lo-1]=0 and a[Lo..Mid-1]=1 and a[Hi+1..N]=2; a[Mid..Hi] are unknown.

1. Lo := 1; Mid := 1; Hi := N;
2. case a[Mid] in
    1. **0**: swap a[Lo] and a[Mid]; Lo++; Mid++
    2. **1**: Mid++
    3. **2**: swap a[Mid] and a[Hi]; Hi--
3. Finally, array a[] has been sorted.

> Time Complexity: **O(n)**

>> [Reference Link](http://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/) 