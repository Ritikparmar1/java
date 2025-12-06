public class SwapWithoutThirdVariable2 {
    public static void main(String[] args) {
        int a = 5;
        int b = 10;

        System.out.println("Before swapping:");
        System.out.println("a = " + a);
        System.out.println("b = " + b);

        // Swap using arithmetic
        a = a ^ b; // a becomes 15
        b = a ^ b; // b becomes 5
        a = a ^ b; // a becomes 10

        System.out.println("After swapping:");
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        
    }
}
