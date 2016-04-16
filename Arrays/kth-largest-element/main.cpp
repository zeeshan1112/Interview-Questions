#include <bits/stdc++.h>
using namespace std;

void minHeapify(int minheap[], int i, int size)
{
    int l = 2*i;
    int r = 2*i+1;
    int smallest =i;
    if(l<size && minheap[l] < minheap[smallest])
        smallest = l;
    if(r<size && minheap[r] < minheap[smallest])
        smallest = r;
    if(smallest!=i)
    {
        swap(minheap[smallest],minheap[i]);
        minHeapify(minheap,i,size);
    }

}

void buildMinHeap(int minheap[], int k)
{
    int i;
    for(i=k/2; i>=0; i--)
    {
        minHeapify(minheap,i,k);
    }
}

int main()
{
    int a[] = {5,9,3,6,2};
    int k =3;
    int n =5;
    int i,minheap[k];
    for(i=0; i<n; i++)
    {
        minheap[i] = a[i];
    }
    buildMinHeap(minheap,k);
    for(i=k; i<n; i++)
    {
        if(minheap[0]< a[i])
        {
            minheap[0] = a[i];
            minHeapify(minheap,0,k);
        }
    }
    cout<<minheap[0]<<endl;
    return 0;
}
