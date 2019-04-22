#include<stdio.h>
int main()
{   int array[6][6],sum[16],max,i,j,k=0;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
    for(j=0;j<4;j++)
    {
        sum[k]=array[i][j]+array[i][j+1]+array[i][j+2]+array[i+1][j+1]+array[i+2][j]+array[i+2][j+1]+array[i+2][j+2];


        k++;
    }

    }
    i=0;
    max=sum[i];
    for(i=1;i<16;i++)
    {
        if(max<sum[i])
        {
            max=sum[i];
        }
    }
    printf("%d",max);
}
