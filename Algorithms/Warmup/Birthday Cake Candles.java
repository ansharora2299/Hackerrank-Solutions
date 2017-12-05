import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

        public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
         int n = in.nextInt();
        long [] ar = new long[n];
            int i;
            long c,count=0L;
        for(i = 0;i < n;i++){
            ar[i] = in.nextLong();
        }
        c=ar[0];
            for(i = 0;i < n;i++){
                if(c<ar[i])
                    c=ar[i];
            }
            for(i = 0;i < n;i++){
                if(c==ar[i])
                    count++;
            }
        System.out.println(count);
    }
}
