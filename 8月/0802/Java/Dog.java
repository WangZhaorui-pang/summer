package Animal;

public class Dog extends Animal implements See {

	@Override
	public void kanjia() {
		// TODO Auto-generated method stub
		System.out.println("����");
	}	
	@Override
	public void eat() {
		// TODO Auto-generated method stub
		System.out.println("�Թ���");
	}
	
	@Override
	public void rr() {
		// TODO Auto-generated method stub
		System.out.println("����");
	}
public static void main(String[] args) {
	Dog dog = new Dog();
	dog.kanjia();
	
}

}
   
