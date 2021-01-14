class NumArray {
    private int[] tree;
    private int length;
    
    public NumArray(int[] nums) {
        length = nums.length;
        if(length > 0) {
            tree = new int[4*nums.length];
            buildSegmentTree(nums, tree, 0, nums.length-1, 0);
        }
    }
    
    public int sumRange(int i, int j) {
        return getSum(0, 0, length-1, i, j);
    }
    
    private void buildSegmentTree(int[] nums, int[] tree, int low, int high, int index) {
        if(low == high) {
            tree[index] = nums[low];
            return;
        }
        
        int mid = low+(high-low)/2;
        buildSegmentTree(nums, tree, low, mid, 2*index+1);
        buildSegmentTree(nums, tree, mid+1, high, 2*index+2);
        tree[index] = tree[2*index+1]+tree[2*index+2];
    }
    
    private int getSum(int curr, int low, int high, int i, int j) {
        if(low >= i && high <= j) { //Total overlap
            return tree[curr];
        } else if(high < i || j < low) { //No ovrlap;
            return 0;
        }
        
        int mid = low+(high-low)/2;
        return getSum(2*curr+1, low, mid, i, j) + getSum(2*curr+2, mid+1, high, i, j);
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
