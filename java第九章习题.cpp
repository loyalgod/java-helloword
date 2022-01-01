�ھ���ϰ�⣺
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
        System.out.print(gc.get(GregorianCalendar.YEAR) + "��");
        System.out.print(gc.get(GregorianCalendar.MONTH) + "��");
        System.out.println(gc.get(GregorianCalendar.DAY_OF_MONTH) + "��");

        gc.setTimeInMillis(1234567898765L);
        System.out.print(gc.get(GregorianCalendar.YEAR) + "��");
        System.out.print(gc.get(GregorianCalendar.MONTH) + "��");
        System.out.print(gc.get(GregorianCalendar.DAY_OF_MONTH) + "��");
	}

}
9.6:
import java.util.Arrays;
import java.util.Random;
public class Test6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// newһ��100 000�����ֵ�����
        int[] arr = new int[100000];
        Random rd = new Random();
        for (int i = 0 ; i < arr.length ; i++){
            arr[i] = rd.nextInt(100000);
        }
        // ��ʱ
        Test6_StopWatch sw = new Test6_StopWatch();
        Arrays.sort(arr);
        sw.stop();
        // ������
        System.out.println("ִ����" + sw.getElaspsedTime() + "����");
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
		 // �û�����
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a, b, c: ");
        int a = input.nextInt(), b = input.nextInt(), c = input.nextInt();

        // ��������+���ù��췽��
        Test10_QuadraticEquation qe = new Test10_QuadraticEquation(a, b, c);

        // ��ȡ�б�ʽ���
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
    // ���췽��
    public Test10_QuadraticEquation(int a, int b, int c){
        this.a = a;
        this.b = b;
        this.c = c;
    }
    // getter����
    public double getA() {
        return a;
    }
    public double getB() {
        return b;
    }
    public double getC() {
        return c;
    }
    // getDiscriminant����
    public double getDiscriminant(){
        return b * b - 4 * a * c;
    }
    // ��ȡ����
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
		   // ��ȡ�û�����
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a, b, c, d, e, f: ");
        double a = input.nextInt(), b = input.nextInt(), c = input.nextInt();
        double d = input.nextInt(), e = input.nextInt(), f = input.nextInt();

        // ���빹�췽��
        Test11_LinearEquation le = new Test11_LinearEquation(a, b, c, d, e, f);

        // �ж��Ƿ��н��
        boolean bool = le.isSolvable();

        if (bool){
            System.out.println("x is " + le.getX() + " and y is " + le.getY());
        } else
            System.out.println("The equation has no solution");
	}

}

public class Test11_LinearEquation {
	private double a, b, c, d, e, f;
    // ���췽��
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

    // isSolvable����
    public boolean isSolvable(){
        boolean bool = false;
        if (a * d - b * c != 0){
            bool = true;
        }
        return bool;
    }

    // getX��getY
    public double getX(){
        return (e * d - b * f) / (a * d - b * c);
    }
    public double getY(){
        return (a * f - e * c) / (a * d - b * c);
    }
}

