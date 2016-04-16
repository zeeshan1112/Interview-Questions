### Kth largest(or smallest) elements in an array - [minHeap method]
> ALGORITHM

1. Build a Min Heap of the first k elements (arr[0] to arr[k-1]) of the given array. **O(k)**
2. For each element, after the kth element (arr[k] to arr[n-1]), compare it with root of min heap.
If the element is greater than the root then make it root and call heapify for min heap.
else ignore it. **O((n-k) * logk)**
3. Finally, min heap has k largest elements and root of the min heap is the kth largest element.

> Time Complexity: **O(k + (n-k) * logk)** 

> [Reference Link](http://www.crazyforcode.com/kth-largest-smallest-element-array/)