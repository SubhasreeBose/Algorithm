import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int powerSum(int X, int N, int increment) {
    
        if((int)Math.pow(increment,N)<X)
            return powerSum(X,N,increment+1) + powerSum(X-(int)Math.pow(increment,N),N,increment+1);
        else if((int)Math.pow(increment,N)==X)
            return 1;
        else 
            return 0;
            
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int X = in.nextInt();
        int N = in.nextInt();
        int result = powerSum(X, N,1);
        System.out.println(result);
        in.close();
    }
}
