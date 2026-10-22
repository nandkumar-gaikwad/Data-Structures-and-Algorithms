
class program64
{

    public static void main(String a[])
    {
        Iteration iteration = new Iteration();
        iteration.display();

    }
}

class Iteration
{
    public static void display(){
    int iCnt = 0;

    for(iCnt = 6; iCnt >= 1;iCnt--){ // infinite loop
        System.out.println("Jay Ganesh.....");
    }
}



}