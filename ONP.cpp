#include<stdio.h>
#include<ctype.h>
#define SIZE 500

char stack[SIZE];
int top=-1;
 
void push(char e)
{
    stack[++top]=e;
}
 
char pop()
{                 
    return stack[top--];
}
 
int pr(char e)
{
    switch(e)
    {
        case '@': return 0;
        case '(': return 1;
        case '+':
        case '-': return 2;
        case '*':
        case '/': return 3;
    }
}
 
int main()
{             
    char infx[500],pofx[500],ch,c;
    int i=0,k=0;
    int t;
    scanf("%d",&t);
    do
    {
        //printf("Enter the infix expression: ");
        scanf("%s",infx);
        push('@');
        while( (ch=infx[i++]) != '\0')
        {
            if( ch == '(')
                push(ch);
            else
                if(isalnum(ch))
                    pofx[k++]=ch;
                else
                    if( ch == ')')
                    {
                        while( stack[top] != '(')
                            pofx[k++]=pop();
                        pop();
                    }
                    else
                    {
                        while( pr(stack[top]) >= pr(ch) )
                            pofx[k++]=pop();
                        push(ch);
                    }
        }
        while(stack[top] != '@')
            pofx[k++]=pop();
        pofx[k]='\0';
        printf("%s\n",pofx);
        i=k=0;
    }while(--t);
    return 0;
}