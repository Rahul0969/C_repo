#include<stdio.h>
#define size 5

int main(){
    int queue[size],front=-1,rear=-1,i,choice,value;

    while(1){
        printf("Menu:\n----------\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter the choice:");
        scanf("%d",&choice);

        if(choice==1){
            if((rear+1)%size==front){
                printf("Queue Overflow");
            }
            else{
                printf("Enter the value to Enqueue:");
                scanf("%d",&value);
                if(front==-1){
                    front=rear=0;
                }
                else{
                    rear=(rear+1)%size;
                }
                queue[rear]=value;
            }

        }
        else if(choice==2){
            if(front==-1){
                printf("Queue Overflow\n");         
            }
            else{
                printf("Dequeued %d from Queue",queue[front]);
                if(front==rear){
                    front=rear=-1;
                }
                else{
                    front=(front+1)%size;
                }
            }
        }
        else if(choice==3){
            if(front==-1){
                printf("Queue Overflow\n");         
            }
            else{
                printf("Queue Elements\n");
                i=front;
                while(1){
                    printf("%d",queue[i]);
                    if(i==rear){
                        break;
                    }
                    else{
                        i=(i+1)%size;
                    }
                    printf("\n");
                }
            }
            
        }
        else if(choice==4){
            break;
        }
        else{
            printf("Invalid Input.Try Again!!\n");
        }

    }

    return 0;
}