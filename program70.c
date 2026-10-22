#include<stdio.h>
#include<stdlib.h>

void Display(){

int iCnt  = 0;

for(iCnt =1 ;iCnt <= 4;iCnt++){
  printf("Jay ganmesh...\n");
}
}

int main()
{


  int iValue = 0;

  printf("Enter a frequecy :\n");
  scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}