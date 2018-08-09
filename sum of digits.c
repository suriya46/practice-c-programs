#include<stdio.h>

int main()
{
int digit,remainder,sum=0,i,n;
printf ("enter the no of digit");
scanf("%d",&n);
printf("enter the digit");
scanf("%d",&digit);
for(i=1;i<=n;i++)
{
remainder=digit%10;
sum=sum+remainder;
digit=digit/10;

}
printf("%d",sum);
}
