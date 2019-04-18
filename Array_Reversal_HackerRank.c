#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    scanf("%d", &num);
   int *arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d",&arr[i]);
    }
     for(i = num-1; i >= 0; i--) {
        printf("%d ",arr[i]);
    }
}

