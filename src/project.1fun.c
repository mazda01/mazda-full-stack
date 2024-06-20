#include <stdio.h>

int main()
 {
    char operator;
    int FirstNumber, SecondNumber;

    while (1) 
    {
        
        printf("Enter an operator (+, -, *, /), if want to exit press x: ");
        scanf(" %c", &operator);

        if (operator == 'x'|| operator == 'X') 
        {
            break;
        }
        printf("Enter two Number: ");
        scanf("%d %d", &FirstNumber, &SecondNumber);
        switch (operator) 
        {
            case '+':
                printf("%d + %d = %d\n", FirstNumber, SecondNumber, FirstNumber + SecondNumber);
                break;
            case '-':
                printf("%d - %d = %d\n", FirstNumber, SecondNumber, FirstNumber - SecondNumber);
                break;
            case '*':
                printf("%d * %d = %d\n", FirstNumber, SecondNumber, FirstNumber * SecondNumber);
                break;
            case '/':
                printf("%d / %d = %d\n",FirstNumber,SecondNumber,FirstNumber/SecondNumber);
                break;
            default:
                printf("Invalid operator.\n");
        }
    }
    return 0;
}