

#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo){

    int iCnt =0,iSum = 0;
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        iSum = iSum + iCnt;


    }
    return iSum;


}


int main()
{

    int iValue = 0,ret =0;
    

    printf("Enter a no: \n");
    scanf("%d",&iValue);

    ret = Summation(iValue);

    printf("%d",ret);

    


    return EXIT_SUCCESS;
}