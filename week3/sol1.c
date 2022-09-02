//65010971
#include<stdio.h>
int main(){
    char str[1000];
    int i=0;
    scanf("%s",str);
    while(str[i] != '\0')
    {
        i=i+1;
    }
    printf("%c\n",str[i-1]);
}