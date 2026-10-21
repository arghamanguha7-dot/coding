#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void checkbalance(float balance){
    printf("Your balance is: %.2f\n", balance);
}

float depositemoney(){
    float mone = 0.0f;
    printf("ENTER AMOUNT TO BE DEPOSITED: ");
    scanf("%f", &mone);
    return mone;
}

float Withdrawmoney(float balance){
    float wi = 0.0f;
    printf("ENTER AMOUNT TO BE WITHDRAWN: ");
    scanf("%f", &wi);

    if (wi <= balance){
        return wi;
    }
    else{
        int cho = 0;
        while (cho != 2){
            printf("ENTERED AMOUNT IS UNAVAILABLE IN ACCOUNT.\n");
            printf("1.DO YOU WANT TO ENTER NEW AMOUNT?\n");
            printf("2.EXIT\n");
            printf("ENTER CHOICE: ");
            scanf("%d", &cho);

            if (cho == 1){
                printf("ENTER NEW AMOUNT TO WITHDRAW: ");
                scanf("%f", &wi);
                if (wi <= balance){
                    return wi;
                }
                // else: falls through, loop repeats and asks again
            }
        }
        return 0.0f;
    }
}

int main(){
    int choice = 0;
    float balance = 0.0f;

    printf("### THE BANK ###\n");

    while (choice != 4){
        printf("\n1.CHECK BALANCE");
        printf("\n2.DEPOSITE MONEY");
        printf("\n3.WITHDRAW MONEY");
        printf("\n4.EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        if (choice == 1){
            checkbalance(balance);
        }
        else if (choice == 2){
            balance += depositemoney();
        }
        else if (choice == 3){
            balance -= Withdrawmoney(balance);
        }
        else if(choice==4){
            printf("THANK YOU FOR BANKING WITH US!");
        }
        else{
            printf("MAKE A PROPER CHOICE.");
        }
    }
    return 0;
}