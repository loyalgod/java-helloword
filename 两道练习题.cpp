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
