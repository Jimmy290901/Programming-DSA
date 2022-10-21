### Problem Link : https://leetcode.com/problems/integer-to-roman/

Approach: -
1. There are 13 possible roman numerals of all cases (including subraction) = M, CM, D, CD, ..., I
2. Given a number, we would start with the largest numeral of all, i.e., M and proceed towards smaller numerals, i.e., till I.
3. At each current numeral, i, divide the number (num) by the i's value and record the quotient.
4. The quotient (rep) tells us the number of times numeral has to be repeated in the roman representation of num.
5. For rep times, append i's roman representation into the result.
6. Continue the above process till num eventually becomes 0.