//stack
#include<stdio.h>
#define SIZE 10
int top=-1,stk[SIZE];
void push();
void disp();
void pop();
int main();
{
    int ch;
    do{
       printf("\npress 1 for Push: ");
       printf("\npress 2 for Display: ");
       printf("\npress 3 for POP: ");
       printf("\n Enter your ch: ");
       scanf("%d",&ch);
       switch(ch)
       {
        case 1: push();
        break;
        case 2: disp();
        break;
        case 3:pop();
        break;
        default:
        ch=0;
        break;
       }
    }while(ch!=0);
}//main function close
void push()
{
    int data;
    if(top==SIZE-1){
        printf("\nstack id not empty\n ");
    }else{
        top++;
        printf("Enter value: ");
        scanf("%d",&data);
        stk[top]=data;
    }
}
