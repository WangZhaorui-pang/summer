package javalianxi31;

import java.util.Scanner;

public class client {
@SuppressWarnings("resource")
public static void main (String[] args) {
/*	Scanner sc = new Scanner(System.in);
	System.out.println("������Բ�İ뾶��");
	float r=sc.nextFloat();
	System.out.println("������Բ����ĸߣ�");
	double hight = sc.nextDouble();*/
	Cylinder cylinder  = new Cylinder(2.4f,5.6d);
	System.out.println("��������");
	cylinder.show();
	System.out.println();
	cylinder.showVolume();
	

}
}
