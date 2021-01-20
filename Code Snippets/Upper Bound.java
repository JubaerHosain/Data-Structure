public class Main {
	public static void main(String[] args) {
		int[] arr = new int[]{1,2,3,5,6,7,8,10,11,13,15,17,19,29,40,57,60};
		int i = upperBound(arr, 20); 
		System.out.println("val:"+arr[i]+" index:"+ i);
	}
	
	//Upper bound greater or equal
	private static int upperBound(int[] arr, int target) {
	    int low = 0, high = arr.length-1;
	    while(low < high) {
	        int mid = low+(high-low)/2;
	        if(arr[mid] == target) {
	            return mid;
	        } else if(arr[mid] > target) {
	            high = mid;
	        } else {
	            low = mid+1;
	        }
	    }
	    return high;
	}
}
