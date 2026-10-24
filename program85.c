/*

--------------------------------------
        Operation &&
--------------------------------------
Result1  Result2        FinalResult
--------------------------------------
True      True      True
True      True      False
False     True      False   shot circuit
False      False    False   shot circiut
---------------------------------------
*/



#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if(((iNo % 3)== 0)&& ((iNo % 5)==0)){
        printf("It is divisible \n");
    }
    else 
    {
        printf("Not divisible\n");
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