#include <bits/stdc++.h>
using namespace std;
int Jump_Search(int arr[],int n,int x)
{
    //best size to jump is sqrt of n
    int step = sqrt(n);
    int prev = 0 ;//kepping record of the last element visited
    while(arr[min(step,n)-1]<x)
    {
        prev = step;
        step +=sqrt(n);
        //condition when the element is not present
        if(prev>=n)
        {
            return -1;
        }
    }
    //linear search on elelemt 
   while (arr[prev] < x) 
    { 
        prev++; 
        if (prev == min(step, n)) 
            return -1; 
    } 
    // If element is found 
    if (arr[prev] == x) 
        return prev; 
  
    return -1; 
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    //element to be found
    cin>>x;
    cout<<Jump_Search(arr,n,x);
    return 0;
}
