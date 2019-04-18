#include<stdio.h>
#include<string.h>
int main(){
    int hh, mm, ss ;
    char str[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, str) ;
    if (strcmp(str,"PM")==0 && hh!=1

        2) hh += 12 ;
    if (strcmp(str,"AM")==0 && hh==12) hh = 0 ;
    printf("%02d:%02d:%02d", hh, mm, ss);
    return 0;
}
