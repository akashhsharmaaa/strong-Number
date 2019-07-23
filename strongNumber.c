//Write a program to find whether the given input number is a Strong Number
// AKASH SHARMA
#include<stdio.h>
#include<stdlib.h>
int main(void) {
  int n,s=0,t=0,x=0,y;
  printf("ENTER POSITIVE NUMBER \n");
  scanf("%d",&n);
  t=n;
  if(n<0)
  { printf("Wrong input" );
    exit(0);
  }
  if(n==0)
  {
    printf("%d is not a Strong number",n);
    exit(0);
  }
  for (size_t i = 0; y>0; i++) {
    y=t%10;
    t=t/10;
    x=x+s;
    s=1;
    for (size_t j = 1; j <= y; j++) {
      s=s*j;
    }


  }
  if(x==n)
  {
    printf("%d is strong number", n);
  }
  else
  printf("%d is not a strong number", n);
  return 0;
}
//AKASH SHARMA
