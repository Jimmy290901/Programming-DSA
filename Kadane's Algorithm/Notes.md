Title: "Kadane's Algorithm"
file link: "KadanesAlgom.cpp"

Code Detailed Explanation:

Kadane's Algorithm is one of the most efficient way to find the maximum sum of any subarray from a given array.

Let us understand how this code works;

Let's assume the given array is {-2,3,4,-1,5,-12,6,1,3}
we first define two int variables namely CS and MS (current sum and maximum sum respectively)

Now we'll see how both of these values change when the loop starts;

In every iteration the current sum gets updated by adding the next element to the previous sum. And the maximum sum takes the maximum sum which has come until that iteration. But there's a catch. Everytime the current sum becomes negative, we initialize it to '0' because we need the maximum sum and adding anything to '0' is better than adding it to a negative number.

Array - {-2,3,4,-1,5,-12,6,1,3}
MS - {0,3,7,6,11,0,6,7,10}
CS - {0,3,7,7,11,11,11,11,11}

Thus for this example, we get the maximum sum as 11!

Let us focus a little on the time complexity of the algorithm:-

Every step takes O(1) time except the loop part, so the complexity is decided according to the conditions of the loop.

The loop portion:
/_ for (int i = 1; i < n; i++){
cs += arr[i];
if (cs < 0)
{
cs = 0;
}
ms = max(cs, ms);
} _/

Now as we can see, the loop begins its iteration from 1 and goes till n.
so the time complexity comes as O(n).
There are different approaches for finding the solution such as Brute Force approach and Prefix Sum approach, but Kadane's Algorithm is the most simple and efficient one.
