#include<stdio.h>
int main() {
	int day;
	printf("entre the number as a day as a number from 0 to 6");
	
	scanf("%d",&day);
	
	if(day==0) {
		printf("sunday.\n");
		printf("woah its hoilday");
	}
	else if (day==1) {
		printf("monday");
	}
	else if (day==2) {
		printf("tuesday");
	}
	else if (day==3) {
		printf("wednesday");
	}
	else if(day==4) {
		printf("thrusday");
	}
	else if(day==5) {
		printf("friday");
		
	}
	else if (day==6) {
		printf("saturday");
	}
	else{
		printf("wrong input");
	}
	
	return 0;
}
