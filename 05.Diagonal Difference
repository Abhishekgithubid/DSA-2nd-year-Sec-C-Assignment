#include<bits/stdc++.h>
#include<math.h>
using namespace std;

/*int diagonalDifference(int arr[][3],int n)
{
            //for principle diagonal
    int prdsum=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==j) prdsum+=arr[i][j];
        }
    }
    cout<<"this: "<<prdsum;
    
    //for offprinciple diagonal
    int oprdsum=0;
    int i=0;
    int j=n-1;
    while(i<n&&j>=0)
    {
        {
            //cout<<"i,j  :"<<i<<j;
            oprdsum+=arr[i][j];
            // cout<<"this: "<<oprdsum<<endl;
            i++;
            j--;
        }
    }
    cout<<"this: "<<oprdsum;
    
    ////absolute difference
    int absdiff=0;
    absdiff=abs(prdsum-oprdsum);
    //cout<<absdiff;
    return absdiff;
}*/

int main()
{
    //declare and take size for array
    //int ddiff=0;
    int n;
    cin>>n;
    
    //declare and take array
    int arr[n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }    
    }
    
    //call a function and pass the array and size
   // ddiff=diagonalDifference(arr,n);
   // cout << ddiff;
    
    //for principle diagonal
    int prdsum=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==j) prdsum+=arr[i][j];
        }
    }
   // cout<<"this: "<<prdsum;
    
    //for offprinciple diagonal
    int oprdsum=0;
    int i=0;
    int j=n-1;
    while(i<n&&j>=0)
    {
        {
            //cout<<"i,j  :"<<i<<j;
            oprdsum+=arr[i][j];
            // cout<<"this: "<<oprdsum<<endl;
            i++;
            j--;
        }
    }
    //cout<<"this: "<<oprdsum;
    
    ////absolute difference
    int absdiff=0;
    absdiff=abs(prdsum-oprdsum);
    cout<<absdiff;
    //return absdiff;
    return 0;
}
