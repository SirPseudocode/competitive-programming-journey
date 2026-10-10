// <<<<< My Own version(Uncompleted)
// import java.util.Scanner;
// import java.util.HashMap;

// public class D{
//     public static void main(String[] a){
//         var myObj = new Scanner(System.in);

//         int n = myObj.nextInt(), w = myObj.nextInt(), h = myObj.nextInt();

//         int[] w_Value = new int[n], h_Value = new int[n];
//         HashMap<Integer, Integer> valid = new HashMap<>();

//         for(int i = 0 ; i < d ; i++){
//             w_value[i] = myObj.nextInt();
//             h_value[i] = myObj.nextInt();

//             if(w_value[i] >= w && h_Value[i] >= h){
//                 valid.put(i, w_value[i] * h_value[i]);
//             }
//         }

//         for(int i = 0 ; i < n ; i++){
//             for(int j = i + 1 ; j < n ; j++){
//                 if(valid.get(i) > valid.get(j)){

//                 }
//             }
//         }


//         System.out.println(valid.size());
//         int highestSize = 0;
//         for(int i = 0 i < valid.size ; i++){
//             if(highestSize != )
//         }

//         myObj.close();
//     }
// }
// ===== Active Version by Gemini 3.8 Flash
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class D {
    static class Envelope {
        int id, w, h;
        Envelope(int id, int w, int h) {
            this.id = id;
            this.w = w;
            this.h = h;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (!sc.hasNextInt()) return;

        int n = sc.nextInt();
        int cardW = sc.nextInt();
        int cardH = sc.nextInt();

        ArrayList<Envelope> list = new ArrayList<>();
        for (int i = 1; i <= n; i++) {
            int w = sc.nextInt();
            int h = sc.nextInt();
            if (w > cardW && h > cardH) {
                list.add(new Envelope(i, w, h));
            }
        }

        int m = list.size();
        if (m == 0) {
            System.out.println(0);
            return;
        }

        Collections.sort(list, (a, b) -> {
            if (a.w != b.w) return Integer.compare(a.w, b.w);
            return Integer.compare(a.h, b.h);
        });

        int[] dp = new int[m];
        int[] prev = new int[m];

        int bestLen = 0;
        int bestIdx = 0;

        for (int i = 0; i < m; i++) {
            dp[i] = 1;
            prev[i] = -1;

            for (int j = 0; j < i; j++) {
                // Syarat: amplop j harus muat sepenuhnya ke dalam amplop i
                if (list.get(j).w < list.get(i).w && list.get(j).h < list.get(i).h) {
                    if (dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;
                        prev[i] = j;
                    }
                }
            }

            if (dp[i] > bestLen) {
                bestLen = dp[i];
                bestIdx = i;
            }
        }

        ArrayList<Integer> chain = new ArrayList<>();
        int curr = bestIdx;
        while (curr != -1) {
            chain.add(list.get(curr).id);
            curr = prev[curr];
        }

        Collections.reverse(chain);

        System.out.println(bestLen);
        for (int i = 0; i < chain.size(); i++) {
            System.out.print(chain.get(i) + (i < chain.size() - 1 ? " " : "\n"));
        }
    }
}
// >>>>> END ALternative Solutions