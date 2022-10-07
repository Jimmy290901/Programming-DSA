In this approach, combinatorics is used. 

 Here a pattern needs to be observed. Let take the 2x3 matrix

1 0 0

0 0 1

In this matrix, to reach from top left to bottom right corner, there are three ways:

1. Right —> Right —> Down
2. Right —> Down —> Right
3. Down —> Right —> Right

It can observed in each way, we have to take to move right two times and down one time. However, in each path they are just in different order. So, we can say our answer is the total combinations that are possible through two rights and one down.

Based on the matrix we can calculate how many rights and downs we have to take to reach bottom right tile and the combinations of this will be the answers.