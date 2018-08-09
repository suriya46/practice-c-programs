#include <stdio.h>
int main()

{
int i,n,j=1,count=0,flag=0,a;
printf("enter the number\n");
scanf("%d",&n);
printf("the first %d prime numbers are:\n",n);
do
{
j=j+1;


for(i=2;i<=j;i++)
{
	if((j%i)==0)
	{
		count=count+1;
	}
	}


	if(count==1)
	{
printf("%d\n",j);
flag =flag +1;

}
count=0;

}
while(flag!=n);
}

