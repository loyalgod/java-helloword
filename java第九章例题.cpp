Java µÚ¾ÅÕÂÏ°Ìâ
9.1£º
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
	  
9.2£º
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
 9.3£º£¨TV.java£©
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
9.7£º
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
9.8£º
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
9.9£º
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
9.10£º

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
9.11£º

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








