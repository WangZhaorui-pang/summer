package java1;

import java.util.Scanner;

public class Circle {
private float r;

public Circle(float r) {
	super();
	this.r = r;
}


public Circle () {
	}

public double getArea() {
	return Math.PI*r*r;
}

public double getPerimeter() {
	return 2*Math.PI*r;
}

public void show() {
	double  area= getArea();
	double perimeter = getPerimeter();
	System.out.println("Բ�İ뾶Ϊ��"+r+"Բ�����Ϊ��"+area+"Բ���ܳ�Ϊ��"+perimeter);
}

public static void main (String[] args ) {
	/*Circle circle=new Circle (2.4f);
	circle.show();*/
	
	Scanner sc = new Scanner(System.in);
	System.out.println("��������İ뾶��");
	float r = sc.nextFloat();
	/*float s=2.4f;
	 * double e=2.6;*/
	
	Circle circle=new Circle (r);
	circle.show();
	
}
}



