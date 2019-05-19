#include <stdio.h>
int main() {
  long  i=0, n;
  char c;
  char *str=(char *) malloc(sizeof(char));

  while((c = getchar()) != '\n') {
    realloc(str, (sizeof(char)));
    str[i++] = c;
  }
  scanf("%ld",&n);
 int *array=(int*)malloc(sizeof(long long int));
  for (i = 0; i < n; i++) {
    scanf("%d",&*(array+i));
  }

  fun(str,n,array);
}
void fun(char *str,long int n,int *array) {
  int count[27] = {0}, sum[27] = {0};
 long int i = 0, d, flag = 0, j, k;
  while (*(str + i) != '\0') {
    d = *(str + i);
    d = (d % 97) + 1;
    count[d]++;
    sum[d] = sum[d] + d;

    i++;
  }
  for (i = 0; i < n; i++) {
    flag = 0;
    for (j = 1; j <= 26; j++) {

      if (count[j] != 0 && array[i]%j==0 &&
          ((j*count[j])%array[i]==0 || array[i] == j * count[j])) {

        flag = 1;
        break;
      }
    }
    if (flag == 1) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  }
}

