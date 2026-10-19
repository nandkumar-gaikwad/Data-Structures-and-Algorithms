import java.util.Scanner;
class program58
{
    public static void main(String a[])
    {
        int iValue = 0;
        Scanner scanner = new Scanner(System.in);
        

        iteration Iteration = new iteration();
        System.out.println("Enter a  frquency:");
        iValue = scanner.nextInt();

        Iteration.display(iValue);


    } 


}
class iteration
{
    public void display(int iNo)
        {
            int iCnt = 0;
            // input filter
            if(iNo <= 0){
                System.out.println("Invalid input");
            }
            
            for(iCnt = 1;iCnt <= iNo;iCnt++){
                System.out.println("Jay ganesh");
            }

        }
    
}