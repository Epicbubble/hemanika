#include<stdio.h>
int main()
{
  int num_b;
  scanf("%d",&num_b);
  if(num_b>0)
  {
    printf("Positive");
  }
  else if(num_b<0)
  {
    printf("Negative");
  }
  else
  {
    printf("Zero");
  }
  return 0;
}
