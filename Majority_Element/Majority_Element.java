
// Boyer Moore Voting Algorithm

class Solution {
    public int majorityElement(int[] nums) {
        int ans=0;
        int count=0;   
        for(int i=0;i<nums.length;i++){
            if(count==0) ans=nums[i];
            if(nums[i]==ans) count++;
            else count--;
        }
        return ans;
    }
}