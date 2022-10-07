class Solution {
    public int trap(int[] arr) {
        int n=arr.length;
        int left=0;
        int right=n-1;
        int leftMax=0;
        int rightMax=0;
        int ans=0;
        
        while(left<=right){
            if(arr[left]<=arr[right]){
                if(arr[left]<leftMax) ans+=leftMax-arr[left];
                else leftMax=arr[left];
                left++;
            }
            else{
                if(arr[right]<rightMax) ans+=rightMax-arr[right];
                else rightMax=arr[right];
                right--;
            }
        }
        
        return ans;
    }
}