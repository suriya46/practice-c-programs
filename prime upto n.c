
#include <stdio.h>
int main()

{
int i,n,j=2,count=0;
printf("enter the number\n");
scanf("%d",&n);
printf("the prime numbers are:\n");
for(j=2;j<=n;j++)
{

for(i=2;i<=j;i++)
{
	if((j%i)==0)
	{
		count=count+1;
	}
	}
	if(count==1)
printf("%d\n",j);


count=0;

}
}
