<<<<<<< HEAD
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int[] solve(int[] grades,int n){
        int i=0;
        for(i=0;i<n;i++)
        {
        int j=0;
        if(grades[i]>37)
        {
            j=5+5*(int)(Math.ceil((float)(grades[i]/5)));
            if((j-grades[i])<3)
                grades[i]=j;
        }
        }
        return grades;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] grades = new int[n];
        for(int grades_i=0; grades_i < n; grades_i++){
            grades[grades_i] = in.nextInt();
        }
        int[] result = solve(grades,n);
        for (int i = 0; i < result.length; i++) {
            System.out.print(result[i] + (i != result.length - 1 ? "\n" : ""));
        }
        System.out.println("");
        

    }
}
=======
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int[] solve(int[] grades,int n){
        int i=0;
        for(i=0;i<n;i++)
        {
        int j=0;
        if(grades[i]>37)
        {
            j=5+5*(int)(Math.ceil((float)(grades[i]/5)));
            if((j-grades[i])<3)
                grades[i]=j;
        }
        }
        return grades;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] grades = new int[n];
        for(int grades_i=0; grades_i < n; grades_i++){
            grades[grades_i] = in.nextInt();
        }
        int[] result = solve(grades,n);
        for (int i = 0; i < result.length; i++) {
            System.out.print(result[i] + (i != result.length - 1 ? "\n" : ""));
        }
        System.out.println("");
        

    }
}
>>>>>>> 0ea0e215314df4961d37ed5eea793459ed0c44e2
