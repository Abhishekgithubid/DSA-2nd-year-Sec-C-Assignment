#include<cstdio>
#include<iostream>
using namespace std;

//int arrinput(){}
int arrsum(int n,int arr[], int sum){
   
     for (int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}


int main()
{
    int n,sum=0;
    //cout <<"enter value of n: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
       // cout<< "Enter array "<< i<<" ";
        cin>> arr[i];
      //  cout<<endl;
    }
    
   sum=arrsum(n,arr,sum);
    cout<<sum;
}
