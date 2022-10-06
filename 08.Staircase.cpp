#include <bits/stdc++.h>
 using namespace std;
 void staircase (int hibase)
 {  int sp;
     for (int i=1;i<=hibase;i++)
     {
        sp=hibase-i;
        for (int j=1;j<=hibase;j++)
        {
            if (j<=sp)
            {
                 cout<<" ";
            }
            else cout<<"#";
         }
        cout<<endl;
         
     }

 }
int main()
{
    //declare n and take input
    int n;
    cin>>n;
    
    staircase(n);
    return 0;
} 
