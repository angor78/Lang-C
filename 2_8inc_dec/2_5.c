#include <stdio.h>
#define MAX 50
int any(char s1[],char s2[]);
int en_str(char str[],int maxline);
//Compiler version gcc  6.3.0

int main()
{
  char str1[MAX];
  char str2[MAX];
  int len;
  int pos;
 
  printf("Введите первую строку:\n ");
  while((len=en_str(str1,MAX))==0);
  
  
  printf("Введите вторую строку:\n ");
  while((len=en_str(str2,MAX))==0);
  
 // any(str1,str2);
  pos=any(str1,str2);
  printf("Совпадение: %d\n",pos);
 
  
  return 0;
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

int any(char s1[],char s2[]){
  int i,j;
  for(i=0;s1[i]!='\0';i++){
    for(j=0;s2[j]!='\0';j++){
      if(s1[i]==s2[j]&&s1[i]!='\n'){
        printf("Отладка i:%d\t j:%d\t s1[i]:%c\t s2[j]:%c\n",i,j,s1[i],s2[j]);
        return i;
      }    
    }
  }
  return -1;
}