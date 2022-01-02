代码作业：
第二次作业：

第一章
1-1：
public class java1-1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	System.out.println("Welcome to Java!");
	}

}
1-2：
public class java1_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
       System.out.println("Programming is fun!");
       System.out.println("Programming is First!");
       System.out.println("Problem Driven");
	}

}
1-3
public class java1_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    System.out.print("(10.5+2*3)/(45-3.5) = ");
    System.out.println((10.5+2*3)/(45-3.5));
	}

}
1-4
public class java1_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    System.out.println("Welcome to Java);
System.out.println("Welcome to Java);	}//要加引号

}
1-5：
public class java1_5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    System.out.println(1/0);//0不能作为除数
	}
}
1-6：
public class java1_6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    System.out.println("Celsius 35 is Fahrenheit dregree");
    System.out.println((9/5)*35+32);
	}

}

第二章
2-1：
public class java2_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    double radius;
    double area;
    radius=20;
    area=radius*radius*3.14159;
    System.out.println("The area for the circle of radius"+radius+" is "+area);
	}

}:
2-2：
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
}；

2-3：
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
2-4：

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
2-5：
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

2-6：
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

}；
2-7：
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

2-8：
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

2-9：
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

2-10：
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

Java 第三章
3.4
package computer;
/*import java.util.Random;*/
public class java_space {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    //Random rand = new Random();
    //int month = rand.nextInt(12)+1;
    int month = (int)(Math.random()*12+1);
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

3.9
package computer;
import java.util.Scanner;
public class java3_9 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the first 9 digits of an ISBN as integer: ");
        String temp = input.next();
        int i = Integer.parseInt(temp);
        // 处理数据：赋值d1~d9
        int d1 = i / 100000000;
        i %= 100000000;
        int d2 = i / 10000000;
        i %= 10000000;
        int d3 = i / 1000000;
        i %= 1000000;
        int d4 = i / 100000;
        i %= 100000;
        int d5 = i / 10000;
        i %= 10000;
        int d6 = i / 1000;
        i %= 1000;
        int d7 = i / 100;
        i %= 100;
        int d8 = i / 10;
        i %= 10;
        int d9 = i;
        // 求d10
        int d10 =(1 * d1 + 2 * d2 + 3 * d3 + 4 * d4 + 5 * d5 + 6 * d6 +7 * d7 + 8 * d8 + 9 * d9) % 11;
        // 输出
        String str="";
        if(d10 < 10) {
            str = temp + d10;
        }else{
            str = temp + "X";
        }
        System.out.println("The ISBN-10 number is " + str);

  }
}

3.15
package computer;
import java.util.Scanner;
import java.util.Random;
public class java3_15 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 int a0 = (int)(Math.random()*899+101);
		 System.out.println(a0);
	        int a1 = a0 / 100;
	        int a2 = (a0 % 100) / 10;
	        int a3 = a0 % 10;

	        // 获取用户输入一个整数
	        Scanner input = new Scanner(System.in);
	        System.out.print("请输入一个三位整数:");
	        int b0 = input.nextInt();
	        if(b0 < 0 || b0 >= 1000){
	            System.out.println("输入数据不合法");
	            System.exit(0);
	        }
	        int b1 = b0 / 100;
	        int b2 = (b0 % 100) / 10;
	        int b3 = b0 % 10;
	        if(a0==b0) System.out.println("奖金10000$");
	        else {
	        	int temp=0;
		        if(a1>a2) {
		        	temp=a1;a1=a2;a2=temp;
		        }
		        if(a2>a3) {
		        	temp=a2;a2=a3;a3=temp;
		        }
		        if(a1>a2) {
		        	temp=a1;a1=a2;a2=temp;
		        }
		        if(b1>b2) {
		        	temp=b1;b1=b2;b2=temp;
		        }
		        if(b2>b3) {
		        	temp=b2;b2=b3;b3=temp;
		        }
		        if(b1>a2) {
		        	temp=b1;b1=b2;b2=temp;
		        }
		        if(a1==b1&&a2==b2&&a3==b3) System.out.println("奖金3000$");
		        else {
		        	int i=0;
			        int[] arr= {a1,a2,a3,b1,b2,b3};
			        for(i=0;i<3;i++) {
			        	if(arr[i]==arr[i+3]) {
			        		System.out.println("奖金1000$");
			        		break;}
			        }
		        }
	        }
	}
}
3.19
package computer;
import java.util.Scanner;	
public class java3_19 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input = new Scanner(System.in);
    int a = input.nextInt();
    int b = input.nextInt();
    int c = input.nextInt();	
    //input.nextLine();
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
3.21
package computer;
import java.util.Scanner;
public class java3_21 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input = new Scanner(System.in);
    System.out.print("Enter year: (e.g., 2012): ");
    int year = input.nextInt();
    System.out.print("Enter month: 1-12: ");
    int month = input.nextInt();
    System.out.print("Enter the day of month: 1-31: ");
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

3.22
package computer;
import java.util.Scanner;
public class java3_22 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner input = new Scanner(System.in);
    System.out.print("Enter a point with two coordinates: ");
    double x = input.nextDouble();
    double y = input.nextDouble();
    if(Math.pow(x,2)+Math.pow(y,2)<=100) {
        System.out.println("point ("+ x +" "+ y +" )is in the circle");
    }
     else
        System.out.println("point ("+ x +" "+ y +" )is not in the circle");
    	}
    
}

3.23
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

3.24
package computer;
public class java3_24 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 // number的值对应牌的大小，color通过switch转为花色
        int number = (int)(Math.random() * 13 + 1);
        int color = (int)(Math.random() * 4);

        // number转为String类型
        String str_Number;
        if(number == 1)
            str_Number = "ACE";
        else if(number == 11)
            str_Number = "Jack";
        else if(number == 12)
            str_Number = "Queen";
        else if(number == 13)
            str_Number = "King";
        else
            str_Number = "" + number;

        // color转为String类型
        String str_Color;
        switch (color){
            case 0:str_Color="Clubs";break;
            case 1:str_Color="Diamonds";break;
            case 2:str_Color="Heart";break;
            default:str_Color="Spades";
        }

        // 输出
        System.out.println("The card you picked is " + str_Number + " of " + str_Color);
	}
}
    
		/*傻子做法
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
	}*/

3.27
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

/*import java.util.Scanner;

public class Test3_27 {
    public static void main(String[] args) {
        // 获取该点x坐标、y坐标
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a point's x- and y- coordinates: ");
        double x_judge = input.nextDouble(), y_judge = input.nextDouble();

        // 判断该点是否在三角形内，如果不在则改为false
        boolean bool = true;
        // 判断x、y坐标是否在范围内
        if( (x_judge < 0 || x_judge > 200) || (y_judge < 0 || y_judge > 100) ) {
            bool = false;
        }
        // 求出其它两个点对应的直线斜率（k），并将x_judge y_judge代入判断
        double k = 100.0 / (0 - 200);
        double b_judge = y_judge - k * x_judge;
        if(b_judge < 0 || b_judge > 100)
            bool = false;

        // 输出
        if(bool)
            System.out.println("The point is in the triangle");
        else
            System.out.println("The point is not in the triangle");
    }
}
*/

3.28
package computer;
import java.util.Scanner;
public class java3_28 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
        System.out.println("Enter r1's center x-. y- coordinates, width, and height: ");
        double x1 = input.nextDouble(), y1 = input.nextDouble();
        double w1 = input.nextDouble(), h1 = input.nextDouble();
        System.out.println("Enter r2's center x-, y- coordinates, width, and height: ");
        double x2 = input.nextDouble(), y2 = input.nextDouble();
        double w2 = input.nextDouble(), h2 = input.nextDouble();

        // 计算两个中心之间距离的分量
        double x0 = Math.abs(x2 - x1);
        double y0 = Math.abs(y2 - y1);

        // 判断位置
        if(((x0 + w2 / 2) <= (w1 / 2)) && ((y0 + h2 / 2) <= (h1 / 2))) {
            System.out.println("r2 is inside r1");
        }else if(((w1 - w2) / 2) < x0 && x0 < ((w1 + w2) / 2) && ((h1 - h2) / 2) < y0 && y0 < ((h1 + h2) / 2))
            System.out.println("r2 overlaps r1");
        else
            System.out.println("r2 does not overlap r1");
     }
}

3.29
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


第五章：
5.7：
package computer;

public class java5_7 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double sum=0;
		double count = 0;
		count = 10000*Math.pow((1+0.05),10);
		System.out.println("十年后的学费为："+count);
		int i=0;
		for(i=1;i<5;i++) {
			sum+=count*Math.pow((1+0.05),i);
		}
		System.out.println("第十年起四年后的总学费为"+sum);
}
}
5.17：
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

5.19：
package computer;

public class java5_19 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int high=8;
		int i=0;
		int j=0;
		int k=0;
		for(i=1;i<=high;i++) {
			for(k=4*(high-i)-1;k>=0;k--)
			{
			System.out.print(" ");
			}	
			for(j=1;j<=Math.pow(2,i-1);j*=2) {
				System.out.printf("%4d",j);
			}
			j/=4;
			for(;j>=1;j/=2) {
				System.out.printf("%4d",j);
			}
			System.out.println();	
		}
	}
}
5.21
package computer;
import java.util.Scanner;
	public class java5_21 {
	
		public static void main(String[] args) {
			// TODO Auto-generated method stub
			 // 1. 获取用户输入的贷款额度和年份
	        Scanner input = new Scanner(System.in);
	        System.out.println("Loan Amount:");
	        double amount = input.nextDouble();
	        System.out.println("Number of Years:");
	        int years = input.nextInt();

	        System.out.println("Interest Rate   Monthly Payment   TotalPayment");

	        //2. 使用for循环+printf()函数输出表格（结果）
	        double monthRate = 0, monthlyPayment = 0, totalPayment = 0, interestRate = 0;
	        for (double i = 5.0; i <= 8.0; i += 1.0 / 8){
	            // 月支付额度计算
	            interestRate = i / 100;
	            monthlyPayment = amount * (interestRate / 12) /
	                    ( 1 - 1 / Math.pow((1 + (interestRate / 12)), years * 12));
	            totalPayment = monthlyPayment * years * 12;

	            System.out.printf("%4.3f", i);
	            System.out.print("%");
	            System.out.printf("          %6.2f             %8.2f\n", monthlyPayment, totalPayment);
	         }
	     }
	}
5.22：

package computer;
import java.util.Scanner;
public class java5_22 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// 获取用户输入
        Scanner input = new Scanner(System.in);
        System.out.println("Loan Amount: ");
        double amount = input.nextDouble();
        System.out.println("Number of Years: ");
        int years = input.nextInt();
        System.out.println("Annual Interest Rate（7%-->7）: ");
        double interestRate = input.nextDouble();

        // 计算月支付额、总支付额
        double monthlyPayment = (amount * interestRate / 1200) / (1 - 1 / Math.pow(1 + interestRate / 1200, years * 12));
        double totalPayment = monthlyPayment * years * 12;
        System.out.println("Monthly Payment: " + monthlyPayment);
        System.out.println("Total Payment: " + totalPayment);

        // 输出表头
        System.out.println("Payment# Interest\t\tPrincipal\t\ttBalance");

        // for循环
        double interest = 0.0, principal = 0.0;
        for(int i = 1;i <= years * 12;i++){
            interest = interestRate / 1200 * amount;
            principal = monthlyPayment - interest;
            amount -= principal;
            if(i == years * 12)
                principal += amount;
            System.out.print(i + "\t\t ");
            System.out.printf("%5.2f\t\t%6.2f\t\t%7.2f\n", interest, principal, amount);
        }
	}

}

5.25：
package computer;
import java.util.Scanner;

public class java5_25 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 double formula = 0;
	        for( int i = 10000; i <= 100000 ; i += 10000 ){
	            formula = 0;
	            for ( int n = 1 ; n <= i / 2; n++ ){
	                formula += 1.0 / ( ( 4 * n - 3 ) * ( 4 * n - 1) );
	            }
	            formula = 8 * formula ;
	            System.out.printf("当i=%d时，结果为%f\n", i, formula);
	        }
    }
}

5.26：
package computer;

public class java5_26 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double e = 1.0, item = 1.0;
        for (int n = 10000; n <= 100000; n += 10000){
            item = 1;
            for ( int i = 1; i <= n ; i++){
                item /= i;
                e += item;
            }
            System.out.println("当n值为" + n +"时，和为" + e);
        }
	}
}

5.27：
package computer;

public class java5_27 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		boolean bool = false;
        int count = 0;

        for (int year = 101; year <= 2100; year++) {
            bool = false;
            if (((year % 4 == 0) && (year % 100 != 0)) || ((year % 400 == 0) && (year % 100 == 0))){
                bool = true;
                count++;
                System.out.print(year + " ");
                if (count % 10 == 0) {
                    System.out.println();
                }
            }
        }
        System.out.print("\n闰年数目:" + count);
	}
}
5.28：
package computer;
import java.util.Scanner;
public class java5_28 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// 接收用户输入
        Scanner input = new Scanner(System.in);
        System.out.println("输入年份和代表该年第一天是周几的数字");
        int year = input.nextInt();
        int day = input.nextInt();

        // 计算指定年份1月1号到
        String str1 = "";
        String str2 = "";
        for (int month = 1; month <= 12 ; month++){
            // 月份天数（不考虑闰年）
            switch (month){
                case 1: {str1 += "January 1, ";} break;
                case 2: {day += 31; str1 += "Febuary 1, ";} break;
                case 3: {day += 28; str1 += "March 1, ";} break;
                case 4: {day += 31; str1 += "April 1, ";} break;
                case 5: {day += 30; str1 += "May 1, ";} break;
                case 6: {day += 31; str1 += "June 1, ";} break;
                case 7: {day += 30; str1 += "July 1, ";} break;
                case 8: {day += 31; str1 += "Auguest 1, ";} break;
                case 9: {day += 31; str1 += "September 1, ";} break;
                case 10: {day += 30; str1 += "October 1, ";} break;
                case 11: {day += 31; str1 += "November 1, ";} break;
                case 12: {day += 30; str1 += "December 1, ";}
            }
            // 判断闰年+month大于等于2则day+1
            if (((year % 4 == 0) && (year % 100 != 0)) || ((year % 400 == 0) && (year % 100 == 0))){
                if (month != 1)
                    day +=1;
            }
            // 求是周几
            int week = day % 7;
            switch (week){
                case 1:str2 = " is Monday";break;
                case 2:str2 = " is Tuesday";break;
                case 3:str2 = " is Wednesday";break;
                case 4:str2 = " is Thurday";break;
                case 5:str2 = " is Friday";break;
                case 6:str2 = " is Saturday";break;
                case 0:str2 = " is Sunday";break;
            }
            // 输出
            System.out.println(str1 + year + str2);
            str1 = "";
            str2 = "";
        }
	}

}
5.29：
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
5.32：
package computer;
import java.util.Scanner;
import java.util.Random;

public class java5_32 {

	public static void main(String[] args) {
		 // Generate a number
        int lottery1 = (int) (Math.random() * 10);

        // Generate the other number
        int lottery2 = 0;
        for (int i = 0; i <= 9;i++){
            if(i != lottery1){
                lottery2 = i;
                break;
            }
        }

        // 输出彩票
        System.out.println(lottery1 * 10 + lottery2);
	}
}
5.33：
package computer;

public class java5_33 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int temp = 0;
        for (int i = 6; i <= 10000; i++){
            temp = 0;
            // 找出i的所有除数（n）
            for (int n = 1; n < i;n++){
                // 判断n是否为i的除数
                if (i % n == 0){
                    temp += n;
                }
            }
            // 判断除数之和是否为i
            if (temp == i)
                System.out.println(i+"为完全数");
        }
	}
}
5.34：
package computer;
import java.util.Scanner;
public class java5_34 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 int computer_win = 0, people_win = 0;
	        for (; ; ) {
	            // 电脑与人类产生石头剪刀布的代码
	            int computer = (int) (Math.random() * 3);
	            Scanner input = new Scanner(System.in);
	            System.out.println("rock(0), scissor(1), paper(2): ");
	            int people = input.nextInt();

	            // 判断人类输入是否合法
	            if (people != 0 && people != 1 && people != 2) {
	                System.out.println("输入不合法");
	            }

	            // 结果判断
	            if (computer == 0 && people == 1)
	                computer_win += 1;
	            else if (computer == 0 && people == 2)
	                people_win += 1;
	            else if (computer == 1 && people == 0)
	                people_win += 1;
	            else if (computer == 1 && people == 2)
	                computer_win += 1;
	            else if (computer == 2 && people == 0)
	                computer_win += 1;
	            else if (computer == 2 && people == 1)
	                people_win += 1;
	            else
	                System.out.print("本局平手\t");

	            // 输出当前比分并判断是否需要结束循环
	            System.out.println("人类:计算机分数为：" + people_win + ":" + computer_win);
	            if (computer_win == 3 || people_win == 3){
	                String str = (computer_win == 3) ? "计算机胜" : "人类胜";
	                System.out.println(str);
	                return;
	            }
	        }
	}

}
5.36：
package computer;
import java.util.Scanner;
public class java5_36 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 int i, temp, count, result, d10;
	        String str;

	        // 获取数据
	        Scanner input = new Scanner(System.in);
	        System.out.println("Enter the first 9 digits of an ISBN as integer: ");
	        i = input.nextInt();
	        temp = i;

	        str = "";
	        if (i / 100000000 == 0){
	            str = "0";
	        }
	        str += temp;

	        // 处理数据：赋值d1~d9
	        count = 0;
	        result = 0;
	        for (int m = 100000000; m >= 1; m /= 10){
	            ++count;
	            result = count * i / m;
	            i %= m;
	        }

	        // 求d10
	        d10 = result % 11;

	        // 输出
	        if(d10 < 10) {
	            str += d10;
	        }else{
	            str += "X";
	        }
	        System.out.println("The ISBN-10 number is " + str);
	}

}
5.37：
package computer;
import java.util.Scanner;
public class java5_37 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 //1. 接收用户输入的10进制整数
        Scanner input = new Scanner(System.in);
        System.out.print("请输入一个十进制整数：");
        int decimal = input.nextInt();

        // 2. 对十进制整数进行转换：除2倒序的余数；以十进制整数形式存储二进制数
        int remainder = 0, binary = 0;
        for (int i = 1;decimal > 0;i *= 10){
            remainder = decimal % 2;
            decimal /= 2;
            binary += remainder * i;
        }

        // 3. 输出
        System.out.println(binary);

	}

}
5.38：
package computer;
import java.util.Scanner;
public class java5_38 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//1. 接收用户输入的10进制整数
        Scanner input = new Scanner(System.in);
        System.out.print("请输入一个十进制整数：");
        int decimal = input.nextInt();

        // 2. 对十进制整数进行转换：除8倒序的余数；以十进制整数形式存储八进制数
        int remainder = 0, binary = 0;
        for (int i = 1;decimal > 0;i *= 10){
            remainder = decimal % 8;
            decimal /= 8;
            binary += remainder * i;
        }

        // 3. 输出
        System.out.println(binary);
	}

}
5.45：
package computer;
import java.util.Scanner;
public class java5_45 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// 1. 获取用户输入的10个数据
        Scanner input = new Scanner(System.in);
        System.out.print("Enter 10 numbers: ");

        double user_input = 0, n = 0;
        // sum0所有数的和，sum1所有数的平方的和
        double sum0 = 0, sum1 = 0;
        for (int i = 1; i <= 10; i++){
            user_input = input.nextDouble();
            n++;
            sum0 += user_input;
            sum1 += Math.pow(user_input, 2);
        }

        // 计算平均值
        double mean = sum0 / n;
        double deviation = Math.sqrt((sum1 - Math.pow(sum0, 2) / n) / (n-1));

        // 输出结果
        System.out.println("The means is " + mean);
        System.out.printf("The standard deviation is %.5f" , deviation);
	}

}
第七章

7.3：
package computer;
import java.util.Scanner;
public class java7_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] lst1 = new int[101];
        int n = -1;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the integers between 1 and 100: ");
        do{
            n = input.nextInt();
            ++lst1[n];
        }while(n != 0);
        
        for (int i = 1; i < 101;i++){
            if (lst1[i] == 0){continue;}
            else 
                System.out.println(i + " occurs " + lst1[i] + " times");
        }
	}
}


7.5：
package computer;
import java.util.Scanner;
public class java7_5 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 // 1. 读入学生个数length，声明数组长度为length
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of students: ");
        int length = input.nextInt();

        // 2. 读入n个数据（以for循环读入）
        double[] lst = new double[length];
        System.out.print("Enter " + length + " scores: ");
        for (int n = 0; n < length;n++){
            lst[n] = input.nextDouble();
        }

        // 3. 对n个数据进行比较，获取最大值并赋值给best
        double best = choiceBiggestNumber(lst, length);

        // 4. 再定义一个比较best和数组的每个元素的方法，返回等级
        for (int i = 0;i < length;i++){
            System.out.println("Student " + i + " score is " + lst[i] + " and grade is " + grade(lst[i], best));
        }
    }
    // 传入list、list大小找出list最大值
    public static double choiceBiggestNumber(double[] lst, int length){
        double temp = lst[0];
        for (int i = 0;i < length-1;i++){
            temp = max(temp, lst[i+1]);
        }
        return temp;
    }
    // 对比两个变量得到最大值
    public static double max(double a, double b){
        if (a > b){return a;}
        else {return b;}
    }
    // 输出等级
    public static String grade(double num, double max){
        if (num >= max - 10){return "A";}
        else if (num >= max - 20){return "B";}
        else if (num >= max - 30){return "C";}
        else if (num >= max - 40){return "D";}
        else
            return "F";
    }
}


7.17：
package computer;
import java.util.Arrays;
import java.util.Scanner;
public class java7_17 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 //1. 主方法：获取学生个数，作为姓名和成绩两个数组的长度
        Scanner input = new Scanner(System.in);
        System.out.print("输入学生个数：");
        int length = input.nextInt();

        //1+. 声明两个数组
        String[] names = new String[length];
        int[] scores = new int[length];

        //2. 主方法：使用for循环获取学生姓名和成绩，学生姓名与成绩交替获取，并赋值给两个数组的对应位置
        System.out.print("输入姓名成绩：");
        for (int i = 0 ; i < length ; i++){
            names[i] = input.next();
            scores[i] = input.nextInt();
        }

        //3. 主方法：调用自定义方法sort()，传入两个数组并进行排序，返回值是排序后成绩对应的姓名数组
        String[] names_feedback = new String[length];
        names_feedback = sort(names, scores);

        //5. 主方法：输出返回的数组
        System.out.print(Arrays.toString(names_feedback));
    }
    //4. sort方法：在对成绩数组进行排序（交换位置）的同时，对姓名也做同样交换位置的操作
    public static String[] sort(String[] names, int[] scores){
        //1. 声明一个String数组（names_feedback）用于返回姓名
        String[] names_feedback = new String[names.length];
        //2. 使用for循环控制遍历
        int index = -1;     // 保存最大值下标
        for (int i = 0 ; i < names.length ; i++) {
            //调用自定义方法list_max()，传入scores数组并接收除负数外最大值的下标
            index = list_max(scores);
            //上面接收到的最大值下标index，此时for循环为第i+1次
            //names_feedback[i]=names[index]; 同时将scores[index]=-1
            names_feedback[i]=names[index];
            scores[index]=-1;
        }
        //3. 返回names_feedback数组
        return names_feedback;
    }
    //4+ 自定义方法list_max()，传入scores数组并接收除负数外最大值的下标
    public static int list_max(int[] scores){
        // 保存最大值的变量temp_max和最大值的下标temp_index
        int temp_max = 0, temp_index = -1;
        // 获取scores长度为length
        int length = scores.length;
        // 使用for循环获取最大值（负数不计）
        for (int i = 0 ; i < length ; i++){
            if (temp_max < scores[i] && scores[i] >= 0){
                temp_max = scores[i];
                temp_index = i;
            }
        }
        // 返回保存的最大值下标temp_index
        return temp_index;
	}

}

第八章：
8.4:
package computer;

import java.util.Arrays;

public class java8_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 //1. 新建一个8*7的二维数组，赋值
        int[][] emplayees_workhours = {
                {2, 4, 3, 4, 5, 8, 8},
                {7, 3, 4, 3, 3, 4, 4},
                {3, 3, 4, 3, 3, 2, 2},
                {9, 3, 4, 7, 3, 4, 1},
                {3, 5, 4, 3, 6, 3, 8},
                {3, 4, 4, 6, 3, 4, 4},
                {3, 7, 4, 8, 3, 8, 4},
                {6, 3, 5, 9, 2, 7, 9},
        };
        int raw = emplayees_workhours.length;
        int col = emplayees_workhours[0].length;
        //2. 再新建一个长度为8的一维数组，存储每位员工工作小时数
        int[] emplayee_workhours_sum = new int[raw];
        //3. 创建一个int型对象存储工作小时数加和，赋初始值为0
        int sum = 0;
        //4. 双层循环语句遍历二维数组，行下标从0开始7结束 列下标从0开始6结束
        for (int a = 0 ; a < raw ; a++){
            //5. 循环体内（第一层内）：赋第三步创建的存储加和对象值为0
            sum = 0;
            for (int b = 0 ; b < col ; b++){
                //6. 循环体内（第二层内）：对每行元素进行加和
                sum += emplayees_workhours[a][b];
            }
            //7. 循环体内（第一层内）：将加和赋值给一维数组
            emplayee_workhours_sum[a] = sum;
        }
        //8. 新建另一个一维数组，长度等于第二步创建的一维数组
        int[] copy = new int[raw];
        //9. 原一维数组复制给新创建的一维数组
        System.arraycopy(emplayee_workhours_sum, 0 , copy, 0, raw);
        //10. 对新一维数组进行排序
        Arrays.sort(copy);
        //11. 遍历新一维数组元素，匹配到则输出雇员编号（原数组下标）和元素值，输出后则将元素值置0
        for (int a = copy.length - 1 ; a >= 0 ; a--){
            //与原有一维数组进行匹配
            for (int b = 0 ; b < emplayee_workhours_sum.length ; b++){
                if (copy[a] == emplayee_workhours_sum[b]){
                    System.out.println("Employee " + b + " 一周工作" + copy[a] + "小时");
                    emplayee_workhours_sum[b] = 0;
                }
            }
        }
	}
}
8.6:
package computer;

import java.util.Scanner;

public class java8_6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//1. 主方法：新建三个数组a、b、c，长度均为3*3
        double[][] a = new double[3][3];
        double[][] b = new double[3][3];
        double[][] c = new double[3][3];
        //2. 主方法：从控制台获取用户输入，使用循环读入数组a的元素
        Scanner input = new Scanner(System.in);
        System.out.print("Enter matrix1: ");
        for (int i = 0; i < 3 ; i++){
            for (int j = 0 ; j < 3; j++){
                a[i][j] = input.nextDouble();
            }
        }
        //3. 主方法：从控制台获取用户输入，使用循环读入数组b的元素
        System.out.print("Enter matrix2: ");
        for (int i = 0; i < 3 ; i++){
            for (int j = 0 ; j < 3; j++){
                b[i][j] = input.nextDouble();
            }
        }
        //4. 主方法：调用方法multiplyMatrix，使用c对象接收返回值
        c = multiplyMatrix(a, b);
        //5. 主方法：输出The multipication……句
        System.out.println("The multipication of the matrices is");
        //6. 主方法：调用自定义的输出方法，传入a、b、c三个数组
        output(a, b ,c);
    }
    public static double[][] multiplyMatrix(double[][] a, double[][] b){
        //7. multiplyMatrix方法：声明一个数组c，长度为3*3
        double[][] c = new double[3][3];
        //8. multiplyMatrix方法：使用嵌套循环计算a*b，用c接收，a的列数为n
        // c[i][j] = a[i][1] * b[1][j] + a[i][2] * b[2][j]+……+a[i][n]*b[n][j]
        for (int i = 0 ; i < 3 ; i++){
            for (int j = 0 ; j < 3 ; j++){
                for (int n = 0; n < 3 ; n++){
                    c[i][j] += a[i][n] * b[n][j];
                }
            }
        }
        //9. multiplyMatrix方法：返回数组c
        return c;
    }
    public static void output(double[][] a, double[][] b, double[][] c){
        //三层循环，最外层行第二层多个同层次循环
        for (int i = 0 ; i < 3; i++){
            //数组a
            for (int j = 0 ; j < 3 ; j++){
                System.out.print(a[i][j] + " ");
            }
            //数组a与数组b之间的空格或*
            if ( i == 1 ){
                System.out.print("\t*\t");
            }
            else{
                System.out.print("\t\t");
            }
            //数组b
            for (int j = 0 ; j < 3 ; j++){
                System.out.print(b[i][j] + " ");
            }
            //数组b与数组c
            if ( i == 1 ){
                System.out.print(" =\t");
            }
            else{
                System.out.print("\t");
            }
            //数组c
            for (int j = 0 ; j < 3 ; j++){
                System.out.printf("%.1f ", c[i][j]);
            }
            System.out.println();
        }
	}

}

Java 第九章例题
9.1：
package example;

public class java9_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle circle1 = new Circle();
		System.out.println("The area of the circle of radius"
				+circle1.radius+" is "+circle1.getArea());
		Circle circle2 = new Circle(25);
		System.out.println("The area of the circle of radius"
				+circle2.radius+" is "+circle2.getArea());
		Circle circle3 = new Circle(125);
		System.out.println("The area of the circle of radius"
				+circle3.radius+" is "+circle3.getArea());
		circle2.radius = 100;
		System.out.println("The area of the circle of radius"
		+ circle2.radius +" is "+circle2.getArea());
		
	}
}
class Circle {
    double radius;
    Circle(){
   	 radius = 1;
    }
    Circle(double newRadius){
   	 radius = newRadius;
    }
    double getArea() {
   	 return radius*radius*Math.PI;
    }
    double getPerimeter() {
   	return 2*radius*Math.PI; 
    }
    void setRadius(double newRadius) {
   	 radius = newRadius;
    }
}
	  
9.2：
package example;

public class java9_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle circle1 = new Circle();
		System.out.println("The area of the circle of radius"
				+circle1.radius+" is "+circle1.getArea());
		Circle circle2 = new Circle(25);
		System.out.println("The area of the circle of radius"
				+circle2.radius+" is "+circle2.getArea());
		Circle circle3 = new Circle(125);
		System.out.println("The area of the circle of radius"
				+circle3.radius+" is "+circle3.getArea());
		circle2.radius = 100;
		System.out.println("The area of the circle of radius"
				+ circle2.radius+" is "+circle2.getArea());
	}
}
 9.3：（TV.java）
package example;

public class TV {
	int channel = 1;
	int volumeLevel = 1;
	boolean on = false;
	
	public TV() {
		
	}
	public void turnOn() {
		on = true;
	}
	public void turnOff() {
		on = false;
	}
	public void setChannel(int newChannel) {
		if(on && newChannel >= 1 && newChannel <=120) {
			channel = newChannel;
		}
	}
	public void setVolume(int newVolumeLevel) {
		if(on && newVolumeLevel >= 1 && newVolumeLevel <= 7) {
			volumeLevel = newVolumeLevel;
		}
	}
	public void channelUp() {
		if(on && channel<120) {
			channel++;
		}
	}
	public void channelDown() {
		if(on && channel>1) {
			channel--;
		}
	}
	public void volumeUp() {
		if(on && volumeLevel<7) {
			 volumeLevel++;
		}
	}
	public void volumeDown() {
		if(on && volumeLevel>1) {
			volumeLevel--;
		}
	}
}
9.4:
package example;

public class TestTV {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		TV tv1 = new TV();
		tv1.turnOn();
		tv1.setChannel(30);
		tv1.setVolume(3);
		
		TV tv2 = new TV();
		tv2.turnOn();
		tv2.channelUp();
		tv2.channelUp();
		tv2.channelUp();
		tv2.volumeUp();
		System.out.println("tv1's channel is "+ tv1.channel
				+" and volume level is "+tv1.volumeLevel);
		System.out.println("tv2's channel is "+ tv2.channel
				+" and volume level is "+tv2.volumeLevel);
		
	}

}
9.5:
package example;

import java.util.Scanner;

public class java9_5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		System.out.println("Enter point1's x-,y-coordinates: ");
		double x1 = input.nextDouble();
		double y1 = input.nextDouble();
		System.out.println("Enter point2's x-,y-coordinates: ");
		double x2 = input.nextDouble();
		double y2 = input.nextDouble();
		
		Point2D p1 = new Point2D(x1,y1);
		Point2D p2 = new Point2D(x2,y2);
		System.out.println("p1 is "+ p1.toString());
		System.out.println("p2 is "+ p2.toString());
		System.out.println("The distance between p1 and p2 is "+p1.distance(p2));
		System.out.println("The midpoint between p1 and p2 is "+p1.midpoint(p2).toString());
		}

}
9.6:
package example;

public class Circle {
	double radius;
	static int numberOfObjects = 0;
	Circle(){
		radius = 1;
		numberOfObjects++;
	}
	Circle(double newRadius){
		radius = newRadius;
		numberOfObjects++;
	}	
	static int getNumberOfObjects() {
		return numberOfObjects;
	}
	double getArea() {
		return radius*radius*Math.PI;
	}
}
9.7：
package example;

public class TestCircleWithStaticMembers {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Before creating objects");
		System.out.println("The number of Circle objects is "+Circle.numberOfObjects);
		Circle c1 = new Circle();
		System.out.println("\nAfter creating c1");
		System.out.println("c1: radius ("+c1.radius+") and number of Circle object("+c1.numberOfObjects + ")");
        Circle	c2 = new Circle(5);
        c1.radius = 9;
        System.out.println("\nAfter creating c2 and moddifying c1");
        System.out.println("c1: radius ("+c1.radius+") and number of Circle object("+c1.numberOfObjects + ")");
        System.out.println("c2: radius ("+c2.radius+") and number of Circle object("+c2.numberOfObjects + ")");
	}

}
9.8：
public class Circle {
	private double radius = 1;
	private static int numberOfObjects = 0;
	public Circle() {
		numberOfObjects++;
	}
	
	public Circle(double newRadius) {
		radius = newRadius;
		numberOfObjects++;
	}
	 public double getRadius() {
		 return radius;
	 }
	 
	 public void setRadius(double newRadius) {
		 radius = (newRadius>=0) ? newRadius : 0;
	 }
	 
	 public static int getNumberOfObjects() {
		 return numberOfObjects;
	 }
	 
	 public double getArea() {
		 return radius*radius*Math.PI;
	 }
}
9.9：
public class TestCircleWithPrivateDataFileds {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle myCircle = new Circle(5.0);
		System.out.println("The area of the Circle of radius "+myCircle.getRadius() +" is "+myCircle.getArea());
		myCircle.setRadius(myCircle.getRadius()*1.1);
		System.out.println("The area of the Circle of radius "+myCircle.getRadius() +" is "+myCircle.getArea());
		System.out.println("The number of objects created is "+Circle.getNumberOfObjects());
	}

}
9.10：

public class TestPassObject {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle myCircle = new Circle(1);
		int n = 5;
		printAreas(myCircle,n);
		System.out.println("\n"+"Radius is "+myCircle.getRadius());
		System.out.println("n is "+n);

	}

	private static void printAreas(Circle c, int times) {
		// TODO Auto-generated method stub
		System.out.println("Radius \t\tArea");
		while(times>=1) {
			System.out.println(c.getRadius()+"\t\t"+c.getArea());
			c.setRadius(c.getRadius()+1);
			times--;
		}
		
	}

}
9.11：

public class TotalArea {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle[] circleArray;
		circleArray = createCircleArray();
		printCircleArray(circleArray);
	}

	private static void printCircleArray(Circle[] circleArray) {
		// TODO Auto-generated method stub
		System.out.printf("%-30s%-15s\n","Radius","Area");
		for(int i=0;i<circleArray.length;i++) {
			System.out.printf("%-30f%-15f\n",circleArray[i].getRadius(),circleArray[i].getArea());
		}
		System.out.println("------------------------------------------------------------");
		System.out.printf("%-30s%-15f\n","The total area of circle is",sum(circleArray));
	}

	private static double sum(Circle[] circleArray) {
		// TODO Auto-generated method stub
		double sum = 0 ;
		for(int i = 0;i<circleArray.length;i++) {
			sum+=circleArray[i].getArea();
		}
		return sum;
	}

	private static Circle[] createCircleArray() {
		// TODO Auto-generated method stub
		Circle[] circleArray = new Circle[5];
		for(int i=0;i<circleArray.length;i++) {
			circleArray[i] = new Circle(Math.random()*100);
		}
		return circleArray;
	}

}
第九章习题：
9.3:
import java.util.Date;
public class Test_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Date d1 = new Date(10000);
        System.out.println(d1.toString());

        Date d2 = new Date(100000);
        System.out.println(d2.toString());

        Date d3 = new Date(1000000);
        System.out.println(d3.toString());

        Date d4 = new Date(10000000);
        System.out.println(d4.toString());

        Date d5 = new Date(100000000);
        System.out.println(d5.toString());

        Date d6 = new Date(1000000000);
        System.out.println(d6.toString());

        Date d7 = new Date(10000000000L);
        System.out.println(d7.toString());

        Date d8 = new Date(100000000000L);
        System.out.println(d8.toString());

	}

}
9.4:
import java.util.Random;
public class java9_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Random ran = new Random(1000);
        for (int  i = 0 ; i < 50 ; i++){
            System.out.print(ran.nextInt(100) + " ");
        }
	}

}
9.5:
import java.util.GregorianCalendar;
public class java9_5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		GregorianCalendar gc = new GregorianCalendar();
        System.out.print(gc.get(GregorianCalendar.YEAR) + "年");
        System.out.print(gc.get(GregorianCalendar.MONTH) + "月");
        System.out.println(gc.get(GregorianCalendar.DAY_OF_MONTH) + "日");

        gc.setTimeInMillis(1234567898765L);
        System.out.print(gc.get(GregorianCalendar.YEAR) + "年");
        System.out.print(gc.get(GregorianCalendar.MONTH) + "月");
        System.out.print(gc.get(GregorianCalendar.DAY_OF_MONTH) + "日");
	}

}
9.6:
import java.util.Arrays;
import java.util.Random;
public class Test6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// new一个100 000个数字的数组
        int[] arr = new int[100000];
        Random rd = new Random();
        for (int i = 0 ; i < arr.length ; i++){
            arr[i] = rd.nextInt(100000);
        }
        // 计时
        Test6_StopWatch sw = new Test6_StopWatch();
        Arrays.sort(arr);
        sw.stop();
        // 输出结果
        System.out.println("执行了" + sw.getElaspsedTime() + "毫秒");
	}

}

public class Test6_StopWatch {
	private long startTime, endTime;

    public Test6_StopWatch(){
        startTime = System.currentTimeMillis();
    }

    public void stop(){
        this.endTime = System.currentTimeMillis();
    }

    public long getElaspsedTime(){
        return this.endTime - this.startTime;
    }
}
9.10:
import java.util.Scanner;
public class Test10 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 // 用户输入
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a, b, c: ");
        int a = input.nextInt(), b = input.nextInt(), c = input.nextInt();

        // 创建对象+调用构造方法
        Test10_QuadraticEquation qe = new Test10_QuadraticEquation(a, b, c);

        // 获取判别式结果
        double judge = qe.getDiscriminant();

        if (judge > 1){
            System.out.printf("%.3f %.3f\n", qe.getRoot1(), qe.getRoot2());
        } else if (judge < 0.0001 && judge > -0.0001){
            System.out.printf("%.3f\n", qe.getRoot1());
        } else {
            System.out.printf("The equation has no roots");
        }
	}
}
public class Test10_QuadraticEquation {
	private double a, b, c;
    // 构造方法
    public Test10_QuadraticEquation(int a, int b, int c){
        this.a = a;
        this.b = b;
        this.c = c;
    }
    // getter方法
    public double getA() {
        return a;
    }
    public double getB() {
        return b;
    }
    public double getC() {
        return c;
    }
    // getDiscriminant方法
    public double getDiscriminant(){
        return b * b - 4 * a * c;
    }
    // 获取两根
    public double getRoot1(){
        return (-b + Math.sqrt(getDiscriminant())) / (2 * a);
    }
    public double getRoot2(){
        return (-b - Math.sqrt(getDiscriminant())) / (2 * a);
    }
}

9.11:
import java.util.Scanner;
public class Test11 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		   // 获取用户输入
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a, b, c, d, e, f: ");
        double a = input.nextInt(), b = input.nextInt(), c = input.nextInt();
        double d = input.nextInt(), e = input.nextInt(), f = input.nextInt();

        // 传入构造方法
        Test11_LinearEquation le = new Test11_LinearEquation(a, b, c, d, e, f);

        // 判断是否有结果
        boolean bool = le.isSolvable();

        if (bool){
            System.out.println("x is " + le.getX() + " and y is " + le.getY());
        } else
            System.out.println("The equation has no solution");
	}

}

public class Test11_LinearEquation {
	private double a, b, c, d, e, f;
    // 构造方法
    public Test11_LinearEquation (double a, double b, double c, double d, double e, double f){
        this.a = a;
        this.b = b;
        this.c = c;
        this.d = d;
        this.e = e;
        this.f = f;
    }

    // getter
    public double getA() {
        return a;
    }
    public double getB() {
        return b;
    }
    public double getC() {
        return c;
    }
    public double getD() {
        return d;
    }
    public double getE() {
        return e;
    }
    public double getF() {
        return f;
    }

    // isSolvable方法
    public boolean isSolvable(){
        boolean bool = false;
        if (a * d - b * c != 0){
            bool = true;
        }
        return bool;
    }

    // getX和getY
    public double getX(){
        return (e * d - b * f) / (a * d - b * c);
    }
    public double getY(){
        return (a * f - e * c) / (a * d - b * c);
    }
}

第十一章例题：
11-1：
package java十一章;

public class GeometricObject{
	private String color = "white";
    private boolean filled;
    private java.util.Date dateCreated;
    
    public GeometricObject() {
    	dateCreated = new java.util.Date();
    }
    
    public GeometricObject(String color,boolean filled) {
    	dateCreated = new java.util.Date();
    	this.color = color;
    	this.filled = filled;
    }
    
    public String getColor() {
    	return color;
    }
    
    public void setColor(String color) {
    	this.color = color;
    }
    
    public void setFilled(boolean filled) {
    	this.filled = filled;
    }
    
    public java.util.Date getDateCreated(){
    	return dateCreated;
    }
    
    public String toString() {
    	return "created on "+dateCreated+"\ncolor: "+color +" and filled: "+filled;
    }

}
11-2：
package java十一章;

public class Circle extends GeometricObject {
	private double radius;
	
	public Circle() {
	}
	
	public Circle(double radius) {
		this.radius = radius;
	}
	
	public Circle(double radius,String color,boolean filled) {
		this.radius = radius;
		setColor(color);
		setFilled(filled);
	}
	
	public double getRadius() {
		return radius;
	}
	
	public void setRadius(double radius) {
		this.radius = radius;
	}
	
	public double getArea() {
		return radius*radius*Math.PI;
	}
	
	public double getDiameter() {
		return 2*radius;
	}
	
	public double getPerimeter() {
		return 2*radius *Math.PI;
	}
	
	public void printCircle() {
		System.out.println("The circle is created "+getDateCreated()+" and the radius is "+radius);
	}

}
11-3：
package java十一章;

public class Rectangle extends GeometricObject{
	private double width;
	private double height;
	
	public Rectangle() {
		
	}
	
	public Rectangle(double width,double height) {
		this.width = width;
		this.height = height;
	}
	
	public Rectangle(double width,double height,String color,boolean filled){
	this.width = width;
	this.height = height;
	setColor(color);
	setFilled(filled);
	}
	
	public double getWidth() {
		return width;
	}
	
	public void setWidth(double width) {
		this.width = width;
	}
	public double getHeight() {
		return height;
	}
	
	public void setHeight(double height) {
		this.height = height;
	}
	
	public double getArea() {
		return width*height;
	}
	
	public double getPerimeter() {
		return 2*(width+height);
	}

}
11-4：
package java十一章;

public class TestCircleRectangle {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle circle = new Circle(1);
		System.out.println("A circle "+circle.toString());
		System.out.println("The color is "+ circle.getColor());
		System.out.println("The radius is "+circle.getRadius());
		System.out.println("The area is "+circle.getArea());
		System.out.println("The diameter is "+circle.getDiameter());
		Rectangle rectangle = new Rectangle(2,4);
		System.out.println("\nA rectangle "+rectangle.toString());
		System.out.println("The area is "+rectangle.getArea());
		System.out.println("The perimeter is "+rectangle.getPerimeter());
	}

}

11-5:
package java十一章;

public class PolymorphismDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		displayObject(new Circle(1,"red",false));
		displayObject(new Rectangle(1,1,"black",true));
	}
	
	public static void displayObject(GeometricObject object) {
		System.out.println("Created on "+object.getDateCreated()+". Color is "+object.getColor());
	}

}
11-6:
package java十一章;

public class DynamicBindingDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		m(new GraduateStudent());
		m(new Student());
		m(new Person());
		m(new Object());
	}
	
	public static void m(Object x) {
		System.out.println(x.toString());
	}
}
class GraduateStudent extends Student{
}

class Student extends Person{
	@Override
	public String toString() {
		return "Student";
	}
}

class Person extends Object{
	@Override
	public String toString() {
		return "Person";
	}
}

11-7:
package java十一章;

public class CastingDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Object object1 = new Circle(1);
		Object object2 = new Rectangle(1,1);
		
		displayObject(object1);
		displayObject(object2);
	}
	
	public static void displayObject(Object object) {
		if(object instanceof Circle) {
			System.out.println("The circle area is "+((Circle)object).getArea());
			System.out.println("The circle diameter is "+((Circle)object).getDiameter());
		}
		else if(object instanceof Rectangle) {
			System.out.println("The rectangle area is "+((Rectangle)object).getArea());
		}
	}

}
11-8:
package java十一章;

import java.util.ArrayList;

public class TestArrayList {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<String> cityList = new ArrayList<>();
		
		cityList.add("London");
		cityList.add("Denver");
		cityList.add("Paris");
		cityList.add("Miami");
		cityList.add("Seoul");
		cityList.add("Tokyo");
		
		System.out.println("List size? "+cityList.size());
		System.out.println("Is Miami in the list? "+cityList.contains("Miami"));
		System.out.println("The location of Denver in the list? "+cityList.indexOf("Denver"));
		System.out.println("Is the list empty? "+cityList.isEmpty());
		
		cityList.add(2,"Xian");
		cityList.remove("MIami");
		cityList.remove(1);
		System.out.println(cityList.toString());
		
		for (int i = cityList.size() -1;i>=0; i--) {
			System.out.println(cityList.get(i)+" ");
		}
		System.out.println();
		
		ArrayList<Circle> list = new ArrayList<>();
		
		list.add(new Circle(2));
		list.add(new Circle(3));
		
		System.out.println("The area of the circl? "+list.get(0).getArea());

	}

}
11-9:
package java十一章;
import java.util.Scanner;
import java.util.ArrayList;
public class DistinctNumbers {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<Integer> list = new ArrayList<>();
		
		Scanner input = new Scanner(System.in);
		System.out.println("Enter integers (input ends with 0): ");
		int value;
		
		do {
			value = input.nextInt();
			if(!list.contains(value)&& value!=0)
				list.add(value);
		}while(value!=0);
		
		for (int i=0 ;i<list.size();i++) {
			System.out.println(list.get(i)+" ");
		}
		

	}

}
11-10
package java十一章;

import java.util.ArrayList;

public class MyStack {
	private ArrayList<Object> list = new ArrayList<>();
	
	public boolean isEmpty() {
		return list.isEmpty();
	}
	public int getSize() {
		return list.size();
	}
	public Object peek() {
		return list.get(getSize()-1);
	}
	
	public Object pop(){
		Object o= list.get(getSize()-1);
		list.remove(getSize()-1);
		return o;
	}
	public void push(Object o) {
		list.add(o);
	}
	@Override
	public String toString() {
		return "stack: "+list.toString();
	}
	

}

Java第十一章习题：
11-8：
package java十一章习题;

public class Account {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Account1.setAnnualInterestRate(5.5); 
		Account1 account=new Account1("George",1122,1000); 
		account.deposit(30); 
		account.deposit(50); 
		account.deposit(50); 
		account.deposit(5); 
		account.deposit(4); 
		account.deposit(2); 
		System.out.println("账户姓名："+account.getName()); 
		System.out.println("年利率："+Account1.getAnnualInterestRate()); 
		System.out.println("余额："+account.getBalance()); 
		java.util.ArrayList<Transaction> list=account.getTransactions(); 
		System.out.printf("%-30s%-14s%-14s%-15s\n","交易时间", "交易类型", 
			"交易金额", "账户余额"); 
		for(int i=0;i<list.size();i++) { 
		Transaction transaction = (Transaction) (list.get(i)); 
		System.out.printf("%-35s%-14s%-16s%-15s\n",transaction.getDate(),transaction.getType(), 
				transaction.getAmount(), transaction.getBalance()); 
		} 
	}

}
package java十一章习题;

public class Account1 {
	private int id; 
	private String name; 
	private double balance; 
	private static double annualInterestRate; 
	private java.util.Date dateCreated; 
	private java.util.ArrayList<Transaction> transactions = new 
	java.util.ArrayList<>(); 
	public Account1() { 
	dateCreated = new java.util.Date(); 
	}
	public Account1(String name, int id, double balance) { 
	this.id=id; 
	this.name=name; 
	this.balance=balance; 
	dateCreated=new java.util.Date(); 
	}
	public int getId() { 
	return this.id; 
	}
	public double getBalance() { 
	return balance; 
	}
	public java.util.ArrayList<Transaction> getTransactions(){ 
	return transactions; 
	}
	public String getName() { 
	return name; 
	}
	public static double getAnnualInterestRate() { 
	return annualInterestRate; 
	}
	public void setId(int id) { 
	this.id=id; 
	}
	public void setBalance(double balance) { 
	this.balance=balance; 
	}
	public static void setAnnualInterestRate(double annualInterestRate) { 
	Account1.annualInterestRate=annualInterestRate; 
	}
	public double getMonthlyInterest() { 
	return balance*(annualInterestRate/1200); 
	}
	public java.util.Date getDateCreated(){ 
	return dateCreated; 
	}
	public void withdraw(double amount) { 
	balance-=amount; 
	transactions.add(new Transaction("取款",amount,balance,"")); 
	}
	public void deposit(double amount) { 
	balance+=amount; 
	transactions.add(new Transaction("存款",amount,balance,"")); 
	}

}
package java十一章习题;

public class Transaction {
	private java.util.Date date; 
	private String type; 
	private double amount; 
	private double balance; 
	private String description; 
	public Transaction(String type, double amount, double balance, String 
	description) { 
	date=new java.util.Date(); 
	this.type=type;this.amount=amount; 
	this.balance=balance; 
	this.description=description; 
	}
	public java.util.Date getDate(){ 
	return date; 
	}
	public String getType() { 
	return type; 
	}
	public double getAmount() { 
	return amount; 
	}
	public double getBalance() { 
	return balance; 
	}
	public String getDescription() { 
	return description; 
	} 
}
11-16：
package java十一章习题;
import java.util.ArrayList;
import java.util.Scanner;
public class Test11_16 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int number1 = (int) (Math.random() * 10); 
		int number2 = (int) (Math.random() * 10); 
		Scanner input = new Scanner(System.in); 
		ArrayList<Integer> list = new ArrayList<>(); 
		System.out.print("What is " + number1 + " + " + number2 + "? "); 
		int answer = input.nextInt(); 
		list.add(answer); 
		while (number1 + number2 != answer) { 
		System.out.print("Wrong answer. Try again. What is " + number1 + " + " + number2 + "? "); 
		answer = input.nextInt(); 
		while (list.contains(answer)) { 
		System.out.println("You already entered " + answer); 
		System.out.print("Wrong answer. Try again. What is " + number1 + 
		" + " + number2 + "? "); 
		answer = input.nextInt(); 
		}
		list.add(answer); 
		}
		System.out.println("You got it!"); 
	}

}
11-17：
package java十一章习题;

import java.util.ArrayList;
import java.util.Scanner;

public class Test11_17 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in); 
		ArrayList<Integer> list = new ArrayList<>(); 
		System.out.print("Enter a integer m: "); 
		int m = input.nextInt(); 
		int yz = 2; 
		int temp = m; 
		while (temp != 1) { 
		if (temp % yz == 0) { 
		list.add(yz); 
		temp /= yz; 
		} else { 
		yz++; 
		} 
		}
		int ans = 1; 
		int i = 0; 
		yz = 2; 
		while (i < list.size()) { 
		if (list.contains(yz)) { 
		int num = list.lastIndexOf(yz) - i + 1; 
		i = list.lastIndexOf(yz) + 1; 
		if (num % 2 == 1) { 
		ans *= yz; 
		} 
		}
		yz++; 
		}
		System.out.println("The smallest number n for m * n to be a perfect square is " + Math.sqrt(m * ans)); 
		System.out.println("m * n is " + ans * m); 
	}

}
11-19:
package java十一章习题;

import java.util.Scanner;

public class Test11_19 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] w = new int[1010]; 
		int[] vis = new int[1010]; 
		Scanner input = new Scanner(System.in); 
		System.out.print("Enter the number of objects: "); 
		int n = input.nextInt(); 
		System.out.print("Enter the weoghts of objects: "); 
		for (int i = 1; i <= n; i++) { 
		w[i] = input.nextInt();
		}
		int tot = 0; 
		int pos = 1; 
		while (tot < n) { 
		int last = 0; 
		System.out.print("Container " + pos + " contains objects with weight"); 
		for (int i = 1; i <= n; i++) { 
		if (last + w[i] <= 10 && vis[i] == 0) { 
		System.out.print(" " + w[i]); 
		vis[i] = 1; 
		last += w[i]; 
		tot++; 
		} 
		}
		System.out.println(); 
		pos++; 
		} 
	}

}

第十三次作业：（两道练习题）

一
package java十一章习题;
import java.io.File; 
import java.io.FileNotFoundException; 
import java.io.FileOutputStream; 
import java.io.IOException; 
import java.io.OutputStreamWriter; 
import java.util.HashSet; 
import java.util.Iterator; 
import java.util.Set; 
import java.util.Scanner;
public class HashSetDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in); 
		Set<Student> students = new HashSet<Student>(); 
		String name, id; 
		int age; 
		while (true) { 
		name = input.next(); 
		if (name.equalsIgnoreCase("exit")) { 
		break; 
		}
		id = input.next(); 
		age = input.nextInt(); 
		students.add(new Student(name, id, age)); 
		}
		File file = new File("Student.txt"); 
		try {
			OutputStreamWriter output = new OutputStreamWriter(new FileOutputStream(file), "utf-8"); 
		Iterator<Student> it = students.iterator(); 
		while (it.hasNext()) { 
		Student temp = (Student) it.next(); 
		output.append(temp.getId() + " " + temp.getName() + " " + 
		temp.getAge() + "\n"); 
		}
		output.flush(); 
		// op.close(); 
		} catch (FileNotFoundException e) { 
		System.out.println("文件不存在"); 
		} catch (IOException e) { 
		System.out.println("读取过程存在异常"); 
		} 
	}

}
 package java十一章习题;
public class Student {
	private String id; 
	private String name; 
	private int age; 
	public Student() { 
	}
	public Student(String id, String name, int age) { 
	this.id = id; 
	this.name = name; 
	this.age = age; 
	}
	public void setId(String id) { 
	this.id = id; 
	}
	public String getId() { 
	return this.id; 
	}
	public void setName(String name) { 
	this.name = name; 
	}
	public String getName() { 
	return this.name; 
	}
	public void setAge(int age) { 
	this.age = age; 
	}
	public int getAge() { 
	return this.age;
	}
	public int compareTo(Object o) { 
	if (!(o instanceof Student)) 
	throw new RuntimeException("不是Book对象"); 
	Student p = (Student) o; 
	if (this.age < p.age) { 
	return 1; 
	} else if (this.age == p.age) { 
	return 0; 
	} else { 
	return -1;
	}
	}
}

二
package java十一章习题;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
public class HashMapDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Map<String, Book> books = new HashMap<String, Book>(); 
		books.put("1", new Book("1", "老人与海", 36, "人民出版社")); 
		books.put("2", new Book("2", "活着", 45, "人民出版社")); 
		books.put("4", new Book("4", "海底两万里", 30, "人民出版社")); 
		books.put("3", new Book("3", "红楼梦", 89, "人民出版社")); 
		Iterator iter = books.entrySet().iterator(); 
		while (iter.hasNext()) { 
		Map.Entry entry = (Map.Entry) iter.next(); 
		System.out.println(((Book) entry.getValue()).toString()); 
		} 
	}

}
package java十一章习题;

public class Book implements Comparable{
	private String id; 
	private String name; 
	private int prince; 
	private String publisher; 
	public Book() { 
	}
	public Book(String id, String name, int prince, String publisher) { 
	this.id = id; 
	this.name = name; 
	this.prince = prince; 
	this.publisher = publisher; 
	}
	public String getId() { 
	return this.id; 
	}
	public void setId(String id) { 
	this.id = id; 
	}
	public String getName() { 
	return this.name; 
	}
	public void setName(String name) { 
	this.name = name; 
	}
	public int getPrince() { 
	return this.prince; 
	}
	public void setPrince(int prince) { 
		this.prince = prince; 
		}
		public String getPublisher() { 
		return this.publisher; 
		}
		public void setPublisher(String publisher) { 
		this.publisher = publisher; 
		}
		public String toString() { 
		return this.id + " " + this.name + " " + this.prince + " " + 
		this.publisher; 
		}
		public int compareTo(Object o) { 
		if (!(o instanceof Book)) 
		throw new RuntimeException("不是Book对象"); 
		Book p = (Book) o; 
		return this.id.compareToIgnoreCase(p.getId()); 
		} 
}








