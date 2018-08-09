#include<stdio.h>
int main()
{
int number,i=1,sum=0;
printf("enter the number\n");
scanf("%d",&number);
for(i=1;i < number;i++)
{
if((number > 0) && (number%i==0))
{
sum=sum+i;

}
}

if(sum==number)
{
printf("%dis a perfect number",number);
}
else
printf("%d is not a perfect number",number);

}
