**Explanation:**

[7, 7, 5, 7, 5, 1 | 5, 7 | 5, 5, 7, 7 | 7, 7, 7, 7]

Suppose this is the array and we move linearly and implement the algorithm then whenever the selected element is not occurring then count is decrement and when it occurs then the count is incremented. Thus the element's count, which is chosen, is reduced to zero if the element other than it occurs similar to its count i.e. whole subarray is discarded. As there is always an element which is present in array and it's count is greater than n/2 then there will be one such subarray   where it will be greater than the remaining elements. Like 7 in this subarray