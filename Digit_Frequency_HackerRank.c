#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    char s[1000];
    int i,j,n,count=0;
    scanf("%[^\n]",&s);
    for(i=0;i<=9;i++)
    {
    count=0;
    for(j=0;j<strlen(s);j++){
        n=s[j]-'0';
        if(n==i)
        {
           count=count+1;
        }
    }
    printf("%d ",count);
    }

    return 0;
}
