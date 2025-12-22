#include<stdio.h>
int main() {
	int select;
	
	printf("traffic light \n");
	printf("1. red \n");
	printf("2.yellow \n");
	printf("3.green \n");
	printf("select the number 1 to 3");
	scanf("%d",&select);
	
	switch(select) {
		case 1:("red \n");
		printf("stop..!");
		break;
		case 2:("green \n");
		printf("Go");
		break;
		case 3:("yellow \n");
		printf("ready");
		break;
		return 0;
	}
}
