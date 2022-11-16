#include <stdio.h>
#include <string.h>
#define size 10
char stack[size][1000];
int top=-1;
int k=-1;

void pushchar(char);
void push(char*);
char* pop(void);


void pushchar(char x){
	
	if(top==size){
		printf("stack is full\n");
	}
	else
	{
		top++;
		strcpy(stack[top]," ");
		stack[top][0]=x;
		//printf("%c pushed(stack)\n",stack[top][0]);
	}
}

void push(char *x){
	if(top==size){
		printf("stack is full\n");
	}
	else
	{
		top++;
		strcpy(stack[top]," ");
		strcpy(stack[top],x);
		//printf("%s pushed(stack)\n",stack[top]);
	}
}

char* pop(){
	char *temp;
	if(top==-1){
		printf("stack is empty(pop)\n");
	}
	else
	{
		//printf("before pop stack[top] = %s\n",stack[top]);
		temp=&stack[top];
		top--;
		//printf("after pop stack[top] = %s\n",stack[top]);
	}
	return temp;
}




int main(){
	int i,si;
	char cl=')';
	char op='(';
	char exp[size],str1[1000],str2[1000];
	char postfix[]= "abcd+*^";
	si = strlen(postfix);
	for(i=0;i<si;i++){
		//conditions for operand
		if((postfix[i]>='a' && postfix[i]<='z') || (postfix[i]>='A' && postfix[i]<='Z'))
		{
//			printf("%c pushed(main)\n",postfix[i]);
			pushchar(postfix[i]);
		}
		else
		{
			char str3[1000]="(";
			strcpy(str1,pop());
			strcpy(str2,pop());
			//printf("str2= %s, str1=%s\n",str2,str1);
			strcat(str3,str2);
    		strncat(str3,&postfix[i],1);
    		strcat(str3,str1);
    		strncat(str3,&cl,1);
//    		printf("str%s\n",str3);

			push(str3);
		}
	}

	//adding new line charactor in expression
	printf("\n\t\tExp: %s\n",stack[0]);
	return 0;
}
