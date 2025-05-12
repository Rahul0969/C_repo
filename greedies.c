#include <stdio.h>

int calc_quaters(int cents){
    int quaters=0;
    while(cents>=25){
        cents=cents-25;
        quaters++;
    }
    return quaters;
}

int calc_dimes(int cents){
    int dimes=0;
    while(cents>=10){
        cents=cents-10;
        dimes++;
    }
    return dimes;
}

int calc_nickels(int cents){
    int nickels=0;
    while(cents>=5){
        cents=cents-5;
        nickels++;
    }
    return nickels;
}

int calc_pennies(int cents){
    int pennies=0;
    while(cents>=1){
        cents=cents-1;
        pennies++;
    }
    return pennies;
}

int main(){
    //Input the value of change owed
    int cents;
    do{
        printf("Cash owed:");
        scanf("%d",&cents);
    }while(cents<0);

    //Calculate quaters
    int quaters=calc_quaters(cents);
    cents=cents-(quaters*25);

    //for dimes
    int dimes=calc_dimes(cents);
    cents=cents-(dimes*10);

    //for nickels
    int nickels=calc_nickels(cents);
    cents=cents-(nickels*5);

    int pennies=calc_pennies(cents);
    cents=cents-(pennies*1);

    int finalvalue=quaters+dimes+nickels+pennies;
    printf("%d",finalvalue);

    return 0;
}