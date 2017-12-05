import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        String[] s = new String[n];
        int i;
        sc.nextLine();
        for(i=0;i<n;i++)
            s[i]=sc.nextLine();
        int q=sc.nextInt();
        String[] p = new String[q];
        sc.nextLine();
        for(i=0;i<q;i++)
            p[i]=sc.nextLine();
        int j;
        for(i=0;i<q;i++)
        {
            int count=0;
            for(j=0;j<n;j++)
            {
                if(p[i].equals(s[j]))
                {
                    count++;
                }
            }
            System.out.println(count);
    }}
}