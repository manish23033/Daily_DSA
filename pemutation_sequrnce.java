import java.util.*;

class pemutation_sequrnce {

    public static String getPermutation(int n, int k) {

        List<Integer> arr = new ArrayList<>();
        int fact = 1;

        for(int i = 1; i < n; i++){
            fact = fact * i;
            arr.add(i);
        }

        arr.add(n);
        k = k - 1;

        String ans = "";

        while(true){
            ans = ans + arr.get(k / fact);
            arr.remove(k / fact);

            if(arr.size() == 0){
                break;
            }

            k = k % fact;
            fact = fact / arr.size();
        }

        return ans;
    }

    public static void main(String[] args){
        System.out.println(getPermutation(4, 9));
    }
}