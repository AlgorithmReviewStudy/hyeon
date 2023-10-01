#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a{1, 1, 2, 2, 4, 4};
    map<int, int> mp;
    for(int i : a) {
        if(mp[i]) {
            continue;
        } else {
            mp[i] = 1;
        }
    }

    vector<int> ret;
    for(auto it : mp) {
        ret.push_back(it.first);
    }

    for(int i : ret) cout << i << "\n";

    return 0;
}