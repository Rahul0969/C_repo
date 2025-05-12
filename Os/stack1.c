#include <stdio.h>

int main(){
    int stack[100],top=-1,i,choice,value;

    while(1){
        printf("\nMenu\n--------\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter Choice:");
        scanf("%d",&choice);
        if(choice==1){
            if(top==99){
                printf("Stack Overflow!!\n");
            }
            else{
                printf("Enter the value:");
                scanf("%d",&value);
                stack[++top]=value;
            }
        }
        else if(choice==2){
            if(top==-1){
                printf("Stack Underflow!!\n");
            }
            else{
                printf("Scuccessfull");
                printf("Popped %d from stack",stack[top--]);
            }
        }
        else if(choice==3){
            if(top==-1){
                printf("Stack Empty!!\n");
            }
            else{
                printf("Stack elements:");
               for(i=top;i>=0;i--){
                printf("%d\t",stack[i]);
               }
            }

        }
        else if(choice==4){
            break;
        }
        else{
            printf("Invalid input!!!\n");
        }
    }
    return 0;
}