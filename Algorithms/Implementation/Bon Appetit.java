import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int bonAppetit(int n, int k, int b, int[] ar) {
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=ar[i];
        sum-=ar[k];
        if((sum/2)==b)
            return 1;
        else
            return (ar[k]/2);
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int b = in.nextInt();
        int result = bonAppetit(n, k, b, ar);
        if(result==1)
            System.out.println("Bon Appetit");
        else
            System.out.println(result);
    }
}
