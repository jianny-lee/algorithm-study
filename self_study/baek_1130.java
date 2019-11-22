import java.util.Scanner; //input을 위한 module import

public class Main {
    public static void main (String[] args){
        int a,b;
        Scanner scan = new Scanner(System.in);
        a = scan.nextInt(); //숫자 입력
        b = scan.nextInt();
        
        if(a > b)
            System.out.println(">");
        else if(a < b)
            System.out.println("<");
        else if(a == b)
            System.out.println("==");
    }
}
