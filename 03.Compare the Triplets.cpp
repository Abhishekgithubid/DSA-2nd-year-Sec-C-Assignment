#include<iostream>
#include<cstdio>
using namespace std;

void arrcomp(int a[],int b[])
{
    int alicepnt=0,bobpnt=0;
    
   
    
    for (int i=0;i<3;i++)
    {
        if (a[i]>b[i])
        {
            alicepnt++;
            //cout << alicepnt;
            
        }
        if (a[i]<b[i])
        {
            bobpnt++;
            //cout << bobpnt;
            
        }
    }
     int result[2]={alicepnt,bobpnt};
    for (int i=0;i<2;i++)
      {
          cout << result[i]<< " ";
      } 

}
int main()
{
    //declare two array OF SIZE 3
    
    int a[3],b[3];
    
    
    //take inut array
    for (int i=0;i<3;i++)
    {
        cin>>a[i];
    }

    for (int i=0;i<3;i++)
    {
        cin>>b[i];
    }  
    
    //comparsion of array element
    arrcomp(a,b);
    
      
     
}
