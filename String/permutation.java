
import java.util.Scanner;

public class permutation {
    void swap(char c1, char c2) {
        char temp = c1;
        c1 = c2;
        c2 = temp;

    }

    public void Pattern(String str, int index, int n) {
        if (index == n) {
            System.out.println(str);
        }
        for (int i = index; i < n; i++) {

            Pattern(str, index + 1, n);
            swap(str.charAt(i), str.charAt(index));
        }
    }

    public static void main(String a[]) {
        Scanner sc = new Scanner(System.in);
        permutation object = new permutation();
        System.out.println("Enter ans String : ");
        String str;
        str = sc.next();
        System.out.println("All Permutation of GIven String is : ");
        char ar = 'a', b = 'b';
        object.swap(b, ar);
        System.out.println(ar + ":" + b);
        System.out.println();
        object.Pattern(str, 0, str.length());
    }
}