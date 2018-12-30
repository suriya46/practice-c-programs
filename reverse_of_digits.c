#include <stdio.h>

int main() {
	//code
	int t;
	long int sum=0,rem;
	long int n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);

	    while(n>0){
                sum=sum*10;
	    rem=(n%10);
	    sum=(sum+rem);
	    n=n/10;
	    }
	    printf("%ld",sum);
	    	printf("\n");
	}

}
