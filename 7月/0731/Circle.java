package javalianxi31;


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

}
