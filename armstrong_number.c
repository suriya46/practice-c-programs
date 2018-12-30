#include <stdio.h>

int main() {
	//code
	int t,sum=0,n,temp,rem;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    temp=n;
	    while(n>0){
	    rem=n%10;
	    sum=sum+(rem*rem*rem);
	    n=n/10;
	    }

	    if(sum==temp){
	        printf("Yes");

	    }
	     else {
	    printf("No");

	    }
	    printf("\n");
	}
	return 0;
}
