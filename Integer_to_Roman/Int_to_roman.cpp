#include <bits/stdc++.h>

using namespace std;

string intToRoman(int num) {
    vector<int> divisors = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> numerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    int i = 0, reps;
    string res = "";
    while (num) {
        reps = num/divisors[i];
        while (reps--) {
            res += numerals[i];
        }
        num = num % divisors[i];
        i++;
    }
    return res;
}

int main(void) {
    int num;
    cin >> num;
    string roman = intToRoman(num);
    cout << "Roman representation: " << roman << "\n";
}