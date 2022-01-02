Java 习题 

第一章

public class java1-1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	System.out.println("Welcome to Java!");
	}

}

public class java1_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
       System.out.println("Programming is fun!");
       System.out.println("Programming is First!");
       System.out.println("Problem Driven");
	}

}

public class java1_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    System.out.print("(10.5+2*3)/(45-3.5) = ");
    System.out.println((10.5+2*3)/(45-3.5));
	}

}

public class java1_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    System.out.println("Welcome to Java);
System.out.println("Welcome to Java);	}//要加引号

}

public class java1_5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    System.out.println(1/0);//0不能作为除数
	}
}

public class java1_6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    System.out.println("Celsius 35 is Fahrenheit dregree");
    System.out.println((9/5)*35+32);
	}

}

第二章

public class java2_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    double radius;
    double area;
    radius=20;
    area=radius*radius*3.14159;
    System.out.println("The area for the circle of radius"+radius+" is "+area);
	}

}

import java.util.Scanner;
public class java2_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input =new Scanner(System.in);
    System.out.print("Enter a number for radius: ");
    double radius = input.nextDouble();
    double area=radius*radius*3.14159;
    System.out.println("The area for the circle of radius"+radius+" is "+area);
	}
}

import java.util.Scanner;
public class java2_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input = new Scanner(System.in);
    System.out.print("Enter three number: ");
    double number1 = input.nextDouble();
    double number2 = input.nextDouble();
    double number3 = input.nextDouble();
    
    double average=(number1+number2+number3)/3;
    System.out.println("The average of " +number1+" "+number2+" "+number3+" is "+average);
	}

}
import java.util.Scanner;
public class java2_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	final double PI =3.14159;
    Scanner input = new Scanner(System.in);
    System.out.print("Enter a number for radius: ");
    double radius = input.nextDouble();
    double area = radius*radius*PI;
    System.out.println("The area for the circle "+radius+" is "+area);
	}

}
import java.util.Scanner;
public class java2_5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input=new Scanner(System.in);
    System.out.print("Enter an integer for second: ");
    int Second = input.nextInt();
    int minutes = Second/60;
    int remainingSecond = Second % 60;
    System.out.println(Second+" Second is "+ minutes + " minutes and " + remainingSecond +" Second");
	}
}

import java.util.Scanner;
public class java2_6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input =new Scanner (System.in);
    System.out.print("Enter a dgree in Fahrenheit:");
    double fahrenheit = input.nextDouble();
    double celsius = (5.0/9)*(fahrenheit-32);
    System.out.println("Fahrenheit "+fahrenheit +" is "+celsius +" in Celsius");
	}

}


public class java2_7 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    long totalMilliseconds = System.currentTimeMillis();
    
    long totalSeconds = totalMilliseconds / 1000;
    
    long currentSecond = totalSeconds % 60;
    
    long totalMinutes = totalSeconds / 60;
    
    long currentMinute = totalMinutes % 60;
    
    long totalHours = totalMinutes / 60;
    
    long currentHours = totalHours % 24;
    
    System.out.println("Current time is "+currentHours + ":"+ currentMinute + ":"+ currentSecond +" GMT");
	}

}
import java.util.Scanner;
public class java2_8 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input = new Scanner(System.in);
    System.out.print("Enter purchase amount: ");
    double purchaseAmount = input.nextDouble();
    double tax = purchaseAmount *0.06;
    System.out.println("Sales tax is &" + (int)(tax*100)/100/100.0);
	}

}

import java.util.Scanner;
public class java2_9 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input = new Scanner(System.in);
    double annualInteresRate = input.nextDouble();
    
    double monthlyInterestRate = annualInteresRate / 1200;
    
    System.out.print("Enter number of years as an integer,e.g., 5:");
    int numberOfYears = input.nextInt();
    
    System.out.print("Enter loan amount,e.g., 120000.95: ");
    
    double loanAmount = input.nextDouble();
    
    double monthlyPayment = loanAmount * monthlyInterestRate / (1-1/Math.pow(1 + monthlyInterestRate, numberOfYears * 12));
    
    double totalPayment = monthlyPayment * numberOfYears * 12;
    
    System.out.println("The monthly payment is $" + (int)(monthlyPayment * 100) / 100.0);
    System.out.println("The total payment is $" + (int)(totalPayment * 100) / 100.0);
    
	}

}

import java.util.Scanner;
public class java2_10 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input = new Scanner(System.in);
    
    System.out.print("Enter an amount in double, for example 11.56: ");
    double amount = input.nextDouble();
    
    int remainingAmount =(int)(amount * 100);
    
    int numberOfOneDollars = remainingAmount / 100;
    remainingAmount = remainingAmount % 100;
    
    int numberOfQuarters = remainingAmount / 25;
    remainingAmount = remainingAmount % 25;
    int numberOfDtimes = remainingAmount / 10;
    remainingAmount = remainingAmount % 10;
    int numberOfNickels = remainingAmount / 5;
    remainingAmount = remainingAmount % 5;
    int numberOfPennies = remainingAmount;
    
    System.out.println("Your amount "+ amount + "consists of");
    System.out.println(" "+ numberOfOneDollars + "dollars");
    System.out.println(" "+ numberOfQuarters + "quarters");
    System.out.println(" "+ numberOfDtimes + "dtimes");
    System.out.println(" "+ numberOfNickels + "nickels");
    System.out.println(" "+ numberOfPennies + "pennies");
    
	}
}

