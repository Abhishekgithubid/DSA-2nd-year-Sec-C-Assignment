#include<cstdio>
#include<iostream>
using namespace std;

void plusMinus(int *arr,int n)
{
   float posi,negi,zero;
    posi=0;
    negi=0;
    zero=0;
    
    double rposi;
    double rnegi;
    double rzero;
    rposi=0.000000;
    rnegi=0.000000;
    rzero=0.000000;
    for (int i=0;i<n;i++)
    {
        if(arr[i]>0) 
        {
          //  cout<<arr[i];
            posi++;
          //  cout << "PSSI"<<posi<<endl;
        }
    }
    for (int i=0;i<n;i++)
    {
        if (arr[i]==0) 
            {
           // cout<<arr[i];
            zero++;
          //  cout <<"ZEO" <<zero<<endl; 
            
            }
    }
    for (int i=0;i<n;i++)
    {
        if (arr[i]<0) 
            {
            negi ++;
           // cout << negi<<endl;
            }
    }
             
    rposi=posi/n;
    rnegi=negi/n;
    rzero=zero/n;
    cout<<rposi<<endl;
    cout<<rnegi<<endl;
    cout<<rzero<<endl; 
}

int main ()
{
    //
    int n;
    cin>>n;
    
    //
    int arr[n];    
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    /*for (int i=0;i<n;i++)
    {
         cout<<arr[i]<< endl;
    }*/

    plusMinus(arr,n);
    
    return 0;
}
