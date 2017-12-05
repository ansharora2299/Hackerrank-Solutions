import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    

    public static void insertIntoSorted(int[] ar,int s) {
       int t=ar[s-1],i;
        if(ar[0]<t)
        {
        for(i=0;i<s-1;i++)
        {
            if(ar[s-2-i]>t){
                ar[s-1-i]=ar[s-2-i];
                printArray(ar);
            }
            else
            {  ar[s-1-i]=t;
             printArray(ar);
             break;
            }
            
        }
        }
        else
        {
            for(i=0;i<s-1;i++)
        {
            if(ar[s-2-i]>t){
                ar[s-1-i]=ar[s-2-i];
                printArray(ar);
            }
            else
            {  ar[s-1-i]=t;
             printArray(ar);
             break;
            }
            
        }
            ar[0]=t;
                printArray(ar);
        }
    }
    
    

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s; 
            s = in.nextInt();
        int[] ar = new int[s];
        for(int i=0;i<s;i++){
            ar[i]=in.nextInt(); 
        }
        insertIntoSorted(ar,s);
    }
    
    
    private static void printArray(int[] ar) {
        for(int n: ar){
            System.out.print(n+" ");
        }
        System.out.println("");
    }
}
 


