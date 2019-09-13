
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int >ans;
        for(int i = left; i <= right; i++){
            int n = i;
            int flag = 0;
            while(n > 0){
                int tmp = n % 10;
                n /= 10;
                if(!tmp){
                    flag = 1;
                    break;
                }
                if(i % tmp != 0){
                    flag = 1;
                    break;
                }
            }
            if(!flag){
                ans.push_back(i);
            }
        }
        return ans;
    }
};