#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char s[100];
	fgets(s,sizeof(s),stdin);
	int start=0,end=strlen(s)-1;
	int i,flag=1;
	while(start<end){
		while(start<end&&!isalnum(s[start])){
			start++;
		}
		while(start<end&&!isalnum(s[end])){
			end--;
		}
		if(tolower(s[start]!=tolower(s[end]))){
			flag=0;
		}
		start++;
		end--;
	}
	if(flag==0){
		printf("Not a Palindrome");
	}
	else{
		printf("Palindrome");
	}
	return 0;
}