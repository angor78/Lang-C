#include <stdio.h>
unsigned rightrot(unsigned x,unsigned n);

//Compiler version gcc  6.3.0

int main()
{
  unsigned x;
  int n;
  
  for(x=0;x<700;x=x+49)
    for(n=1;n<8;n++)
      printf("%u, %d: %u\n",x,n,rightrot(x,n));
  return 0;
}

unsigned rightrot(unsigned x,unsigned n){
  while(n>0)
  {
    if((x&1)==1)
      x=(x>>1)|~(~0>>1);
    else
      x=(x>>1);
    n--;
  }
  return x;
}