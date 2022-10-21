### Problem Link - https://leetcode.com/problems/top-k-frequent-words/

Approach: -
1. First, calculate frequency of each string/word in the array of strings/words, and store it in a map.
2. Use a priority queue (pq) to store the top K frequent words and their frequencies in the array of words.
3. priority in pq is managed using custom operator, which keeps lower frequency strings on the front and for strings with equal frequency, keep the lexicographically higher string on the front. 
3. Traverse the map and add the words to pq for the first k iterations.
4. For the remaining strings in the map, compare their frequency with that of front of pq.
5. If more, dequeue the pq and enqueue the current string and its frequency.
6. If equal, enqueue the current string in pq and then, do a dequeue the pq.
7. Once traversing the map is finished, pq will contain the top K frequent words, but in reverse order.
8. Pour out the contents of pq into another array. Reverse it to obtain the result array.