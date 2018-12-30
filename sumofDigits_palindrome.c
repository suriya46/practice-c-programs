#include <stdio.h>

int main() {
	//code
	int t,sum=0,n,temp,rem,sum1=0,pal=0,temp1;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    temp=n;
	    while(n>0){
	    rem=n%10;
	    sum=sum+rem;
	    n=n/10;
	    }
	    temp1=sum;
	    while(sum>0)
        {
            pal=pal*10;
            rem=sum%10;
            pal=pal+rem;
            sum/=10;
        }

	    if(temp1==pal){
	        printf("Yes");

	    }
	     else {
	    printf("No");

	    }
	    printf("\n");
	}
	return 0;
}

