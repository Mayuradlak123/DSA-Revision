import java.util.Scanner;

class strIsomorphic {
    Scanner sc = new Scanner(System.in);

    public boolean Isomorphic(String str1, String str2) {
        int i, n = str1.length(), m = str2.length();
        if (n != m) {
            return false;
        }
        int s1[] = new int[256];
        int s2[] = new int[256];
        for (i = 0; i < n; i++) {
            s1[str1.charAt(i)]++;
            s2[str2.charAt(i)]++;
        }
        for (int j : s2) {
            System.out.println(j);
        }
        for (int k : s1) {
            System.out.println(k);
        }
        for (i = 0; i < n; i++) {
            if (s1[str1.charAt(i)] != s2[str2.charAt(i)]) {
                return false;
            }
        }
        return true;
    }

    public void get() {
        String str1, str2;
        System.out.println("Enter value of first string : ");
        str1 = sc.next();
        System.out.println("Enter value of second string : ");
        str2 = sc.next();
        if (Isomorphic(str1, str2)) {
            System.out.println("Is Isomorphic : ");
        } else {
            System.out.println("Not Isomorphic ");
        }
    }

    public static void main(String[] args) {
        strIsomorphic object = new strIsomorphic();
        object.get();
    }
}
