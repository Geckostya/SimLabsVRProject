package comPackage;

public class TestJNI {
	
	int testValue = 255;
	
	public int testJNI() {
		return new Hello().hello();
	}

	public static void main(String[] args) {
		System.out.println(new TestJNI().testJNI());
	}
}
