import java.util.Scanner;

public class A{
    public static void main(String[] args){
        Scanner myObj = new Scanner(System.in);

        int w = myObj.nextInt();
        if(w >= 4 && w % 2 == 0){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    }
}