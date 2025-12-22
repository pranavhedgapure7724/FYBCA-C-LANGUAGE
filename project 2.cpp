#include<stdio.h>
int main() { 
char operater;
printf("entre an operater");
scanf("%c",&operater);

int a,b,sum,sub,mul,div,mod;
printf("entre the values a & b: ");
scanf("%d %d",&a,&b);

switch(operater)
{ 
case'+':sum=a+b;
        printf("addition is %d",sum);
        break;
case'-':sub=a-b;
        printf("subtraction is %d",sub);
		break;
case'*':mul=a*b;
        printf("multipilcation is %d",mul);
		break;
case'/':div=a/b;
        printf("division is %d" ,div);
		break;
case'%':mod=a%b;
        printf("modulus is %d",mod);
		break;
		default: printf("wrong input");
		return 0;		
				       
}
}
