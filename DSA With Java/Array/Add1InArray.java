import java.util.Scanner;

//arr=[5,7,3,8]
//ans =5739
class Add1InArray {
    public int getArraySum(int n, int[] arr) {
        int ans = 0, rev = 0, temp = 0, i = 0;
        for (i = 0; i < n; i++) {
           
            rev = rev * 10 + arr[i];
        }

        return rev + 1;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n, i;
        System.out.println("Enter size of array");
        n = scanner.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter element of array");
        for (i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        Add1InArray objectAdd1InArray = new Add1InArray();
        System.out.println("After add 1" + objectAdd1InArray.getArraySum(n, arr));
    }
}