
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
		    int x=sc.nextInt()*5;
		    int y=sc.nextInt()*10;
		    int z=sc.nextInt();
		    int r=((x+y)/z);
		    System.out.println(r);
		}
	}
}