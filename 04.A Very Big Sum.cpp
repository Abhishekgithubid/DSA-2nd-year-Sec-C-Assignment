#include<cstdio>
#include<iostream>
using namespace std;

void verybigsum(int a[],int n){
    long sum=0;
    for (int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<< sum;
  
}

int main ()
{
    int n;
    
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    verybigsum(arr,n);
    
    
}
