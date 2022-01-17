import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int i = 0;
        while (ip.hasNext())
        {
            i++;
            String s = ip.nextLine();
            System.out.println(i + " " + s);
        }
    }
}
