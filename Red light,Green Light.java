import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    int n=sc.nextInt();
		    int k=sc.nextInt();
		    int c=0;
		    for(int i=0;i<n;i++){
		        int h=sc.nextInt();
		        if(h>k){
		            c++;
		        }
		    }
		    System.out.println(c);
		}
	}
}
