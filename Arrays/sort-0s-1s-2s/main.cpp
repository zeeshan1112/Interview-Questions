/*Sort an array of 0s, 1s and 2s
Given an array A[] consisting 0s, 1s and 2s, write a function that sorts A[]. The functions should put all 0s first, then all 1s and all 2s in last.

Example
Input = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
Output = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}

ALGORITHM
The problem was posed with three colours, here `0′, `1′ and `2′. The array is divided into four sections:

a[1..Lo-1] zeroes (red)
a[Lo..Mid-] ones (white)
a[Mid..Hi] unknown
a[Hi+1..N] twos (blue)
The unknown region is shrunk while maintaining these conditions

1. Lo := 1; Mid := 1; Hi := N;
2. while Mid <= Hi do
    1. Invariant: a[1..Lo-1]=0 and a[Lo..Mid-1]=1 and a[Hi+1..N]=2; a[Mid..Hi] are unknown.
    2. case a[Mid] in
        0: swap a[Lo] and a[Mid]; Lo++; Mid++
        1: Mid++
        2: swap a[Mid] and a[Hi]; Hi--*/

#include <bits/stdc++.h>

using namespace std;

void sortArray(int a[],int n)
{
    int low=0,mid=0;
    int high = n-1;
    while(mid <= high)
    {
        switch(a[mid])
        {
        case 0:
            swap(a[low++],a[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(a[mid],a[high--]);
            break;
        }
    }
}

int main()
{
    int a[] = {0,1,1,0,1,2,1,2,0,1,0,1};
    int n = sizeof(a)/sizeof(a[0]);
    int i;
    sortArray(a,n);
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
