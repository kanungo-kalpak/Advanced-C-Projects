/C program to design love calculator./

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//function will return sum of all digits
int sumOfDigits(int num)
{
    int sum = 0;         #updated by Shreya Bose
    while (num > 0) {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

int main()
{
    char yName[40], pName[40];
    int sum, sum1, i, choice;    #updated by Shreya Bose
    float perc = 0;              #updated by Shreya Bose

    do {
        printf("Enter your name: ");     
        fflush(stdin);
        gets(yName);

        printf("Enter your partner's name: ");     #updated by Shreya Bose
        fflush(stdin);
        gets(pName);            #updated by Shreya Bose                

        sum = 0;
        for (i = 0; i < (strlen(yName)); i++) {
            sum += tolower(yName[i]);
        }

        sum1 = 0;
        for (i = 0; i < (strlen(yName)); i++) {
            sum1 += tolower(pName[i]);
        }

        perc = (sumOfDigits(sum) + sumOfDigits(sum1)) + 40;     #updated by Shreya Bose
        if (perc > 100)
            perc = 100;

        printf("Your love percentage is: %.02f\n\n", perc);      

        printf("Want to calculate with some one else (0 to exit, 1 to continue) ???: ");     #updated by Shreya Bose
        scanf("%d", &choice);

    } while (choice != 0);

    return 0;              #updated by Shreya Bose
}
