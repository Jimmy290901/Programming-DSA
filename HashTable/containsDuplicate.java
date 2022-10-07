class Solution {
    public boolean containsDuplicate(int[] nums) 
    {
    boolean f=false;
    if(nums==null || nums.length==0)
    {
        f=false;
    }
    HashSet<Integer> myset = new HashSet<Integer>();
    for(int i: nums)
    {
        if(myset.add(i)==false)
        {
            f=true;
        }
    }
 
    return f;
}
}