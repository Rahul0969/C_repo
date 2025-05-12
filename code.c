#include <stdio.h>

// int main(void){
//     int rows=4;

//     for(int i=0;i<rows;i++){

//         for(int j=0;j<=i;j++){
//             printf("#");
//         }
//         printf("\n");
//     }
// }

int main(void){
    int rows=4;

    for(int i=0;i<rows;i++){

        for(int k=rows;k<=i;k--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("#");
        }
        printf("\n");
    }      
}