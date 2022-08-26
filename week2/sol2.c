//65010971
#include<stdio.h>
int main(){
  int num;
  scanf("%d",&num);
  for(int i=0;i<num;i++)
  {  
    int space=2*num-2*i;
    for(int j=1;j<=i;j++)
    {
      printf(" ");
    }
    for(int j=1;j<space;j++)
    {
      printf("*");
    }
    for(int k=1;k<=i;k++)
    {
      printf(" ");
    }
    printf("\n");
  }

  for(int i=num-2;i>=0;i--)
  {  
    int space=2*num-2*i;
    for(int j=1;j<=i;j++)
    {
      printf(" ");
    }
    for(int j=1;j<space;j++)
    {
      printf("*");
    }
    for(int k=1;k<=i;k++)
    {
      printf(" ");
    }
    printf("\n");
  }
}