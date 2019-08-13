class Solution {
    public int reverse(int x) {
        int flag = 0;
        if(x < 0){
            flag = 1;
            x = -x;
        }
        long sum = 0;
        while(x > 0){
            long m = x % 10;
            sum = sum * 10 + m;
            x /= 10;
        }
        if(sum > Math.pow(2,31) - 1){
            return 0;
        }
        if(flag == 1){
            sum = -sum;
        }
        return (int)sum;
    }
}