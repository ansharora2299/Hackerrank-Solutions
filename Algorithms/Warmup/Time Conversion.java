
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static String timeConversion(String s) {
        String fin,h;
        int hh=Integer.parseInt(s.substring(0,2));
        if(s.charAt(8)=='P'&&hh<12)
        {
            hh=hh+12;
            h=Integer.toString(hh);
            fin=h+s.substring(2,8); 
        }
        else if(s.charAt(8)=='A'&&hh==12)
        {
            h="00";
            fin=h+s.substring(2,8);
        }
        else
            fin=s.substring(0,8);
        return fin;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String result = timeConversion(s);
        System.out.println(result);
    }
}
