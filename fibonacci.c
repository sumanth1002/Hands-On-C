#include<stdio.h>
int main(){
	int a=0,b=1;
	int n,next;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("%d ",a);
		b=a+b;
		a=b-a;
	}
	return 0;
}