#include<stdio.h>
int main()
{
        int flag=0,count=0,cnt=0,m,n;
        char a[100];
        char b[100];
        while(1){
      gets(b);
      gets(a);
      m=strlen(b);
        int i=0,j=0,k=0;
        while(a[k]!='\0')
        {
            if(a[k]!='*')
            {
                count++;
            }
            k++;
        }
        printf("\n%d",count);
        while(a[i]!='\0')
        {
        if(a[i]!='*')
        {
            while(a[i]!=b[j] && j< m){
                j++;
            }
            if(a[i]==b[j]){
            cnt++;
            }
            j++;

printf("%c %d",a[i],cnt);
        }
        if(a[i]=='*')
        {
            while(a[i+1]!=b[j] && j<m)
            {
                j++;
            }
            i++;
            if(a[i]==b[j]){
            cnt++;
            }
            printf("%c %d",a[i],cnt);
        }
        i++;
        }
        printf("\n%d",cnt);
        if(cnt==count)
        {
            printf("\n True");
        }
        else
        {
            printf("False");
        }
        }
    }
