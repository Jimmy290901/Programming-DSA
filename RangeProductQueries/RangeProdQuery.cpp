#include <bits/stdc++.h>

using namespace std;

vector<int> productQueries(int n, vector<vector<int>>& queries) {
    long long power = 1;
    vector<long long> powers;
    while (power <= n) {
        if (power & n) {
            powers.push_back(power);
        }
        power *= 2;
    }

    vector<int> res;
    const int mod = 1e9+7;
    long long ans;
    for (int i = 0; i < queries.size(); i++) {
        ans = 1;
        for (int j = queries[i][0]; j <= queries[i][1]; j++) {
            ans = (ans * powers[j]) % mod;
        }
        res.push_back(ans);
    }
    return res;
}

void display(vector<int> &a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    int totalQ;
    cin >> totalQ;
    vector<vector<int>> queries(totalQ, vector<int>(2));
    for (int i = 0; i < totalQ; i++) {
        cin >> queries[i][0] >> queries[i][1];
    }
    vector<int> res = productQueries(n, queries);
    display(res);
    return 0;
}