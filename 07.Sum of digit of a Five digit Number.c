#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0,temp;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
   int i=n;
   //usong while loop
  /* while (i!=0)
    {    temp=i%10;
         sum += temp;
         i=i/10;
    }*/
    // usong for looop
    for (int i=n;i!=0;i/=10)
    {
        temp=i%10;
         sum += temp;
    }
    printf ("%d",sum);
    return 0;
}
