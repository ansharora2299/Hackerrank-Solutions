import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int[] solve(int a0, int a1, int a2, int b0, int b1, int b2){
        int a[]=new int[2];
        if(a0>b0)
            a[0]++;
        else if(a0<b0)
            a[1]++;
        if(a1>b1)
            a[0]++;
        else if(a1<b1)
            a[1]++;
        if(a2>b2)
            a[0]++;
        else if(a2<b2)
            a[1]++;
        return a;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a0 = in.nextInt();
        int a1 = in.nextInt();
        int a2 = in.nextInt();
        int b0 = in.nextInt();
        int b1 = in.nextInt();
        int b2 = in.nextInt();
        int[] result = solve(a0, a1, a2, b0, b1, b2);
        System.out.print(result[0]+" "+result[1]);
        

    }
}
