#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int sum,diff,mul,div;
	sum=a+b;
	diff=a-b;
	mul=a*b;
	div=a/b;
	printf("%d  %d  %d  %d",sum,diff,mul,div);
	return 0;
}