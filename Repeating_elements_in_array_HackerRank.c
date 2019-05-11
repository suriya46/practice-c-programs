#include<stdio.h>

int main()
{
    int i,n,array[200000],m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&array[i]);
    }
    m=repeat(array,n);
     printf("%d",m);
}
int repeat(int *array,int n)
{
    int i,max,num;
    int *count=(int *)calloc(5,sizeof(int));
    for(i=1;i<=n;i++)
    {
        count[array[i]]++;
    }
    max=count[1];
    num=1;
    for(i=2;i<=5;i++)
    {
        if(max<count[i])
        {
            max=count[i];
            num=i;
        }
        if(max==count[i])
        {
            max=count[i];
            num=num<i ?num:i;
        }

    }
    return num;

}
