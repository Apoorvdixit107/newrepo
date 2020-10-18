/***INFIX TO POSTFIX CONVERSION***/
#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 20
struct stack
{
	int top;
	char item[STACKSIZE];
};
void initialize(struct stack *s)
{
s->top=-1;	
};
int main(){
	struct stack s;
	char infix[20];
	printf("\nENTER YOUR INFIX EXPRESSION:=>> ");
	scanf("%s",infix);
	
}
printf("dev brach\n");
printf("in dev branch");