class Solution {
    public List<Integer> majorityElement(int[] nums){
        List<Integer> al = new ArrayList<>();
        int n=nums.length;
        int num1=-1;
        int num2=-1;
        int count1=0;
        int count2=0;
        
        for(int i=0;i<nums.length;i++){
            if(nums[i]==num1) count1++;
            else if(nums[i]==num2) count2++;
            else if(count1==0){
                num1=nums[i];
                count1++;
            }
            else if(count2==0){
                num2=nums[i];
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        
        int count3=0;
        int count4=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==num1) count3++;
            else if(nums[i]==num2) count4++;
        }
        if(count3>n/3) al.add(num1);
        if(count4>n/3) al.add(num2);
        return al;
    }
}