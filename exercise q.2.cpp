#include<stdio.h>
int main() {
	int a, b, sum;
	int sum=0;
	printf("entre the two integer:");
	scanf("%d %d",&a,&b);
	while(a<=b) {
		printf("%d",a);
		sum=sum+a;
		a++;
	}
	printf("\nsum=%d,sum");
	return 0 ;
}
