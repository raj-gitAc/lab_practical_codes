#include <stdio.h>

int main(){
    printf("decison making constructs practical\n");
    printf("this is a scripts to calculate your total tution fee, fee is 4500 per month\n");

    int fee_per_month = 4500;
    int fee;
    int want_to_admit;
    char str[] = "yes";
    int total_month;

    printf("write 0 if you want to get admitted, 1 if not\n");
    scanf("%d", &want_to_admit);
    if (want_to_admit == 0){
        printf("how many month do you want to take the course? give in number\n");
        scanf("%d", &total_month);
        if(scanf){
            printf("stay put calculating\n");
            fee = total_month*fee_per_month;
        }
        printf("thank you for enrolling your fee is %d\n", fee);
    };

}

