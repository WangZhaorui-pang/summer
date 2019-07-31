package javalianxi31;

public class Cylinder extends Circle {
private double hight;

public Cylinder(float r,double hight) {
	super(r);
	this.hight = hight;
}



public  double getVolume() {
	return getArea()*hight;
	
}

public void showVolume() {
	double volume=getVolume();
	System.out.println("圆柱体的体积："+volume);

}
}
