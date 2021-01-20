public class Main {
	public static void main(String[] args) {
		int[] arr = new int[]{1,3,5,6,7,8,10,11,13,15,17,19,29,40,57,60};
		int i = lowerBound(arr, 14); 
		System.out.println("val:"+arr[i]+" index:"+ i);
	}
	
	//Upper bound less than or equal
	private static int lowerBound(int[] arr, int target) {
	    int low = 0, high = arr.length;    //high = N, not N-1
	    while(low < high) {
	        int mid = low+(high-low)/2;
	        if(arr[mid] == target) {
	            return mid;
	        } else if(arr[mid] < target) {
	            low = mid+1;
	        } else {
	            high = mid;
	        }
	    }
	    return low-1;
	}
}
