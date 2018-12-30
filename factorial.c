
#include <stdio.h>

int main() {
	//code
    int t;
    long long int fact,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%ld",&n);
	    fact=factorial(n);
	    printf("%ld",fact);
	    printf("\n");
	}
}
int factorial(int n)
{
    if(n==1 ||n==0)
    {
        return 1;
    }
    else
        return (n*factorial(n-1));
}
