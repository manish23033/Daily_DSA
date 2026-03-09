public class Subsequence {
    public static void SubSequence(String str , int idx ,String newString){
        if (idx == str.length()) {
            System.out.println(newString);
            return;
        }
        char currChar = str.charAt(idx);
        // Exclude the character
        SubSequence(str, idx + 1, newString);
        // Include the character
        SubSequence(str, idx + 1, newString + currChar);
        

    }
    public static void main(String[] args) {
        String str = "abc";
        SubSequence(str, 0, "");
    }
}
