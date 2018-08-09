#include <stdio.h>
int main()

{
int i,n,m,count=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
	if((n%i)==0)
	{
		count=count+1;

}

}
if(count==0)
printf("%d is a prime number",n);
else
printf("%d is not a prime number",n);
}
