#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int smallestMissingNumber(int a[],int start,int end)
{
    if(start > end)
        return end + 1;
    if(a[start] != start)
        return start;
    int mid = (start + end)/2;
    if(a[mid] != mid)
        return smallestMissingNumber(a, start, mid);
    else
        return smallestMissingNumber(a, mid+1, end);
}

int main()
{
    int a[] = {0,1,2,3,4,5,6,7,10};
    int n = sizeof(a)/sizeof(a[0]);
    int result = smallestMissingNumber(a,0,n-1);
    cout<<result<<endl;
    return 0;
}
