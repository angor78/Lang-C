#include <stdio.h>
unsigned setbits(unsigned x,int p,int n,unsigned y);

//Compiler version gcc  6.3.0

int main()
{
  printf("%u\n",setbits(126,4,3,57));
  return 0;
}

unsigned setbits(unsigned x,int p,int n,unsigned y){
  //Обнуление поля для замены:xxxx0000xxxx
  unsigned a=x&~(~(~0<<n)<<(p+1-n));
  //Подготовка битового поля для замены:0000xxxx0000
  unsigned b=(y&~(~0<<n))<<(p+1-n);
  //Итоговое значение:xxxxyyyyxxxx
  return a|b;
}