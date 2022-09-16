//65010971
#include<stdio.h>
int fac(int n){
    if(n==0||n==1) return 1;
    else if(n==2) return 2;
    else return n*fac(n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fac(n));
}