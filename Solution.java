/*An English text needs to be encrypted using the following encryption scheme. 
First, the spaces are removed from the text. Let  be the length of this text. 
Then, characters are written into a grid, whose rows and columns have the following constraints:

, where  is floor function and  is ceil function
For example, the sentence if man was meant to stay on the ground god would have given us roots after removing spaces is  characters long, so it is written in the form of a grid with 7 rows and 8 columns.

ifmanwas  
meanttos          
tayonthe  
groundgo  
dwouldha  
vegivenu  
sroots
Ensure that 
If multiple grids satisfy the above conditions, choose the one with the minimum area, i.e. .
The encoded message is obtained by displaying the characters in a column, inserting a space, and then displaying the next column and inserting a space, and so on. For example, the encoded message for the above rectangle is:

imtgdvs fearwer mayoogo anouuio ntnnlvt wttddes aohghn sseoau

You will be given a message in English with no spaces between the words. The maximum message length can be characters. Print the encoded message.*/


import java.io.*;
import java.util.*;
import java.math.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        str=str.replaceAll(" ","");
        int k=str.length();
        
        int fl=(int)Math.floor(Math.sqrt(k));
        int cl=(int)Math.ceil(Math.sqrt(k));
        int row=fl,col=cl,min=cl*cl,prod1=fl*fl,prod2=fl*cl,prod3=cl*cl;
        if(prod1>=k && prod1<=min)
            {

            min=prod1;
            row=fl;
            col=fl;
        }
        if(prod2>=k && prod2<=min)
            {

            min=prod2;
            row=fl;
            col=cl;
        }
        if(prod3>=k && prod3<=min)
            {

            min=prod3;
            row=cl;
            col=cl;
        }
        
                


        
            
        char array[][]=new char[row][col];
        int i,j;
        for(i=0;i<row;i++)
            {
            for(j=0;j<col;j++)
                {
                if(j+i*col<str.length())
                array[i][j]=str.charAt(j+i*col);
                else
                    array[i][j]=' ';
            }
        }
        
        for(j=0;j<col;j++)
            {
            for(i=0;i<row;i++)
                {
                if(array[i][j]!=' ')
                System.out.print(array[i][j]);
            }
                                    System.out.print(" ");
        

        }
    }
}
