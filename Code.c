/*C program to design love calculator.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//function will return sum of all digits
int sumOfDigits(int num)
{
    
    while (num > 0) {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

int main()
{
    char yName[40], pName[40];
   
    

    do {
        printf("Enter your name: ");
        fflush(stdin);
        gets(yName);

        
        fflush(stdin);
        

        sum = 0;
        for (i = 0; i < (strlen(yName)); i++) {
            sum += tolower(yName[i]);
        }

        sum1 = 0;
        for (i = 0; i < (strlen(yName)); i++) {
            sum1 += tolower(pName[i]);
        }

       
        if (perc > 100)
            perc = 100;

        printf("Your love percentage is: %.02f\n\n", perc);

        
        scanf("%d", &choice);

    } while (choice != 0);

    
}
