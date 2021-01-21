/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

public class Main
{
	public static void main(String[] args) {
		int[] arr = {12, 88, 4, -110, 2, 100, 5, -3};
		kadensAlgo(arr);
	}
	
	private static void kadensAlgo(int[] arr) {
	    int max = 0, curr = 0;
	    int start = 0, end = 0;
	    
	    int currStart = 0;
	    for(int i = 0; i < arr.length; i++) {
	        if(curr+arr[i] > arr[i]) {
	            curr = curr+arr[i];
	        } else {
	            curr = arr[i];
	            currStart = i;
	        }
	        
	        if(curr > max) {
	            max = curr;
	            start = currStart;
	            end = i;
	        }
	    }
	    
	    System.out.println(max);
	    System.out.println(start + " " + end);
	}
}
