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
	System.out.println("圆的半径为："+r+"圆的面积为："+area+"圆的周长为："+perimeter);
}

public static void main (String[] args ) {
	/*Circle circle=new Circle (2.4f);
	circle.show();*/
	
	Scanner sc = new Scanner(System.in);
	System.out.println("请输入你的半径：");
	float r = sc.nextFloat();
	/*float s=2.4f;
	 * double e=2.6;*/
	
	Circle circle=new Circle (r);
	circle.show();
	
}
}



