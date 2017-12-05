import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        int i,c,count=0,count1=0;
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] s = new int[n];
        for(i=0;i < n;i++){
            s[i] = in.nextInt();
        }
        c=s[0];
        for(i=0;i<n;i++){
            if(c<s[i]){
                c=s[i];
                count++;
        }}
            c=s[0];
        for(i=0;i<n;i++){
            if(c>s[i]){
                c=s[i];
                count1++;
        }}
       System.out.println(count+" "+count1);
    }
}
