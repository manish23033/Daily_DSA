
import java.util.HashSet;

public class UniqueSubsequence {

    public static void Uniquesubsequence(String str, int idx, String newString, HashSet<String> set) {

        if (idx == str.length()) {
            if (set.contains(newString)) {
                return;
            } else {
                System.out.println(newString);
                set.add(newString);
                return;
            }
        }
        char currChar = str.charAt(idx);
        Uniquesubsequence(str, idx + 1, newString,set);
        Uniquesubsequence(str, idx + 1, newString + currChar,set);
    }

    public static void main(String[] args) {
        String str = "aaa";
        HashSet<String> set = new HashSet<>();
        Uniquesubsequence(str, 0, "", set);
    }
}
