#include <stdio.h>
unsigned invert(unsigned x,int p,int n);

//Compiler version gcc  6.3.0

int main()
{
  printf("%u\n",invert(125,4,2));
  return 0;
}

unsigned invert(unsigned x,int p,int n){
  unsigned mask=~(~0<<n)<<(p+1-n);
  return x^mask;
}