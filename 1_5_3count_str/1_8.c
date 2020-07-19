
#include <stdio.h>
int main(){
	int c;
	int nl = 0;
	int spc = 0;
	int tab = 0;
	while((c = getchar()) != EOF){
		if (c == '\t'){
		++tab;
		printf("%d\n", tab);
		}
		if (c == '\n'){
		++nl;
		}
		if(c == ' '){
		++spc;
		}
	}
	printf("%d\n", tab);
}
