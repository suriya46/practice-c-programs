#include <stdio.h>
int main()

{
int remainder,binary=0,number,base=1;
printf("enter the number\n");
scanf("%d",&number);
while(number>0)
{
remainder =number%2;
binary=binary+remainder*base;
number=number/2;
base=base*10;
}
printf("%d",binary);
}
