import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int migratoryBirds(int n, int[] a) {
        int i,c1=0,c2=0,c3=0,c4=0,c5=0,max;
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
                c1++;
            else if(a[i]==2)
                c2++;
            else if(a[i]==3)
                c3++;
            else if(a[i]==4)
                c4++;
            else
                c5++;
        }
       /* max=c5;
        if(c4>=max)
            max=c4;
        if(c3>=max)
            max=c3;
        if(c2>=max)
            max=c2;
        if(c1>=max)
            max=c1;
        //int max=Math.max(Math.max(Math.max(Math.max(c1,c2),c3),c4),c5);
        return max;*/
        if(c5>c4&&c5>c3&&c5>c2&&c5>c1)
            return 5;
        else
        {
        if(c4>c3&&c4>c2&&c4>c1)
            return 4;
            else
            {
                if(c3>c2&&c3>c1)
                    return 3;
                else
                {
                    if(c2>c1)
                        return 2;
                    else
                        return 1;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int result = migratoryBirds(n, ar);
        System.out.println(result);
    }
}
