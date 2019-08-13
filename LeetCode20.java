class Solution {
    public boolean isValid(String s) {
        int len = s.length();
        int[] num = new int[len];
        int k = 0;
        for(int i = 0; i < len; i++){
            if(s.toCharArray()[i] == '('){
                num[k++] = 0;
            }else if(s.toCharArray()[i] == ')'){
                if(k == 0){
                    return false;
                }else if(num[k - 1] != 0){
                    return false;
                }
                k--;
            }else if(s.toCharArray()[i] == '['){
                num[k++] = 1;
            }else if(s.toCharArray()[i] == ']'){
                if(k == 0){
                    return false;
                }else if(num[k - 1] != 1){
                    return false;
                }
                k--;
            }else if(s.toCharArray()[i] == '{'){
                num[k++] = 2;
            }else{
                if(k == 0){
                    return false;
                }else if(num[k - 1] != 2){
                    return false;
                }
                k--;
            }
        }if(k == 0){
            return true;
        }else{
            return false;
        }
    }
}