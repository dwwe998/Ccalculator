#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
system("color 0A");
double a;
double b;
char opr;
double res;	

	printf("what u wan to do\n");

	scanf("%c",&opr);	
	printf("tell num1");
	scanf("%lf",&a);
		printf("tell num2");
	scanf("%lf",&b);
	switch(opr){
		case '+' : 
		res = a+b;
		printf("%lf",res);
		
		break;
			case '*' : 
		res = a*b;
		printf("%lf",res);
		
		break;
		
			case '/' : 
		res = a/b;
		printf("%lf",res);
		
		break;
		
			case '-' : 
		res = a-b;
		printf("%lf",res);
		
		break;
		
		
	}
	
	return 0;
}