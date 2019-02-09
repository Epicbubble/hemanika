#include<stdio.h>
int main()
{
  int fnum;
  scanf("%d",&fnum);
  if(fnum%2==0)
  {
    printf("Even");
  }
  else if(fnum%2>0)
  {
    printf("Odd");
  }
  else if(fnum<0)
  {
   printf("invalid");
   }
}
