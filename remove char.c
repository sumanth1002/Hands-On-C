#include<stdio.h>
int main(){
	char s[100],t[100],ch;
	fgets(s,sizeof(s),stdin);
	scanf("%c",&ch);
	int i=0,j=0;
	while(s[i]!='\0'){
		if(s[i]!=ch){
			t[j++]=s[i];
		}
		i++;
	}
	printf("%s",t);
	return 0;
}