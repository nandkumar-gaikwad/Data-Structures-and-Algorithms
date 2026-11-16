

#include<stdio.h>
#include<stdlib.h>

typedef unsigned long long ULONG;// shorcut name creeated

ULONG factorial(int iNo){

     int iCnt =0;
     ULONG ifact = 0;
     
    for(iCnt = 1,ifact = 1;iCnt <= iNo;iCnt++)
    {
        ifact = ifact * iCnt;


    }
    return ifact;


}


int main()
{

    int iValue = 0;
    ULONG iret =0;
    

    printf("Enter a no: \n");
    scanf("%d",&iValue);

    iret = factorial(iValue);

    printf("Factorial is:%llu\n",iret);

    


    return EXIT_SUCCESS;
}