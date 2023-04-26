
import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    int x=sc.nextInt();
		    if(x%10>=5)
		         x=x+(10-x%10);
		    else if(x%10<5)
		    {
		        x=(x-(x%10));
		    }
		    System.out.println(100-x);
		         
		}
	}
}
