#include<stdio.h>
#include<conio.h>

void main(){
	
	int a,b,c;
	clrscr();
	printf("enter value of A: ");
	scanf("%d",&a);
	printf("enter value of B: ");
	scanf("%d",&b);
	
	c=a+b;
	
	b=c-b;
	
	a=c-b;
	
	printf("\nthe value of A is: %d",a);
	printf("\nthe value of B is: %d",b);	

getch();	

}
