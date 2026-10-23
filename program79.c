#include<stdio.h>
#include<stdlib.h>

int main()
{


int iCnt =  0;
int Sum = 0;

iCnt = 1;
// sum = 0 + 1;
Sum = Sum + iCnt;
iCnt++;//2
//  sum = 1 +2;
Sum = Sum + iCnt;
iCnt++; // 3
//sum = 3 + 3;
Sum = Sum + iCnt;
iCnt++; //4
//sum 6 + 4;
Sum = Sum + iCnt;
iCnt++; // 5

printf("%d",Sum);

return EXIT_SUCCESS;
}
