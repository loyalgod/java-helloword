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

