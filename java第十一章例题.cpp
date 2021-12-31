十一章

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

