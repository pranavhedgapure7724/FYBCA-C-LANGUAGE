#include<stdio.h>
int main() {
	int day;
	printf("entre the day as a number from 0 to 6");
	scanf("%d",&day);
	switch(day) {
	case 0: printf("sunday");
	break;
	case 1: printf("monday");
	break;
	case 2: printf("tuesday");
	break;
	case 3: printf("wednesday");
	break;
	case 4: printf("thrusday");
	break;
	case 5: printf("friday");
	break;
	case 6: printf("saturday");
	break;
	default: printf("wrong input");
	
	
	return 0;
	
	
	
	
	}
}
