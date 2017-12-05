import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            String n = in.next();
            int c=0;
            long ne=Long.parseLong(n);
            for(int i=0;i<n.length();i++)
            {
                if((n.charAt(i))!='0')
                    if(ne%((int)(n.charAt(i))-(int)('0'))==0)
                        c++;
            }
            System.out.println(c);
        }
        
    }
}

