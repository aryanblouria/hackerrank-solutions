import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        
        int b = ip.nextInt();
        int h = ip.nextInt();
        if (b > 0 && h > 0)            
            System.out.println(b*h);
        else
        {
            System.out.println("java.lang.Exception: Breadth and height must be positive");
        }
    }
}
