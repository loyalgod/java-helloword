������

7.3��
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


7.5��
package computer;
import java.util.Scanner;
public class java7_5 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 // 1. ����ѧ������length���������鳤��Ϊlength
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of students: ");
        int length = input.nextInt();

        // 2. ����n�����ݣ���forѭ�����룩
        double[] lst = new double[length];
        System.out.print("Enter " + length + " scores: ");
        for (int n = 0; n < length;n++){
            lst[n] = input.nextDouble();
        }

        // 3. ��n�����ݽ��бȽϣ���ȡ���ֵ����ֵ��best
        double best = choiceBiggestNumber(lst, length);

        // 4. �ٶ���һ���Ƚ�best�������ÿ��Ԫ�صķ��������صȼ�
        for (int i = 0;i < length;i++){
            System.out.println("Student " + i + " score is " + lst[i] + " and grade is " + grade(lst[i], best));
        }
    }
    // ����list��list��С�ҳ�list���ֵ
    public static double choiceBiggestNumber(double[] lst, int length){
        double temp = lst[0];
        for (int i = 0;i < length-1;i++){
            temp = max(temp, lst[i+1]);
        }
        return temp;
    }
    // �Ա����������õ����ֵ
    public static double max(double a, double b){
        if (a > b){return a;}
        else {return b;}
    }
    // ����ȼ�
    public static String grade(double num, double max){
        if (num >= max - 10){return "A";}
        else if (num >= max - 20){return "B";}
        else if (num >= max - 30){return "C";}
        else if (num >= max - 40){return "D";}
        else
            return "F";
    }
}


7.17��
package computer;
import java.util.Arrays;
import java.util.Scanner;
public class java7_17 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 //1. ����������ȡѧ����������Ϊ�����ͳɼ���������ĳ���
        Scanner input = new Scanner(System.in);
        System.out.print("����ѧ��������");
        int length = input.nextInt();

        //1+. ������������
        String[] names = new String[length];
        int[] scores = new int[length];

        //2. ��������ʹ��forѭ����ȡѧ�������ͳɼ���ѧ��������ɼ������ȡ������ֵ����������Ķ�Ӧλ��
        System.out.print("���������ɼ���");
        for (int i = 0 ; i < length ; i++){
            names[i] = input.next();
            scores[i] = input.nextInt();
        }

        //3. �������������Զ��巽��sort()�������������鲢�������򣬷���ֵ�������ɼ���Ӧ����������
        String[] names_feedback = new String[length];
        names_feedback = sort(names, scores);

        //5. ��������������ص�����
        System.out.print(Arrays.toString(names_feedback));
    }
    //4. sort�������ڶԳɼ�����������򣨽���λ�ã���ͬʱ��������Ҳ��ͬ������λ�õĲ���
    public static String[] sort(String[] names, int[] scores){
        //1. ����һ��String���飨names_feedback�����ڷ�������
        String[] names_feedback = new String[names.length];
        //2. ʹ��forѭ�����Ʊ���
        int index = -1;     // �������ֵ�±�
        for (int i = 0 ; i < names.length ; i++) {
            //�����Զ��巽��list_max()������scores���鲢���ճ����������ֵ���±�
            index = list_max(scores);
            //������յ������ֵ�±�index����ʱforѭ��Ϊ��i+1��
            //names_feedback[i]=names[index]; ͬʱ��scores[index]=-1
            names_feedback[i]=names[index];
            scores[index]=-1;
        }
        //3. ����names_feedback����
        return names_feedback;
    }
    //4+ �Զ��巽��list_max()������scores���鲢���ճ����������ֵ���±�
    public static int list_max(int[] scores){
        // �������ֵ�ı���temp_max�����ֵ���±�temp_index
        int temp_max = 0, temp_index = -1;
        // ��ȡscores����Ϊlength
        int length = scores.length;
        // ʹ��forѭ����ȡ���ֵ���������ƣ�
        for (int i = 0 ; i < length ; i++){
            if (temp_max < scores[i] && scores[i] >= 0){
                temp_max = scores[i];
                temp_index = i;
            }
        }
        // ���ر�������ֵ�±�temp_index
        return temp_index;
	}

}

�ڰ��£�
8.4:
package computer;

import java.util.Arrays;

public class java8_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 //1. �½�һ��8*7�Ķ�ά���飬��ֵ
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
        //2. ���½�һ������Ϊ8��һά���飬�洢ÿλԱ������Сʱ��
        int[] emplayee_workhours_sum = new int[raw];
        //3. ����һ��int�Ͷ���洢����Сʱ���Ӻͣ�����ʼֵΪ0
        int sum = 0;
        //4. ˫��ѭ����������ά���飬���±��0��ʼ7���� ���±��0��ʼ6����
        for (int a = 0 ; a < raw ; a++){
            //5. ѭ�����ڣ���һ���ڣ����������������Ĵ洢�ӺͶ���ֵΪ0
            sum = 0;
            for (int b = 0 ; b < col ; b++){
                //6. ѭ�����ڣ��ڶ����ڣ�����ÿ��Ԫ�ؽ��мӺ�
                sum += emplayees_workhours[a][b];
            }
            //7. ѭ�����ڣ���һ���ڣ������Ӻ͸�ֵ��һά����
            emplayee_workhours_sum[a] = sum;
        }
        //8. �½���һ��һά���飬���ȵ��ڵڶ���������һά����
        int[] copy = new int[raw];
        //9. ԭһά���鸴�Ƹ��´�����һά����
        System.arraycopy(emplayee_workhours_sum, 0 , copy, 0, raw);
        //10. ����һά�����������
        Arrays.sort(copy);
        //11. ������һά����Ԫ�أ�ƥ�䵽�������Ա��ţ�ԭ�����±꣩��Ԫ��ֵ���������Ԫ��ֵ��0
        for (int a = copy.length - 1 ; a >= 0 ; a--){
            //��ԭ��һά�������ƥ��
            for (int b = 0 ; b < emplayee_workhours_sum.length ; b++){
                if (copy[a] == emplayee_workhours_sum[b]){
                    System.out.println("Employee " + b + " һ�ܹ���" + copy[a] + "Сʱ");
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
		//1. ���������½���������a��b��c�����Ⱦ�Ϊ3*3
        double[][] a = new double[3][3];
        double[][] b = new double[3][3];
        double[][] c = new double[3][3];
        //2. ���������ӿ���̨��ȡ�û����룬ʹ��ѭ����������a��Ԫ��
        Scanner input = new Scanner(System.in);
        System.out.print("Enter matrix1: ");
        for (int i = 0; i < 3 ; i++){
            for (int j = 0 ; j < 3; j++){
                a[i][j] = input.nextDouble();
            }
        }
        //3. ���������ӿ���̨��ȡ�û����룬ʹ��ѭ����������b��Ԫ��
        System.out.print("Enter matrix2: ");
        for (int i = 0; i < 3 ; i++){
            for (int j = 0 ; j < 3; j++){
                b[i][j] = input.nextDouble();
            }
        }
        //4. �����������÷���multiplyMatrix��ʹ��c������շ���ֵ
        c = multiplyMatrix(a, b);
        //5. �����������The multipication������
        System.out.println("The multipication of the matrices is");
        //6. �������������Զ�����������������a��b��c��������
        output(a, b ,c);
    }
    public static double[][] multiplyMatrix(double[][] a, double[][] b){
        //7. multiplyMatrix����������һ������c������Ϊ3*3
        double[][] c = new double[3][3];
        //8. multiplyMatrix������ʹ��Ƕ��ѭ������a*b����c���գ�a������Ϊn
        // c[i][j] = a[i][1] * b[1][j] + a[i][2] * b[2][j]+����+a[i][n]*b[n][j]
        for (int i = 0 ; i < 3 ; i++){
            for (int j = 0 ; j < 3 ; j++){
                for (int n = 0; n < 3 ; n++){
                    c[i][j] += a[i][n] * b[n][j];
                }
            }
        }
        //9. multiplyMatrix��������������c
        return c;
    }
    public static void output(double[][] a, double[][] b, double[][] c){
        //����ѭ����������еڶ�����ͬ���ѭ��
        for (int i = 0 ; i < 3; i++){
            //����a
            for (int j = 0 ; j < 3 ; j++){
                System.out.print(a[i][j] + " ");
            }
            //����a������b֮��Ŀո��*
            if ( i == 1 ){
                System.out.print("\t*\t");
            }
            else{
                System.out.print("\t\t");
            }
            //����b
            for (int j = 0 ; j < 3 ; j++){
                System.out.print(b[i][j] + " ");
            }
            //����b������c
            if ( i == 1 ){
                System.out.print(" =\t");
            }
            else{
                System.out.print("\t");
            }
            //����c
            for (int j = 0 ; j < 3 ; j++){
                System.out.printf("%.1f ", c[i][j]);
            }
            System.out.println();
        }
	}

}

