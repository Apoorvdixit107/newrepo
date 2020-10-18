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
void push(char x){
	if(s.top==(STACKSIZE-1)){
		printf("\nOVERFLOWS");
		exit(1);
	}
	s.item[s.top]=x;
}
char pop(){
	if (s.top==-1)
	{printf("\nunderflows");
		/* code */exit(0);
	}
}
int main(){
	struct stack s;
	char infix[20];
	printf("\nENTER YOUR INFIX EXPRESSION:=>> ");
	scanf("%s",infix);
	
}

