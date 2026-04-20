#include<stdio.h>
#include<math.h>
int dig(int n){
	int c=0;
	while(n!=0){
		c++;
		n=n/10;
	}
	return c;
}
int arm(int n){
	int td=dig(n);
	int arms=0;
	while(n!=0){
		int digi=n%10;
		arms=arms+pow(digi,td);
		n=n/10;
	}
	return arms;
}
int main(){
	int n;
	scanf("%d",&n);
	if(n==arm(n)){
		printf("Armstrong number");
	}
	else{
		printf("Not an armstrong number");
	}
	return 0;
}