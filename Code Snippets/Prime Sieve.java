public class Main {
  private static int MAX = 100000000;
	public static void main(String[] args) {
    	boolean[] prime = new boolean[MAX+1];
    	primeSieve(prime);
    	
    	int count = 0;
    	for(int i = 0; i <= 10000000; i++) {
    	    if(prime[i]) {
    	        System.out.println(i);
    	        count++;
    	    }
    	}
    	
    	System.out.println(count);
	}
	
	private static void primeSieve(boolean[] prime) {
	    prime[2] = true;                    //2 is a prime number
	                                        
	    for(int i = 3; i <= MAX; i+=2) {    //Mark all odd number as true(because prime numbers are also odd number)
	        prime[i] = true;
	    }
	    
	    for(long i = 3; i <= MAX;  i+=2) {
	        if(prime[(int)i]) {                  //If current number is prime
	            for(long j = i*i; j <= MAX; j += i) {        //Mark all the multiples of i is not prime
	                prime[(int)j] = false;
	            }
	        }
	    }
	}
}
