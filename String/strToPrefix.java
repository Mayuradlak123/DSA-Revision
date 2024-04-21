import java.util.Scanner;

public class strToPrefix {
    Scanner sc = new Scanner(System.in);

    protected String toPrefix(String str) {
        int i, pos = 0, n = str.length();
        String pre = "", post = "";
        for (i = 0; i < n; i++) {
            if (str.charAt(i) == '+' || str.charAt(i) == '-' || str.charAt(i) == '*' || str.charAt(i) == '/') {
                pre += str.charAt(i);
            } else {
                post += str.charAt(i);
            }
        }

        return pre + post;
    }

    public static void main(String[] args) {
        strToPrefix object = new strToPrefix();
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter string for get prefix :  ");
        str = sc.next();
        System.out.println("Prefix Conversion of string : " + object.toPrefix(str));
    }
}