#include<stdio.h>
int main(){
  int num;
  scanf("%d",&num);
  for(int i=2;i<=num;i++)
  {
    if(num%i==0&&i!=num)
    {
      printf("%d is NOT PRIME NUMBER",num);
      return 0;
    }
    else if(num%i==0&&i==num)
    {
      printf("%d is PRIME NUMBER",num);
      return 0;
    }
  }
}