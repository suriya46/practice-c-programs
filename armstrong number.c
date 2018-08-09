#include<stdio.h>
int main()
{
int number,i,n=0,digit,sum,armno;
printf("enter the number\n");
scanf("%d\n",&number);
armno=number;
while(number != 0)
{
digit=number%10;
sum=sum+(digit*digit*digit);
number=number/10;
}
if((sum==armno)&&(armno > 0))
{
printf("the number %d is a Armstrong number",armno);
}
else
printf("the number is not a Armstrong number");
}
