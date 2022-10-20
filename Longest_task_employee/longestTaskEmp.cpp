#include <bits/stdc++.h>

using namespace std;

int hardestWorker(int n, vector<vector<int>>& logs) {
    int minId = INT_MAX, maxTime = INT_MIN, prevTime = 0, time;
    for (int i = 0; i < logs.size(); i++) {
        time = logs[i][1] - prevTime;
        if (time > maxTime) {
            minId = logs[i][0];
            maxTime = time;
        } else if (time == maxTime) {
            minId = min(minId, logs[i][0]);
        }
        prevTime = logs[i][1];
    }
    return minId;
}

int main() {
    int n;
    cin >> n;
    int totalLogs;
    cin >> totalLogs;
    vector<vector<int>> logs(totalLogs, vector<int>(2));
    for (int i = 0; i < totalLogs; i++) {
        cin >> logs[i][0] >> logs[i][1];
    }
    int ans = hardestWorker(n, logs);
    cout << ans << "\n";
}