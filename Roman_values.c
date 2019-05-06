#include<stdio.h>
int main()
{
    int i=0,sum=0,value;
    char str[20],a;
    scanf("%s",&str);
    while(str[i]!='\0')
    {

        if(str[i]!='I'){
                a=str[i];
        value=con(a);
        sum=sum+value;
        }
        if(str[i]=='I' && str[i+1]=='V'){
            value=con(str[i+1])-con(str[i]);
            sum=sum+value;
            i++;
        }
        if(str[i]=='I' && str[i-1]=='V'){
            value=con(str[i+1])+con(str[i]);
            sum=sum+value;
        }
        i++;
    }
    printf("%d",sum);

}
int con(int c)
{
     if(c=='I')
        {
            return 1;
        }
         if(c=='V')
        {
            return 5;
        }
         if(c=='X')
        {
            return 10;
        }
         if(c=='L')
        {
            return 50;
        }
         if(c=='C')
        {
            return 100;
        }
         if(c=='M')
        {
            return 1000;
        }
}
