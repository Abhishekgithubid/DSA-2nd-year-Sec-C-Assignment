#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //declare character, string, sentence
    char ch;
    char s[100];
    char sen[100];
    
    // take input character, string, sentence
    scanf("%c\n",&ch);
    scanf("%s\n",s);
    //new line required for this sentence
    scanf("%[^\n]%*c",sen);
    //scanf("%[^\n]s",sen);
    //gets(sen);
    
    
    //print character, string, sentence
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    
    return 0;
}
