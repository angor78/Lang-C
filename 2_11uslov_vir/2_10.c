#include <stdio.h>
#define MAX 1000
int getstr(char s[],int maxline);
int lower(int c);

//Compiler version gcc  6.3.0

int main()
{
  int len=0;
  char line[MAX];
  
  while((len=getstr(line,MAX))>0){
    printf("%s",line);
  }
  
  return 0;
}



int getstr(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != '@' && c != '\n'; ++i)
    {
        s[i] = lower(c);
    }
    if (c == '\n')
    {
        s[i] = c;
        +i;
    }
    s[i] = '\0';
    return i;

}

int lower(int c){
  return(c>='A'&&c<='Z')?c+'a'-'A':c;
}
