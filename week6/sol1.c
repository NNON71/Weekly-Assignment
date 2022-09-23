#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    int upper=0;
    int lower=0;
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            upper++;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            lower++;
        }
    }
    printf("Capital Letter : %d\n",upper);
    printf("Lower Letter : %d",lower);
}