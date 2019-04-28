#include<stdio.h>
int main()
{
    int i,j,m,n,array[3][3],a,b,sum=0,sum1=0,difference;
    printf("enter the row and column");
    scanf("%d",&m);
    printf("enter the array elements");
    n=m;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    i=0;
    j=0;
while(i!=m && j!=n){

    sum=sum+array[i][j];

    i++;
j++;
}
printf("%d\n",sum);
i=0;
j=n-1;
while((i <=(m-1)) && j >=0)
{
    sum1=sum1+array[i][j];
    i++;
    j--;
}
printf("%d\n",sum1);

if(sum>sum1)
    difference=sum-sum1;
else
    difference=sum1-sum;
printf("%d\n",difference);
}
