#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[1000];
    int upper=0;
    int lower=0;
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        if(isupper(str[i])==1)
        {
            upper++;
        }
        else  if(islower(str[i])==2)
        {
            lower++;
        }
    }
    printf("Capital Letter : %d\n",upper);
    printf("Lower Letter : %d",lower);
}
