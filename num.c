#include<stdio.h>
int main()
{
  int number;
  scanf("%d",&number);
  if(number>0)
    printf("Positive\n");
  if(number<0)
     printf("Negative\n");
  if(number==0)
      printf("Zero\n");
  return 0;
}
