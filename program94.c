

#include<stdio.h>
#include<stdlib.h>

long long factorial(int iNo){

     int iCnt =0;
     long long ifact = 0;
    for(iCnt = 1,ifact = 1;iCnt <= iNo;iCnt++)
    {
        ifact = ifact * iCnt;


    }
    return ifact;


}


int main()
{

    int iValue = 0;
    long long iret =0;
    

    printf("Enter a no: \n");
    scanf("%d",&iValue);

    iret = factorial(iValue);

    printf("Factorial is: %lld\n",iret);

    


    return EXIT_SUCCESS;
}