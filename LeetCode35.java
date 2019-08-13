class Solution {
    public int searchInsert(int[] nums, int target) {
        int ans = -1;
        int len = nums.length;
        if(nums[0] > target){
            return 0;
        }
        for(int i = 0; i < len - 1; i++){
            if(nums[i] == target){
                ans = i;
                break;
            }else if(target < nums[i + 1] && target > nums[i]){
                ans = i + 1;
                break;
            }
        }
        if(ans == -1){
            if(target == nums[len - 1]){
                ans = len - 1;
            }else{
                ans = len;
            }
        }
        return ans;
    }
}