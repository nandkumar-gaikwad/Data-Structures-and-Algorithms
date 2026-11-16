

#include<stdio.h>
#include<stdlib.h>

int factorial(int iNo){

    int iCnt =0,ifact = 0;
    ifact = 1;
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        ifact = ifact * iCnt;


    }
    return ifact;


}


int main()
{

    int iValue = 0,iret =0;
    

    printf("Enter a no: \n");
    scanf("%d",&iValue);

    iret = factorial(iValue);

    printf("Factorial is%d\n",iret);

    


    return EXIT_SUCCESS;
}