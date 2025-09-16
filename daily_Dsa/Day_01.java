public class Day_01 {

    public int fib(int n) {
        if (n == 0 || n == 1) {
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    }

    public static void main(String[] args) {
        Day_01 s = new Day_01();
        int n = 5;
        System.out.println("Fibonacci of " + n + " = " + s.fib(n));
    }
}
