

#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        if((iNo % 5) ==0)
        {
            printf("Its is divisible");


        }
        else
        {
            printf("Its not divisible");
        }

    }
    else
    {
        printf("Its not Divisible");
    }

}

int main()
{

    int iValue = 0;
    printf("Enter a no: \n");
    scanf("%d",&iValue);
    checkDivisible(iValue);



    return EXIT_SUCCESS;
}