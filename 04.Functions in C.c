#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b,int c, int d)
{
    //compare a with b,c,d
    if (a>b&&a>c&&a>d)
    {
        return a;
    }
    //compare b with c, d
    if (b>c&&b>d)
    {
        return b;
    }
    //compare c with d
    if (c>d)
    {
        return c;
    }
    //if all wrong then this
    return d;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
