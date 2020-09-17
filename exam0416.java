
import java.util.Scanner;

class vehicle{
	public vehicle(){}
	protected String name;
}

class car extends vehicle{
	public car(){}
	protected int price;
}

class BMW extends car{
	
	String color;
	
	public BMW() {
		
		name = "NCHU";
		price = 100;
		color = "red";
		
	}
	public String toString() {
		return "name = "+name+"\nprice = "+price+"\ncolor = "+color;
	}
}

public class exam0416 {
	public static void main(String args[]) 
	{
		Scanner scn = new Scanner(System.in);
		
		BMW x = new BMW();
		System.out.println(x.toString()+"\n");
		
		System.out.println("請輸入您想自行輸入的結果: ");
		BMW y = new BMW();
		y.name = scn.next();
		y.price = scn.nextInt();
		y.color = scn.next();
		System.out.println(y.toString()+"\n");
		
		BMW z = x;
		boolean k = x.equals(z);
		System.out.println("x.equals(z) = "+k);
		
	}

}
