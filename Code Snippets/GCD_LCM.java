public class Main
{
    private static int gcd(int a, int b) {
        if(a == 0) return b;
        else if(b == 0) return a;
        return gcd(b, a%b);
    }
    
	public static void main(String[] args) {
		System.out.println(gcd(250,30));
    //lcm = (a*b)/gcd(a,b);
	}
}
