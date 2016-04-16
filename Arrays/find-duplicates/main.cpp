#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = {1,3,2,4,2,3,5};
    int n = sizeof(a)/sizeof(a[0]),i;
    for(i=0; i<n; i++)
    {
        if(a[abs(a[i])]>0)
            a[abs(a[i])]=-a[abs(a[i])];
        else
            cout<<abs(a[i])<<" ";
    }
    cout<<endl;
    return 0;
}
