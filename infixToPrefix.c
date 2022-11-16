#include <stdio.h>
#define size 10
char stack[size];
int top=-1;
int k=-1;

void push(char);
char pop(void);
char peek(void);
int prec(char);


void push(char x){
	if(top==size){
		printf("stack is full\n");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}

char pop(){
	char temp;
	if(top==-1){
		printf("stack is empty(pop)\n");
	}
	else
	{
		temp=stack[top];
		top--;
	}
	return temp;
}


char peek(){
	if(top==-1){
//		printf("stack is empty(peak)");
		return -1;
	}
	else
	{
		return stack[top];
	}
}

int prec(char ch)
{
    switch (ch) {
    case '+':
    case '-':
        return 1;
 
    case '*':
    case '/':
        return 2;
 
    case '^':
        return 3;
    }
    return -1;
}
int main(){
	int i,j,length;
	char temp;
	char infix[]= "a+[b*{c+(d-e)}+f]-g";
	length = strlen(infix);
	char exp[length];
	
	//scaning infix expression -right to left
	for(i=length-1;i>=0;i--){
		//conditions for operand
		if((infix[i]>='a' && infix[i]<='z') || (infix[i]>='A' && infix[i]<='Z'))
		{
			exp[++k]=infix[i];
		}
		else
		{
			//condition for operator
			if(prec(infix[i]) >= prec(peek()))
					push(infix[i]);
			else if(infix[i]==')')
			{
				push(infix[i]);
			}
			else if(infix[i]=='(')
			{
				while(peek() != ')')
				{
					exp[++k]=pop();
				}
				pop();
			}
			else if(infix[i]==']')
			{
				push(infix[i]);
			}
			else if(infix[i]=='[')
			{
				while(peek() != ']')
				{
					exp[++k]=pop();
				}
				pop();
			}
			else if(infix[i]=='}')
			{
				push(infix[i]);
			}
			else if(infix[i]=='{')
			{
				while(peek() != '}')
				{
					exp[++k]=pop();
				}
				pop();
			}
			else
			{
				while(prec(infix[i]) < prec(peek()))
				{
					exp[++k]=pop();
				}
				push(infix[i]);
			}
		}
	}
	//after scaning all elements pop and add all operator available in stack
	for(i=top;i>=0;i--){
		exp[++k]=pop();
	}
	//adding new line charactor in expression
	exp[++k]='\0';
	
	//reversing the expression
	for(i=0,j=k-1;i<k/2;i++,j--){
		temp=exp[i];
		exp[i]=exp[j];
		exp[j]=temp;
	}
	
	printf("Your infix Exp\t: %s\n",infix);
	printf("Prefix Exp\t: %s\n",exp);
	return 0;
}
