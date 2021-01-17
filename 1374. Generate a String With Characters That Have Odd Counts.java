class Solution {
    public String generateTheString(int n) {
        if(n == 1) {
            return "a";
        } else if(n == 2) {
            return "ab";
        }
        
        
        if(n%2 == 0) {
            return even(n);
        } else {
            return "c" + even(n);
        }
    }
    
    private String even(int n) {
        StringBuilder sb = new StringBuilder();
        int half = n/2;
        if(half%2 != 0) {
                for(int i = 0; i < half; i++) {
                    sb.append("ab");
                } 
        } else {
                for(int i = 0; i <= half; i++) {
                    sb.append("a");
                } 
                for(int i = 0; i < half-1; i++) {
                    sb.append("b");
                } 
        }
        
        return sb.toString();
    }
}
