package javalianxi31;

import java.util.Scanner;

public class client {
@SuppressWarnings("resource")
public static void main (String[] args) {
/*	Scanner sc = new Scanner(System.in);
	System.out.println("请输入圆的半径：");
	float r=sc.nextFloat();
	System.out.println("请输入圆柱体的高：");
	double hight = sc.nextDouble();*/
	Cylinder cylinder  = new Cylinder(2.4f,5.6d);
	System.out.println("输出结果：");
	cylinder.show();
	System.out.println();
	cylinder.showVolume();
	

}
}
