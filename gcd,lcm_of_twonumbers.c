#include <stdio.h>

int main() {
	//code
    int t,a,b,numerator,denominator,remainder,gcd,lcm,n1,n2;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&a,&b);
	    n1=a,n2=b;
	    while(a!=b){
	    if(a>b)
        {

            a=a-b;
        }
        else{
            b=b-a;
        }
	    }
	    gcd=a;
	    lcm=n1*n2/gcd;
	    printf("%d %d",gcd,lcm);
	    printf("\n");
	}
}

