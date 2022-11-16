#include <stdio.h>
#define size 20

//user defined functions declaration
int pop();
void push(int);

//Global Variable declaration
int top=-1;
int stack[size];


// main function start:-
int main(){
	char sc[size][10];
	int no_lit,i,num,num1,num2,num3;
	printf("Enter size of literals(max=%d): ",size);
	scanf("%d",&no_lit);
	getchar();
	if(no_lit>=size || no_lit<3 || no_lit%2==0)
	{
		printf("cant run program..\nInvalid no. of literals");
		exit(0);
	}
	else
	{
		printf("Enter Prefix expression with space: ");
		
		for(i=0;i<no_lit;i++){
			scanf("%s",&sc[i]);
		}
		
		
		for(i=no_lit-1;i>=0;i--)
		{
			if(sc[i][0]<='9' && sc[i][0]>='0')
			{
				num=atoi(sc[i]);
	 			push(num);
			}
			else
			{
				switch(sc[i][0])
				{
					case ' ':
						break;
					case '+':
						num1=pop();
						num2=pop();
						num3=num1+num2;
						push(num3);
//						printf("%d + %d = %d\n",num1,num2,num3);
						break;
					case '-':
						num1=pop();
						num2=pop();
						num3=num1-num2;
						push(num3);
//						printf("%d - %d = %d\n",num1,num2,num3);
						break;
					case '*':
						num1=pop();
						num2=pop();
						num3=num1*num2;
						push(num3);
//						printf("%d * %d = %d\n",num1,num2,num3);
						break;
					case '/':
						num1=pop();
						num2=pop();
						num3=num1/num2;
						push(num3);
//						printf("%d / %d = %d\n",num1,num2,num3);
						break;
					case '^':
						num1=pop();
						num2=pop();
						num3=pow(num1,num2);
						push(num3);
//						printf("%d ^ %d = %d\n",num1,num2,num3);
						break;
					case '%':
						num1=pop();
						num2=pop();
						num3=num1%num2;
						push(num3);
//						printf("%d % %d =%d\n",num1,num2,num3);
						break;
					default:
						
						printf("something wrong char=%s",sc[i]);
						exit(0);
				}
			}
		}
	}
	//printf the last element available in the stack
	if(top==0)
		printf("Answer is : %d",stack[top]);
	else
		printf("Not a valid postfix expression..");
	return 0;
}
//main function end here


//pushing  operand into stack
void push(int x){
	if(top==size-1)
	{
		printf("stack full (overflow)..\n");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}


//geting back top element and pop from stack
int pop(){
	int temp;
	if(top<0)
	{
		printf("stack is empty(underflow)..\n");
		exit(0);
	}
	else
	{
		temp=stack[top];
		top--;
	}
	
	return temp;
}
