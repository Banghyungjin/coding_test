import java.util.Scanner;
import java.util.ArrayList;

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int num_of_sign = Integer.parseInt(sc.nextLine());
	    ArrayList<String> list = new ArrayList<String>();
		
		for(int i = 0; i < num_of_sign; i++) {
		    list.add(sc.nextLine());
		}
		
		for(String i : list){
		    System.out.println(i.matches("(100+1+|01)+")?"YES":"NO");
		}
	}
}
