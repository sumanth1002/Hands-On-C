#include<stdio.h>
#include<ctype.h>
int main(){
	char ch;
	scanf("%c",&ch);
	if(isalpha(ch)){
		if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
			printf("Vowel");
		}
		else{
			printf("Consonant");
		}
	}
	else if(isdigit(ch)){
		printf("Digit");
	}
	else{
		printf("Special character");
	}
	return 0;
}