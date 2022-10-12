#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long mx;
    cin>>mx;
    long long mn=mx;
    long long a1=0,a2=0;
    n--;
    long long x;
    while(n--)
    {
        cin>>x;
        if(x>mx)
            a1++;
        if(x<mn)
            a2++;
        mx=max(mx,x);
        mn=min(mn,x);
    }
    cout<<a1<<" "<<a2<<endl;
}
