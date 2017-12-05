import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int i,j,count=0,x;
        int[] ar = new int[n];
        for(i=0;i<n;i++){
            ar[i] = in.nextInt();
        }
        for(i = 0;i < n;i++){
            for(j=n-1;j>i;j--)
            {
                x=ar[i]+ar[j];
                if(x%k==0)
                    count++;
            }
        }
        System.out.println(count);
    }
}
