// <<<<< My own code(WA)
// import java.util.Scanner;

// public class B{
//     public static void main(String[] a){
//         var myObj = new Scanner(System.in);

//         int d = myObj.nextInt(), sumTime = myObj.nextInt(), sum = 0;

//         int[] minTime = new int[d], maxTime = new int[d], difTime = new int[d];
//         for(int i = 0 ; i < d ; i++){
//             minTime[i] = myObj.nextInt();
//             maxTime[i] = myObj.nextInt();
//             difTime[i] = maxTime[i] - minTime[i];

//             sum += minTime[i];
//         }

//         int[] ans = minTime;
//         if(sum == sumTime){
//             System.out.println("YES");
//             for(int i = 0 ; i < d ; i++){
//                 System.out.print(ans[i]);

//                 if(i < d - 1) System.out.print(" ");
//             }
//         }else if(sum > sumTime) System.out.println("NO");
//         else{
//             sumTime -= sum;

//             for(int i = 0 ; i < d ; i++){
//                 if(sumTime <= difTime[i]){
//                     ans[i] += sumTime;
//                     sumTime = 0;

//                     break;
//                 }else{
//                    ans[i] += difTime[i];
//                    sumTime -= difTime[i]; 
//                 }
//             }

//             if(sumTime != 0) System.out.println("NO");
//             else{
//                 for(int i = 0 ; i < d ; i++){
//                     System.out.print(ans[i]);

//                     if(i < d - 1) System.out.print(" ");
//                 }
//             }
//         }
//     }
// }
// ===== Active Version by Gemini 3.8 Flash

import java.util.Scanner;

public class B {
    public static void main(String[] a) {
        var myObj = new Scanner(System.in);

        int d = myObj.nextInt(), sumTime = myObj.nextInt();
        int[] minTime = new int[d], maxTime = new int[d];
        int sumMin = 0, sumMax = 0;

        for (int i = 0; i < d; i++) {
            minTime[i] = myObj.nextInt();
            maxTime[i] = myObj.nextInt();
            sumMin += minTime[i];
            sumMax += maxTime[i];
        }

        if (sumTime < sumMin || sumTime > sumMax) {
            System.out.println("NO");
            return;
        }

        System.out.println("YES");
        int remaining = sumTime - sumMin;

        for (int i = 0; i < d; i++) {
            int add = Math.min(remaining, maxTime[i] - minTime[i]);
            minTime[i] += add;
            remaining -= add;

            System.out.print(minTime[i] + (i < d - 1 ? " " : "\n"));
        }
    }
}
// >>>>> END Alternative Solutions