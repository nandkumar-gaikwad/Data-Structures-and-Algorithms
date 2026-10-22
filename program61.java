import java.util.Scanner;


class program61
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

    for(iCnt = 1;iCnt<=iNo;iCnt++){
        System.out.println("--------------");
        System.out.println(iCnt);
        System.out.println("--------------");
    }
}
}


