#include <bits/stdc++.h>
using namespace std;
 

bool compare(pair<int, int> p1, pair<int, int> p2)
{
   
    if (p1.second == p2.second)
        return p1.first > p2.first;

    return p1.second > p2.second;
}
 

    unordered_map<int, int> mp;
    for (int i = 0; i < N; i++)
        mp[arr[i]]++;
 
    vector<pair<int, int> > freq_arr(mp.begin(), mp.end());
 
    sort(freq_arr.begin(), freq_arr.end(), compare);
 
    cout << K << " numbers with most occurrences are:\n";
    for (int i = 0; i < K; i++)
        cout << freq_arr[i].first << " ";
}

int main()
{
    int arr[] = { 3, 1, 4, 4, 5, 2, 6, 1 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 2;
    print_N_mostFrequentNumber(arr, N, K);
 
    return 0;
}
