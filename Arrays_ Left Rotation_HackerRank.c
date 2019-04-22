#include<stdio.h>
int main()
{
   long int array[100000],i,n,d,count,temp,j;
    scanf("%ld %ld",&n,&d);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&array[i]);
    }
    for(count=1;count<=d;count++)
    {
        i=0;
        temp=array[i];
        for(i=0;i<n-1;i++)
        {
            array[i]=array[i+1];

        }
        array[n-1]=temp;
}
    for(j=0;j<n;j++)
    {
        printf("%ld\t",array[j]);
    }
}
