#include <stdio.h>
void sort(int arr[],int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]>arr[j]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main() {
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int a1[n1],a2[n2];
    for(int i=0;i<n1;i++){
    	scanf("%d",&a1[i]);
	}
	for(int i=0;i<n2;i++){
		scanf("%d",&a2[i]);
	}
	int new[n1+n2];
    for(int i= 0;i<n1;i++)
        new[i]=a1[i];
    for(int i=0;i<n2;i++)
        new[n1+i]=a2[i];
    sort(new,n1+n2);
    for(int i=0;i<n1+n2;i++)
        printf("%d ", new[i]);
    return 0;
}