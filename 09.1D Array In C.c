#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    //declaration of variable and input of n
    int n,sum=0;
    scanf("%d",&n);
    
    //decalartion of dynamic array of size n
    int*arr =(int*)malloc(n*sizeof(int));
    
    //input of array and sum of each element
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d ",&arr[i]);
        sum+=arr[i];
        
    }
    
    //total sum of array element
    printf("%d ",sum);
    
    //free located memeory of array
    free(arr);  
    return 0;
}
