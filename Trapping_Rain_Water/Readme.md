Here, we follow the two pointer approach to reduce the space complexity of dp approach.

So, here we either do leftMax-arr[left] or rightMax-arr[right] but how do we make sure that it is the minimum that is leftMax will be minimum as compared to rightMax. 

**Answer: Because of the very first condition i.e. arr[left]≤arr[right] . Thus, till the point arr[left] is small this condition will follow so the previous block i.e. block with height left Max is always small or equal to right block at present and so we can say that that point can hold at least water upto left max as right max is equal or bigger.**