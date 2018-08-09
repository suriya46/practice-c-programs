SUM OF DIGITS

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

ARMSTRONG NUMBER

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

PERFECT NUMBER 

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

.program to check a prime number

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
printf("%d is a prime no",n);
else 
printf("%d is not a prime no",n);
}

???????????????????????????


2.print the prime numbers upto n:

#include <stdio.h>
int main() 

{
int i,n,j=2,count=0; 
printf("enter the number\n");
scanf("%d",&n);
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

???????????????????????????


3.print the first n prime numbers:


#include <stdio.h>
int main() 

{
int i,n,j=1,count=0,flag=0,a; 
printf("enter the number\n");
scanf("%d",&n);
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


DECIMAL TO BINARY CONVERSION:

Using array:

#include <stdio.h>
int main() 

{
int i=0,n,count=0,a[40];
printf("enter the number\n");
scanf("%d",&n);
do{
if((n%2)==0)
{
a[i]=0;
}
else
{
a[i]=1;
}
n=n/2;
i=i+1;
count=count+1;
}while(n!=1);
a[i]=1;
count=count+1;
for(i=count-1;i>=0 ;i--)
{
printf("%d\t",a[i]);
}
}

¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦

Binary to decimal 

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

¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦


PALINDROME NUMBER 

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

¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦

PALINDROME STRING 


#include<stdio.h>
#include <string.h>
int main()
{
int i=0,j=0,length,flag=0;
char string[20];
printf ("enter a string");
scanf("%s",string);
length=strlen(string);
i=0;
j=length-1;
while(i<j)
{
if(string[i]==string[j])

	{
	flag=flag+1;
	}
	i++;
	j--;
	
	}
if(flag==(length/2))
{
printf("%s\n is a palindrome ", string);
}
else
{
printf("%s\nis not a palindrome ",string);
}

}
