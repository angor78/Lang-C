#include <stdio.h>
#define MAX_LINE 10
#define LONG_LINE 5

int get_line(char line[], int maxline);
void reverse(char s[]);
int line_length(char s[]);

int main(){
	printf("\nEnter text max lenght %d and longer %d\n", MAX_LINE, LONG_LINE);
    char buf[MAX_LINE];
    int c;	
    int lengths;
    while ((lengths = get_line (buf, MAX_LINE)) != 0 && (c=getchar()) != EOF){
        printf("Source:%s,%d\n", buf, lengths);
        while (lengths != 0 && (buf[lengths-1] == ' ' || buf[lengths-1] == '\t'))
            buf[--lengths] = '\0';
        printf("Cut source: %s, %d\n",buf, lengths);
        reverse(buf);
        printf("Reversed source: %s, %d\n",buf, lengths);
        if (lengths > LONG_LINE)
            printf("Is longer than %d\n", LONG_LINE);
        else
            printf("Is shorter or equal than %d\n", LONG_LINE);
    }
}

int get_line(char s[], int max_line){
    int c, i;
    for(i = 0; i < max_line-1 && (c=getchar()) !='\n'; ++i)
        s[i] = c;
    s[i] = '\0';
    return i;
}

void reverse (char s[]){	
    int r = line_length(s)-1;
    printf("\nLength=%d", r);
    int l = 0;
    while (l < r){
        char c = s[r];
        s[r] = s[l];
        s[l] = c;
        ++l;
        --r;
    }
}

int line_length(char s[]){
    int i = 0;

    while(s[i] != '\0' )
        i++;
    return i;
}
