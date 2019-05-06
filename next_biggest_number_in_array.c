#include<stdio.h>
int main()
{
    int array[5]={6,4,8,1,2},temp,max,count=0,flag=0,s,next;
    for(int i=0;i<5;i++)
    {
        s=array[i];
        max=array[i];
        temp=max;
          count=0;
          next=0;
for(int j=0;j<5;j++)
{
if(max<array[j] || temp<array[j]||s<array[j] && j!=i)
{

              temp=max;
              max=array[j];
              next=max;
              count++;
              flag=1;
}
if(count>1){
              next=min(max,temp);
              }
}
printf("\n The next biggest element of %d is %d",array[i],next);

    }
}
int min(int a,int b)
{
    if (a < b)
        return a;
    else
        return b;
}

