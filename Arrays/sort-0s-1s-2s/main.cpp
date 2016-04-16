
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
