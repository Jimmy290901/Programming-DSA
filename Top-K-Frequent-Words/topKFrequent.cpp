#include <bits/stdc++.h>

using namespace std;

struct obj {
    int freq;
    string str;
    obj (int f, string s) {
        freq = f, str = s;
    }
};

struct comp {
    bool operator()(obj const &a, obj const &b) {
        if (a.freq == b.freq) {
            return lexicographical_compare(a.str.begin(), a.str.end(), b.str.begin(), b.str.end());
        }
        return a.freq > b.freq;
    }
};

vector<string> topKFrequent(vector<string>& words, int k) {
    unordered_map<string,int> freq;
    for (auto word : words) {
        freq[word]++;          
    }
    priority_queue<obj, vector<obj>, comp> pq;
    obj temp = obj(0,"");
    for (auto itr : freq) {
        if (k > 0) {
            pq.push(obj(itr.second, itr.first));
            k--;
            continue;
        }
        temp = pq.top();
        
        if (itr.second > temp.freq) {
            pq.pop();
            pq.push(obj(itr.second,  itr.first));
        } else if (itr.second == temp.freq) {
            pq.push(obj(itr.second,  itr.first));
            pq.pop();
        }
    }
    vector<string> res;
    while (!pq.empty()) {
        res.push_back(pq.top().str);
        pq.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}

void display(vector<string> &a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main(void) {
    int k;
    cin >> k;
    int totalWords;
    cin >> totalWords;
    vector<string> words(totalWords);
    for (int i = 0; i < totalWords; i++) {
        cin >> words[i];
    }
    vector<string> res = topKFrequent(words, k);
    display(res);
}