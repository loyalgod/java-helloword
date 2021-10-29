第三章 

package computer;
import java.util.Scanner;
public class java3_9 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input = new Scanner(System.in);
    System.out.print("Enter the first 9 digits of an ISBN as integer: ");
    int d1 = input.nextInt();
    int d2 = input.nextInt();
    int d3 = input.nextInt();
    int d4 = input.nextInt();
    int d5 = input.nextInt();
    int d6 = input.nextInt();
    int d7 = input.nextInt();
    int d8 = input.nextInt();
    int d9 = input.nextInt();
    int d10=0;
    d10=(d1*1+d2*2+d3*3+d4*4+d5*5+d6*6+d7*7+d8*8+d9*9)%11;
    if(d10==10) {
    	System.out.println("The ISBN-10 number is "+d1+d2+d3+d4+d5+d6+d7+d8+d9+"X");
    }
    else if(d10!=10)
    {
    	System.out.println("The ISBN-10 number is "+d1+d2+d3+d4+d5+d6+d7+d8+d9+d10);
    }
	}

}


package computer;
import java.util.Random;
public class java_space {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Random rand = new Random();
    int month = rand.nextInt(12)+1;
    if(month==1) {
    	System.out.println("January");
    }
    else if(month==2) {
    	System.out.println("February");
    }
    else if(month==3) {
    	System.out.println("March");
    }
    else if(month==4) {
    	System.out.println("April");
    }
    else if(month==5) {
    	System.out.println("May");
    }
    else if(month==6) {
    	System.out.println("June");
    }
    else if(month==7) {
    	System.out.println("July");
    }
    else if(month==8) {
    	System.out.println("August");
    }
    else if(month==9) {
    	System.out.println("September");
    }
    else if(month==10) {
    	System.out.println("October");
    }
    else if(month==11) {
    	System.out.println("November");
    }
    else if(month==12) {
    	System.out.println("December");
    }
	}

}

package computer;
import java.util.Scanner;
import java.util.Random;
public class java3_15 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Random rand = new Random();
    Scanner input = new Scanner(System.in);
    int count = rand.nextInt(999)+100;
    int i=0;
    int num1 = input.nextInt();
    int num2 = input.nextInt();
    int num3 = input.nextInt();
    if((num1*100+num2*10+num3)==count) {
    	System.out.println("10000 Dallar");
    }
    int t=count;
    if(t%10==num1||t%10==num2||t%10==num3)
	{
		t/=10;
		if(t%10==num1||t%10==num2||t%10==num3)
		{
			t/=10;
			if(t%10==num1||t%10==num2||t%10==num3)
			{
				System.out.println("3000 Dallar");
			}
			else
				System.out.println("1000 Dallar");
		}
	}
    
	}
}


package computer;
import java.util.Scanner;	
public class java3_19 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input = new Scanner(System.in);
    int a = input.nextInt();
    int b = input.nextInt();
    int c = input.nextInt();
    int sum=0;
    if(a<=0||b<=0||c<=0||(a+b<=c)||(a+c<=b)||(b+c)<=a)
    {
    	System.out.println("input is not value");
    }
    else {
    	sum=a+b+c;
    	System.out.println("三角形周长为: ");
    	System.out.println(sum);
	}
	}
}


package computer;
import java.util.Scanner;
public class java3_21 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input = new Scanner(System.in);
    System.out.println("Enter year: (e.g., 2012): ");
    int year = input.nextInt();
    System.out.println("Enter month: 1-12: ");
    int month = input.nextInt();
    System.out.println("Enter the day of month: 1-31: ");
    int day = input.nextInt();
    if(month==1)
    {
    	month=13;
    	year-=1;
    }
    else if(month==2)
    {
    	month = 14;
    	year-=1;
    }
    
    int j=(year)/100;
    int k=year%100;
    int h=(day+26*(month+1)/10+k+k/4+j/4+5*j)%7;
    if(h==0)
    {
        System.out.println("Day of week is Saturday");
    }
    else if(h==1) {
    	 System.out.println("Day of week is Sunday");
    }
    else if(h==2) {
   	 System.out.println("Day of week is Monday");
    }
    else if(h==3) {
   	 System.out.println("Day of week is Tuesday");
    }
    else if(h==4) {
   	 System.out.println("Day of week is Wednesday");
    }
    else if(h==5) {
   	 System.out.println("Day of week is Thursday");
    }
    else if(h==6) {
   	 System.out.println("Day of week is Friday");
    }
	} 

}


package computer;
import java.util.Scanner;
public class java3_22 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input = new Scanner(System.in);
    System.out.print("Enter a point with two coordinates: ");
    double x = input.nextDouble();
    double y = input.nextDouble();
    if(x>0&&y>0) {
    	if(x*x+y*y<=100) {
        	System.out.println("point ("+ x +" "+ y +" )is in the circle");
        }
        else
        	System.out.println("point ("+ x +" "+ y +" )is not in the circle");
    	}
    }
}


package computer;
import java.util.Scanner;

public class java3_23 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input = new Scanner(System.in);
    System.out.println("Enter a point with two coordinates: ");
    double x = input.nextDouble();
    double y = input.nextDouble();
    if(x>=0&&y>=0) {
    	if(abs(x)<5.0&&abs(y)<2.5) {
    		System.out.println("Point ("+x+","+" "+y+") is in the rectangle");
    	}
    	else {
    		System.out.println("Point ("+x+","+" "+y+") is not in the rectangle");
    	}
    }
	}
    
	private static double abs(double x) {
		// TODO Auto-generated method stub
		if(x<0) {
			return (-x);
		}
		else
			return x;
	}

}


package computer;

import java.util.Random;
import java.util.Scanner;

public class java3_24 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 Scanner input = new Scanner(System.in);
		 Random rand = new Random();
		 int count = rand.nextInt(13)+1;
		 int coulor = rand.nextInt(4)+1;
		 if(coulor ==1)
		 {
			 if(count == 1) {
				 System.out.println("The card you picked is Ace of Clubs");
			 }
			 else if(count == 2) {
				 System.out.println("The card you picked is 2 of Clubs");
			 }
			 else if(count == 3) {
				 System.out.println("The card you picked is 3 of Clubs");
			 }
			 else if(count == 4) {
				 System.out.println("The card you picked is 4 of Clubs");
			 }
			 else if(count == 5) {
				 System.out.println("The card you picked is 5 of Clubs");
			 }
			 else if(count == 6) {
				 System.out.println("The card you picked is 6 of Clubs");
			 }
			 else if(count == 7) {
				 System.out.println("The card you picked is 7 of Clubs");
			 }
			 else if(count == 8) {
				 System.out.println("The card you picked is 8 of Clubs");
			 }
			 else if(count == 9) {
				 System.out.println("The card you picked is 9 of Clubs");
			 }
			 else if(count == 10) {
				 System.out.println("The card you picked is 10 of Clubs");
			 }
			 else if(count == 11) {
				 System.out.println("The card you picked is Jack of Clubs");
			 }
			 else if(count == 12) {
				 System.out.println("The card you picked is Queen of Clubs");
			 }
			 else if(count == 13) {
				 System.out.println("The card you picked is King of Clubs");
			 }
		 }
	}

}


package computer;

import java.util.Scanner;

public class java3_27 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		System.out.println("Enter a point's x- and y- coordinates:");	
        double x = input.nextDouble();
        double y = input.nextDouble();
        if(x>=0&&y>=0&&(1.0/2)*x+y<=100) {
        	System.out.println("The point is in the triangle");
        }
        else {
        	System.out.println("The point is not in the triangle");
        }
        
        
	}

}


package computer;
import java.util.Scanner;
public class java3_28 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input = new Scanner(System.in);
    double x1 = input.nextDouble();
    double y1 = input.nextDouble();
    double w1 = input.nextDouble();
    double h1 = input.nextDouble();
    double x2 = input.nextDouble();
    double y2 = input.nextDouble();
    double w2 = input.nextDouble();
    double h2 = input.nextDouble();
    if((x1-w1/2.0)<=x2&&x2<=(x1+w1/2.0)&&(y1-h1/2.0)<=y2&&y2<=(y1+h1/2.0)) {
    	if()
    }
	}

}


package computer;

import java.util.Scanner;

public class java3_29 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		double x1 = input.nextDouble();
	    double y1 = input.nextDouble();
	    double r1 = input.nextDouble();
	    double x2 = input.nextDouble();
	    double y2 = input.nextDouble();
	    double r2 = input.nextDouble();
	    if(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))<=((r2-r1)*(r2-r1))){
	    	System.out.println("circle2 is inside circle1");
	    }
	    else if(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))<=((r2+r1)*(r2+r1))){
	    	System.out.println("circle2 overlaps circle1");
	    }
	    else {
		    	System.out.println("circle2 does not overlap circle1");
	    }
	}

}
第五章
package computer;

public class java5_7 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    double sum=0;
    double dallor=10000;
    int i=0;
    for(i=1;i<=10;i++)
    {
    	sum+=dallor;
    	dallor+=(dallor*=0.05);
    }
    System.out.println(sum);
	}

}

package computer;

import java.util.Scanner;

public class java5_17 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int number = input.nextInt();
		int temp=0;
		int i=0;
		int j=0;
		int k=0;
		for(i=1;i<=number;i++) {
			for(k=2*(number-i);k>=0;k--) {
				System.out.print(" ");
			}
			temp=i;
			for(j=temp;j>=1;j--) {
				System.out.print(j+" ");
			}
			for(j=2;j<=temp;j++) {
				System.out.print(j+" ");
			}
			System.out.println();
		}
	}

}


package computer;

import java.util.Scanner;

public class java5_19 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int high=7;
		int i=0;
		int j=0;
		int k=0;
		for(i=1;i<=high;i++) {
			for(k=2*(high-i);k>=0;k--)
			{
			System.out.print(" ");
			}
			for(j=1;j<=pow(2,i-1);j*=2) {
				System.out.print(" "+j);
			}
			j/=4;
			for(;j>=1;j/=2) {
				System.out.print(" "+j);
			}
			System.out.println();	
		}
	}

	private static int pow(int i, int i2) {
		// TODO Auto-generated method stub
		int t=0;
		for(t=0;t<i2;t++)
		{
			i*=2;
		}
		return i;
	}

}


package computer;
import java.util.Scanner;
public class java5_21 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int i=0;
	    double MonthlyPayment=0;
	    double rate=0.05;
	    double monthrate = 0;
	    double TotalPayment;
	    System.out.print("Loan Amount: ");
	    double money = input.nextDouble();
	    System.out.print("Number of years: ");
	    double year = input.nextInt();
	    System.out.println("Interest Rate     MonthlyPayment     Total Payment");
	    for(i=1;i<=12;i++)
	    {
	    	monthrate=rate/12;
	    	money=((money/12)*monthrate+money/12)*12;
	    	System.out.printf("%.3f%%\t\t",100*rate);
	    	rate+=0.00125;
	    	System.out.printf("%.2f\t\t",monthrate*money/12+money/12);
	    	System.out.printf("%.2f\t\t",money);
	    	System.out.println();
	    }    
		}
}


package computer;
import java.util.Scanner;
public class java5_22 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input = new Scanner(System.in);
    System.out.println("Loan Amount: ");
    double money = input.nextDouble();
    	
	}

}


package computer;
import java.util.Scanner;

public class java5_25 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input = new Scanner(System.in);
    double i=0;
    double sum=0;
    double PI=0;
    int n=0;
    for(n=0;n<10;n++)
    {
    	sum=0;
    	for(i=1;i<=f(n);i++) {
    		if(i%2!=0) {
    			sum+=1/(2*i-1);
    		}
    		else if(i%2==0) {
    			sum+=(-1)/(2*i-1);
    		}
    	}
    	PI=4*sum;
    	System.out.println(PI);
    }
    }
	private static int f(int n) {
		// TODO Auto-generated method stub
		if(n==0) return 10000;
        else if(n==1) {
			return 20000;
		}
		else if(n==2) return 30000;
		else if(n==3) return 40000;
		else if(n==4) return 50000;
		else if(n==5) return 60000;
		else if(n==6) return 70000;
		else if(n==7) return 80000;
		else if(n==8) return 90000;
		else if(n==9) return 100000;
		else
		return 0;
		
	}

}


package computer;

public class java5_26 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    int n=0;
    int i=0;
    int sum=0;
    for(n=0;n<10;n++)
    {
    	for(i=1;i<f(n);i++) {
    		sum+=1/g(i);			
    	}
    	System.out.println(sum);
    }
	}

	private static int g(int i) {
		// TODO Auto-generated method stub
		int j=0;
		int sum=1;
		for(j=1;j<=i;j++)
		{
			sum*=j;
		}
		return sum;
	}

	private static int f(int n) {
		// TODO Auto-generated method stub
		if(n==0) return 10000;
        else if(n==1) {
			return 20000;
		}
		else if(n==2) return 30000;
		else if(n==3) return 40000;
		else if(n==4) return 50000;
		else if(n==5) return 60000;
		else if(n==6) return 70000;
		else if(n==7) return 80000;
		else if(n==8) return 90000;
		else if(n==9) return 100000;
		else
		return 0;
	}

}
package computer;

public class java5_27 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    int i=101;
    int n=0;
    int sum=0;
    for(i=101;i<=2100;i++) {
    	if((i%4==0&&i%100!=0)||(i%400==0)) {
    		sum++;
    		if(n==10) {
    			System.out.println("");
    			n=0;
    		}
    		n++;
    		System.out.print(i+" ");
    	}
    }
    System.out.println("");
    System.out.println(sum);
	}

}


package computer;

public class java5_28 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    
	}

}


package computer;
import java.util.Scanner;

public class java5_29 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("请输入年份：");
		int year = input.nextInt();
		System.out.print("请输入这年的第一天是星期几（数字表示）：");
		int startDay = input.nextInt();
		
		printMonthTitle(1, year);
		int whatDay = printMonthBody(startDay, 1, year);
		for(int month = 2; month <= 12; month++) {
			printMonthTitle(month, year);
			whatDay = printMonthBody(whatDay, month, year);
		}		
	}
	
	public static boolean isLeap(int year) {
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			return true;
		else 
			return false;
	}

	public static int[] makeSureDays(int year) {
		int[] leapDays = {
			31,29,31,30,31,30,31,31,30,31,30,31
		};
		int[] nonLeapDays = {
			31,28,31,30,31,30,31,31,30,31,30,31
		};
		
		if(isLeap(year))
			return leapDays;
		else
			return nonLeapDays;
	}
	
	public static String getMonthName(int month) {
		String monthName = "";
		switch(month) {
			case 1: monthName = "January"; break;
			case 2: monthName = "February"; break;
			case 3: monthName = "March"; break;
			case 4: monthName = "April"; break;
			case 5: monthName = "May"; break;
			case 6: monthName = "June"; break;
			case 7: monthName = "July"; break;
			case 8: monthName = "August"; break;
			case 9: monthName = "September"; break;
			case 10: monthName = "October"; break;
			case 11: monthName = "November"; break;
			case 12: monthName = "December";
		}
		
		return monthName;
	}
	
	public static void printMonthTitle(int month, int year) {
		String monthName = getMonthName(month);
		System.out.println("         " + monthName + " " + year);
		
		System.out.println("-----------------------------");
		
		System.out.println(" Sun Mon Tue Wed Thu Fri Sat");
	}
	
	public static int printMonthBody(int whatDay, int month, int year) {
		//whatDay is the first day of the month
		
		int track = 0;
		for(int j = 0; j < (whatDay % 7); j++) {
			System.out.print("    ");
			track++;
		}
		int[] days = makeSureDays(year);
		//days[month - 1]
		for(int i = 1; i <= days[month - 1]; i++) {
			System.out.printf("%4d", i);
			track++;
			if(track % 7 == 0) {
				System.out.printf("\n");
			}
		}
		System.out.printf("\n");
		return (track % 7);
	}
}


package computer;

import java.util.Random;

public class java5_32 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Random rand = new Random();
		int count = rand.nextInt(9)+1;
		int i=0;
		while(i==count) {
			i++;
		}
		System.out.println(count*10+i);
	}

}

 
