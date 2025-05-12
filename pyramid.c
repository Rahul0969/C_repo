#include <stdio.h>

void pattern(int height);

int main(void){
    int height;

    do{
    printf("Enter the height:");
    scanf("%d",&height);
        if(height>0 && height<9){
            pattern(height);
            break;
        }
        else{
            continue;
        }
    }
    while(1);
}
void pattern(int height){
    int i,j;

    for(i=1;i<=height;i++){
        for(j=0;j<=2*height;j++){
            if(j>=height-i && j<=height+i){
                if(j!=height){
                printf("#");
                }
                else{
                printf(" ");
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
   
}