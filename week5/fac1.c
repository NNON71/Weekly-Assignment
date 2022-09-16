//65010971
#include<stdio.h>
int main(){
    int ans=1,n;
    scanf("%d",&n);
    if(n<0) 
    {
        return 0;
    }
    for(n;n>0;n--)
    {
        ans=ans*n;
    }
    printf("%d",ans);
}