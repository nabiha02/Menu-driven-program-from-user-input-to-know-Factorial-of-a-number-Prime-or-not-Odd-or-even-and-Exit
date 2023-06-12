/* Write a menu driven program which has following options:
1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit
Make use of if statement. You must make sure that the program does not exit until option 4 Exit
is selected */

#include <stdio.h>

int main(void) {
  int choice, num, i, fact, isPrime, isOdd;

   do {
    printf("\nSelect an option:\n");
    printf("1. Factorial of a number\n");
    printf("2. Prime or not\n");
    printf("3. Odd or even\n");
    printf("4. Exit\n");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter a number: ");
        scanf("%d", &num);

        fact = 1;
        for (i = 1; i <= num; i++) {
          fact *= i;
        }

        printf("Factorial of %d is %d\n", num, fact);
        break;

      case 2:
        printf("Enter a number: ");
        scanf("%d", &num);

        isPrime = 1;
        for (i = 2; i <= num / 2; i++) {
          if (num % i == 0) {
            isPrime = 0;
            break;
          }
        }

        if (isPrime) {
          printf("%d is a prime number\n", num);
        } else {
          printf("%d is not a prime number\n", num);
        }
        break;

      case 3:
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
          printf("%d is an even number\n", num);
        } else {
          printf("%d is an odd number\n", num);
        }
        break;

      case 4:
        printf("Exiting program...\n");
        break;

      default:
        printf("Invalid choice. Please select a valid option.\n");
        break;
    }

  }  while (choice != 4);

  return 0;
}

