class Solution {
    public int numTimesAllBlue(int[] light) {
        int rightMost = 0;
        int count = 0;
        
        for(int i = 0; i < light.length; i++) {
            rightMost = Math.max(rightMost, light[i]);
            if(rightMost == i+1) {
                count++;
            }
        }
        
        return count;
    }
}
