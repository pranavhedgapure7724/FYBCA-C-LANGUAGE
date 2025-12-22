#include<stdio.h>
int main() {
	int number ;
	printf("entre the number");
	scanf("%d",&number);
	while(number>0){
		printf("number is positive");
		break; 
  	}
	while(number<0){
		printf("number is negative");
		break;
	} 
	return 0;
}
