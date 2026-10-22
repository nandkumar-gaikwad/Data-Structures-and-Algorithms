import java.util.Scanner;


class program66
{
   
    public static void main(String a[])
    {

        Scanner scanner = new Scanner(System.in);

        int iValue = 0;

       iteration iteration = new iteration();

        System.out.println("Enter a frequency :");

        iValue = scanner.nextInt();

        iteration.Dispaly(iValue);



    
    }



    }






class iteration
{

    public  void Dispaly(int iNo)
    {


    int iCnt = 0;
    iCnt =1;
    

    while(iCnt<=iNo){
        System.out.println("--------------");
        System.out.println(iCnt +" Jay Ganesh....");
        System.out.println("--------------");
        iCnt++;
    }
}
}


