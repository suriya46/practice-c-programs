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
printf("%s\n is a palindrome string ", string);
}
else
{
printf("%s\nis not a palindrome string",string);
}

}
