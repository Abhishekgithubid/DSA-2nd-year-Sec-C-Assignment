#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    //declare int and float
    int a,b;
    float c,d;
    
    //input int and float
    scanf("%d %d\n%f %f",&a, &b, &c, &d);
    
    //sum and differece int and float
    printf("%d %d\n", a+b, a-b);
    printf("%0.1f %0.1f", c+d, c-d);
	
    
    return 0;
}
