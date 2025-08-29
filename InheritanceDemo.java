class Shape {
    String color;
}

class Triangle extends Shape {
}

public class InheritanceDemo {
    public static void main(String[] args) {
        Triangle t1 = new Triangle();
        t1.color = "red";           // inherited variable
        System.out.println(t1.color); // printing it
    }
}
