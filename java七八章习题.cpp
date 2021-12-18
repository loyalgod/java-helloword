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

