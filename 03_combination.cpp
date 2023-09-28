#include <bits/stdc++.h>

using namespace std;

int n = 5, k = 3, a[5] = {1, 2, 3, 4, 5};

void print(vector<int> b){
for(int i : b)cout << i << " ";
    cout << '\n';
}

void combination(int start, vector<int> b) {
    if(b.size() == k) {
        print(b);
        return;
    }

    for(int i = start; i < n; i++) {
        b.push_back(a[i]);
        combination(i + 1, b);
        b.pop_back();
    }
}

int main() {
    vector<int> b;
    combination(0, b);
    return 0;
}