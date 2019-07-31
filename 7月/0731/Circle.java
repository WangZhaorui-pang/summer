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
	System.out.println("圆的半径为："+r+"圆的面积为："+area+"圆的周长为："+perimeter);
}

}
