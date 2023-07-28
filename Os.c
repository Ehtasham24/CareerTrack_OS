#include <stdio.h>

void bonusEnquiry();
void dividendFunds();

int main() {
    int choice;
    printf("\t\tWelcome to your Employee Management System:\n");
    printf("\t\t===========================================\n");
    
    do {
        printf("\t\tPlease select one of the options:\n");
        printf("\t\t1. Bonus Enquiry\n");
        printf("\t\t2. Dividend Funds\n\t\t");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bonusEnquiry();
                break;

            case 2:
                dividendFunds();
                break;

            default:
                printf("\t\tInvalid option. Please enter a correct choice.\n");
        }

        printf("\n\t\t===========================================\n");
        printf("\t\tDo you want to continue with more transactions?\n");
        printf("\t\t1. Yes\n");
        printf("\t\t2. No\n");
        scanf("%d", &choice);

        if (choice == 2) {
            printf("Program terminated.\n");
        }
    } while (choice == 1);

    return 0;
}

void bonusEnquiry() {
    float att, ot, sal, bonus;

    printf("\t\tEnter your attendance ratio: ");
    scanf("%f", &att);

    if (att >= 80) {
        printf("\t\tEnter total overtime duration: ");
        scanf("%f", &ot);

        if (ot >= 35) {
            printf("\t\tEnter your working hours: ");
            int wo;
            scanf("%d", &wo);

            if (wo >= 460) {
                printf("\t\tTarget completion:\n");
                printf("\t\t1. Yes\n");
                printf("\t\t2. No\n\t\t");

                int tar;
                scanf("%d", &tar);

                if (tar == 1) {
                    printf("\t\tEnter your salary: ");
                    scanf("%f", &sal);
                    bonus = (sal * 0.30) + (ot * 450);
                    printf("\t\tYour bonus for this month is: %.2f\n", bonus);
                }
            }
        }
    } else {
        printf("\t\tYou're not eligible for bonus application\n");
    }
}

void dividendFunds() {
    float sal;
    int ten, div_f;

    printf("\t\tEnter your Salary: ");
    scanf("%f", &sal);

    if (sal >= 80000) {
        printf("\t\tEnter your tenure with the company in years: ");
        scanf("%d", &ten);

        if (ten >= 3) {
            printf("\t\tPromotion?\n");
            printf("\t\t1. Yes\n");
            printf("\t\t2. No\n\t\t");

            int pro;
            scanf("%d", &pro);

            if (pro == 1) {
                div_f = ((sal * 0.10) * 12) * ten;
                printf("\t\tYour dividend funds amount is: %d\n", div_f);
            } else {
                printf("\t\tYou're not eligible for Dividend funds application\n");
            }
        } else {
            printf("\t\tYou're not eligible for Dividend funds application\n");
        }
    } else {
        printf("\t\tYou're not eligible for Dividend funds application\n");
    }
}

