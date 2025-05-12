#include<stdio.h>

int main(){
    int n;
    printf("Enter the no of process to use:");
    scanf("%d",&n);

    int burst[n],comp[n],wait[n];

    printf("Enter the burst time for %d processess:\n",n);
    for(int i=0;i<n;i++){
        printf("P[%d]:",i+1);
        scanf("%d",&burst[i]);
    }
    printf("Burst time for %d processess:\n",n);
    for(int i=0;i<n;i++){
        printf("P[%d]:",i+1);
        printf("%d\n",burst[i]);
    }
    for(int j=0;j<n-1;j++){
        for(int k=0;k<n-j-1;k++){
            if(burst[k]>burst[k+1]){
                int temp=burst[k];
                burst[k]=burst[k+1];
                burst[k+1]=temp;
            }
        }
    }
    printf("\nWaiting Time:\n");
    wait[0]=0;
    for(int i=1;i<n;i++){
        if(i==1){
            printf("%d\t",0);
        }
        wait[i]=wait[i-1]+burst[i-1];
        printf("%d\t",wait[i]);
    }
    return 0;
}