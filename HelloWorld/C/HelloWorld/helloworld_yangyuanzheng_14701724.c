#include "stdio.h"

int main(){
	int a;
        printf ("Please enter numbers for a:\n");
        scanf("%d",&a);
        int b;
        printf ("Please enter numbers for b:\n");
        scanf("%d",&b);
        /* Maybe on this line,I should add some verifications when user does not input a numer,but I don't know how to*/
	int sum = a + b;
	printf("Hello World! I can use C programing laugeuage to calculate sum (a,b)= %d",sum);
	return 0;
}