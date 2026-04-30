#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char **a,char **b) {
    char *temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
    char *s1=(char *)malloc(20);
    char *s2=(char *)malloc(20);

    strcpy(s1,"Hyderabad");
    strcpy(s2,"Chennai");
    swap(&s1,&s2);
    printf("s1 = %s\n",s1);
    printf("s2 = %s\n",s2);
    free(s1);
    free(s2);
    return 0;
}