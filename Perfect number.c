#include<stdio.h>
int isper(int n){
	int s=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			s+=i;
		}
	}
	if(n==s)
	return 1;
	else
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	if(isper(n))
	printf("Perfect number");
	else{
		printf("Not a perfect number");
	}
	return 0;
}