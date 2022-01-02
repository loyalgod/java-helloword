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


