//65010971
#include<stdio.h>
int main(){
 int num,count =0;
 scanf("%d",&num);
 for(int i=1;i<=num;i++)
 {
   if(num%i==0)
   {
      count+=1;
      if(count>=3) 
      {
      printf("%d is NOT PRIME NUMBER",num);
      return 0;
      }
   }
 }
 if(count==2) printf("%d is PRIME NUMBER",num);
 return 0;
}