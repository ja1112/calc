#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>

void addition(float *ptr, float operand);
void subtraction(float *ptr, float operand);
void multiplication(float *ptr, float operand);
void division(float *ptr, float operand);
void resetFunction(float *reset_ptr);
void exitFunction(void);
char clearOrExit[2] = "0"; // Variable used to reset current value.

int main()
{
    /*int x = 0;
    int *ptrx = &x; // Store address of x in ptrx.
    int **ptrptrx = &ptrx; // A pointer holding address of another pointer.
    printf("%d\n",x);
    printf("%p\n",ptrx);
    printf("%p\n", ptrptrx);
    */
    printf("\n");
    printf("0\t1\t2\t3\t4\t5\t6\t7\t8\t\9\n\n");
    printf("+\t-\t*\t/\t@0\t#0\n\n");
    float firstOperand = 0, secondOperand = 0;
    float *result = &firstOperand;
    char userOperator = '0';
    bool calculatorStatus = true; //Calculator is on.
    start:
        printf("Start calculations:)\n");
        printf("Enter first number.\n");
        scanf(" %f", &firstOperand);
        do
        {
            printf("Enter the operator.\n");
            scanf(" %c", &userOperator);
            printf("Enter the second number.\n");
            scanf(" %f", &secondOperand);
            switch(userOperator)
            {

            case '+':
                {
                    addition(result,secondOperand);
                    printf("Enter @0 to clear the result or #0 to exit or any character to continue.\n");
                    scanf("%s", clearOrExit);
                    if(!strcmp("@0", clearOrExit))
                    {
                        resetFunction(result);
                        goto start;
                    }
                    else if(!strcmp("#0", clearOrExit))
                    {
                        exitFunction();
                    }
                    break;
                }

            case '-':
                {
                   subtraction(result,secondOperand);
                   printf("Enter @0 to clear the result or #0 to exit or any character to continue.\n");
                   scanf("%s", clearOrExit);
                    if(!strcmp("@0", clearOrExit))
                    {
                        resetFunction(result);
                        goto start;
                    }
                    else if(!strcmp("#0", clearOrExit))
                    {
                        exitFunction();
                    }
                   break;
                }

            case '*':
                {
                    multiplication(result,secondOperand);
                    printf("Enter @0 to clear the result or #0 to exit or any character to continue.\n");
                    scanf("%s", clearOrExit);
                    if(!strcmp("@0", clearOrExit))
                    {
                        resetFunction(result);
                        goto start;
                    }
                    else if(!strcmp("#0", clearOrExit))
                    {
                        exitFunction();
                    }
                    break;
                }

            case '/':
                {
                    division(result,secondOperand);
                    printf("Enter @0 to clear the result or #0 to exit or any character to continue.\n");
                    scanf("%s", clearOrExit);
                    if(!strcmp("@0", clearOrExit))
                    {
                        resetFunction(result);
                        goto start;
                    }
                    else if(!strcmp("#0", clearOrExit))
                    {
                        exitFunction();
                    }
                    break;
                }

            case '#':
                {
                    printf("Goodbye:(\n");
                    calculatorStatus = false;
                    break;
                }
            case '@':
                {
                    goto start;
                    break;
                }
            default:
                {
                    printf("Error:(\n");
                    goto start;
                }
            }

        }while(calculatorStatus);

    return 0;
}

void addition(float *ptr, float operand)
{
    printf("%f + %f =\t", *ptr,operand);
    *ptr += operand;
    printf("%f\n\n",*ptr);

}

void subtraction(float *ptr, float operand)
{

    printf("%f - %f =\t", *ptr,operand);
    *ptr -= operand;
    printf("%f\n\n",*ptr);

}
void multiplication(float *ptr, float operand)
{
    printf("%f * %f =\t", *ptr,operand);
    *ptr *= operand;
    printf("%f\n\n",*ptr);

}
void division(float *ptr, float operand)
{
    printf("%f / %f =\t", *ptr,operand);
    *ptr /= operand;
    printf("%f\n\n",*ptr);

}

// Function to reset current result.
void resetFunction(float *reset_ptr)
{
    *reset_ptr = 0;


}
void exitFunction(void)
{
    printf("Program exiting.\n");
    exit(0);
}

//int continueExecution()
