### Problem Link : https://leetcode.com/contest/biweekly-contest-89/problems/range-product-queries-of-powers/

Approach: -
1. We first check for the set bits in n.
2. Create an array (powers) containing powers of 2 corresponding to set bits.
3. Now run through each query one by one.
4. Compute product of numbers in powers from query[i][0] to query[i][1] for every ith query
5. Push the result into result array.