#include<stdio.h>
int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
int div(int a,int b){
	return a/b;
}
int main(){
	int (*fp[4])(int,int)={add,sub,mul,div};
	printf("%d\n",fp[0](2,3));
	printf("%d\n",fp[1](2,3));
	printf("%d\n",fp[2](2,3));
	printf("%d\n",fp[3](2,3));
}