class Solution {
    public boolean isPalindrome(int x) {
        int[] num = new int[100];
        int m = x;
        int i;
        for(i = 0; m > 0; i++){
            num[i] = m % 10;
            m /= 10;
        }
        int sum = 0;
        for(int j = 0;j < i; j++){
            sum = sum * 10 + num[j];
        }
        if(sum == x){
            return true;
        }
        return false;
    }
}