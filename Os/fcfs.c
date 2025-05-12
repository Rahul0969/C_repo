#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of Process to use:");
    scanf("%d",&n);

    int burst_time[n],comp[n],wait_time[n];

    printf("Enter the burst time for %d processess\n",n);
    for(int i=0;i<n;i++){
        printf("P[%d]:",i+1);
        scanf("%d",&burst_time[i]);
    }

    //printing input burst times
    printf("The burst time for %d processess\n",n);
    for(int i=0;i<n;i++){
        printf("P[%d]:",i+1);
        printf("%d\n",burst_time[i]);
    }

    printf("The Waiting Time is as follows:\n");
    wait_time[0]=0;
    for(int i=1;i<n;i++){
        if(i==1){
            printf("%d\t",wait_time[0]);
        }
        wait_time[i]=burst_time[i-1]+wait_time[i-1];
        printf("%d\t",wait_time[i]);
    }
    printf("\nThe Completion Time is as follows:\n");
    for(int i=0;i<n;i++){
        comp[i]=wait_time[i]+burst_time[i];
        printf("%d\t",comp[i]);
    }

    return 0;
}