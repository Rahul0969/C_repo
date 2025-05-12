#include<stdio.h>

int main(){
    int queue[100],choice,value,i;
    int front=-1,rear=-1;

    while(1){
        printf("Menu\n-------\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter Your choice:");
        scanf("%d",&choice);

        if(choice==1){
            if(rear==99){
                printf("Queue Overflow");
            }
            else{
                printf("Enter the value to Enqueue:");
                scanf("%d",&value);
                if(front==-1)
                    front=0;
                queue[++rear]=value;
            }

        }
        else if(choice==2){
            if(front==-1 || front>rear){
                printf("Queue Undeflow");
            }
            else{
                printf("Dequeued %d from Queue",queue[front++]);
            }
        }
        else if(choice==3){
            if(front==-1 || front>rear){
                printf("Queue Empty");
            }
            else{
                printf("Queue Elments:");
                for(i=front;i<=rear;i++){
                    printf("%d\t",queue[i]);
                }
            }
        }
        else if(choice==4){
            break;
        }
        else{
            printf("Invalid Input\n");
        }

    }

    return 0;
}