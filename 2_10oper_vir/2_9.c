#include <stdio.h>
int bitcount(unsigned x);
//Compiler version gcc  6.3.0

int main()
{
  printf("%u\n",bitcount(100));
  return 0;
}

int bitcount(unsigned x){
  int b;
  for(b=0;x!=0;x&=(x-1))
    b++;
  return b;
}