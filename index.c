#include <stdio.h>

int main() {
    // question no 1
    int number;
    printf("enter a number");
    scanf("%d", &number);
    (number % 2 == 0) ? printf("the number is even.\n") : printf("the number is odd.\n");
     

     // question no 2

      int monthnumber;
    printf("Enter the month number: ") ;
    scanf("%d", &monthnumber) ;
    switch (monthnumber) {
        case 1:
            printf("Jan\n") ;
            break;
        case 2:
            printf("Feb\n") ;
            break;
        case 3:
            printf("March\n") ;
            break;
        case 4:
            printf("April\n") ;
            break;
        case 5:
            printf("May\n") ;
            break;
        case 6:
            printf("June\n") ;
            break;
        case 7:
            printf("July\n") ;
            break; 
        case 8:
            printf("August\n") ;
            break;
        case 9:
            printf("Sep\n") ;
            break;
        case 10:
            printf("October\n") ;
            break;
        case 11:
            printf("Nov\n") ;
            break;
        case 12:
            printf("Dec\n") ;
            break;
        default:
            printf("Invalid month number.....\n") ;
    }

// question no 3

int year;
    printf("Enter a year : ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
        printf("%d is a leap year.\n", year);
        } else
        {
        printf("%d is not a leap year.\n", year);
        }

 return 0;
}