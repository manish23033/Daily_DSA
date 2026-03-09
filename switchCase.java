
import java.util.Scanner;

public class switchCase {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int button =sc.nextInt();
        switch(button){
            case 1 -> System.out.println("hello");
            case 2 -> System.out.println("manish");
            case 3 -> System.out.println("alter");
            default -> System.out.println("invalid button");
        }
    }
    
}
