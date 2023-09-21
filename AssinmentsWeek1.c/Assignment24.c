import java.util.Scanner;
public class MyClass extends Area {
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		System.out.println("Enter your choice");
		System.out.println("1.Circle");
		System.out.println("2.Square");
		System.out.println("3.Recatngle");
		System.out.println("4.Triangle");
		int m=s.nextInt();{
		if(m==1) {
			circle();
		}
		if(m==2) {
			square();
		}
		if(m==3) {
			rectangle();
		}
		if(m==4) {
			triangle();
		}
		if(m>4||m<0) {
			System.out.println("Invalid Entry");
			
		}}
		
	}
}








import java.util.Scanner;
public class Area {
	static Scanner s=new Scanner(System.in);
	
static void circle() {
	System.out.println("Enter radius of Circle ");
	double a=s.nextDouble();
	double radius=3.14*a*a;
	System.out.println("Area= "+radius);
	
}
static void square() {
	System.out.println("Enter Length of one side ");
	double a=s.nextDouble();
	double l=a*a;
	System.out.println("Area= "+l);
	
}
static void rectangle() {
	System.out.println("Enter length and breadth ");
	double a=s.nextDouble();
	double b=s.nextDouble();
	double k=a*b;
	System.out.println("Area= "+k);
	
}
static void triangle() {
	System.out.println("Enter Base and Height ");
	double a=s.nextDouble();
	double b=s.nextDouble();
	double p=a*b/2;
	System.out.println("Area= "+p);
	
}
}