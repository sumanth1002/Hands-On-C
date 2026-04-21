#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	fgets(s,sizeof(s),stdin);
	int i=0;
	while(s[i]!='\0'){
		i++;
	}
	printf("%d",i-1);
	return 0;
}