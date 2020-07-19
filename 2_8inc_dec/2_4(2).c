#include <stdio.h>
#define MAX 50
void squeeze(char s1[],char s2[]);
int en_str(char str[],int maxline);
//Compiler version gcc  6.3.0

int main()
{
  char str1[MAX];
  char str2[MAX];
  int len;
 
  printf("Введите первую строку:\n ");
  while((len=en_str(str1,MAX))==0);
  
  
  printf("Введите вторую строку:\n ");
  while((len=en_str(str2,MAX))==0);
  
  squeeze(str1,str2);
  
  printf("%s\n",str1);
  
  return 0;
}

void squeeze(char s1[],char s2[]){
  int i,j,k;
  for(i=0;s2[i]!='\0';i++){
    for(j=0;s1[j]!='\0';j++){
      if(s1[j]==s2[i]){
        for(k=j;s1[k]!='\0';k++)
          s1[k]=s1[k+1];
        j--;
      }
    }
  }
  
}

int en_str(char str[],int lim){
  int c,i;
  for(i=0;i<lim-1&&(c=getchar())!='@'&&c!='\n';++i)
    str[i]=c; 
    if(c=='\n')
      str[i++]=c;
    str[i]='\0';  
  
  return i;
}