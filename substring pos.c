#include<stdio.h>
#include<string.h>
int substr(char s1[],char s2[]){
	int n,m;
	n=strlen(s1);
	m=strlen(s2);
	for(int i=0;i<=n-m;i++){
		int j=0;
		for(j=0;j<m;j++){
			if(s1[i+j]!=s2[j])
			break;
		}
		if(j==m)
		return i;
	}
	return -1;
}
int main(){
	char s1[100],s2[100];
	fgets(s1,sizeof(s1),stdin);
	fgets(s2,sizeof(s2),stdin);
	int index = substr(s1, s2);
	if (index != -1) 
	printf("Index: %d\n", index); 
	else printf("No Substring\n"); 
	return 0;
}