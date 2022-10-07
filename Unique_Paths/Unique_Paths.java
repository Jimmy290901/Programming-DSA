import java.util.*;

public class HowManyWays {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int m=sc.nextInt();
		int n=sc.nextInt();
		double N=m+n-2;
    double R=n-1;
    double result=1;

    for(int i=1;i<=R;i++){
        result=((result*(N-R+i))/i);
    }
    
    System.out.println(result);
	}
}