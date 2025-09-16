
import java.util.Scanner;

public class day_02 {
    public int StairClimb(int n ){
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
int sum =StairClimb(n-1)+StairClimb(n-2);
return sum;
    }
    public static void main(String[] args) {
        day_02 d =new day_02();
        Scanner sc =new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println(d.StairClimb(n));
    }
}
