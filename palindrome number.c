#include<stdio.h>
int main()
{
int number,reverse=0,remainder,temp;
printf ("enter a number");
scanf ("%d",&number);
temp=number;
while(number!=0)
{
	reverse=reverse*10;
remainder =temp%10;
reverse=reverse+remainder;
temp=temp/10;

}
if(reverse==number)
{
printf("%d is a palindrome number", number);
}
else
printf("%d is not a palindrome number ",number);
}
