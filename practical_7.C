#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sumOdd = 0; //for accumulating odd number, start from 0;
    int sumEven = 0; //for accumulating even numbers, start from 0;
    int upperBound = 0; //Sum from 1 to this upperBound;
    int absDiff; // absolute difference between two sum;

    printf("please provide a upperBound: "); //Prompt user for an upperBound
    scanf("%d", &upperBound); // user percent %d to read an int;

    int number = 1; //user a while-loop to repeatedly add 1,2,3 ... to upperBound
    while (number<=upperBound){
        if (number%2==0){
            sumEven = sumEven+number;
        }
        else{
            sumOdd = sumOdd+number;
        }
        number++;
    }
    absDiff = sumOdd - sumEven;
    if(absDiff<0){
        absDiff = - absDiff;// ensure the difference is positive
    }

    //print the results
    printf("sum of odd %d. \n", sumOdd);
    printf("sum of even %d. \n", sumEven);
    printf("difference %d. \n", absDiff);

    return 0;
}

