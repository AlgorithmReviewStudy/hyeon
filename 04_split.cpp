#include <bits/stdc++.h>

using namespace std;

vector<string> split(string input, string delimeter) {
    vector<string> ret;
    long long pos = 0;
    string token = "";
    while((pos = input.find(delimeter)) != string::npos) {
        token = input.substr(0, pos); //substr(pos, count) -> [pos, pos + count) 까지의 문자열을 반환
        ret.push_back(token);
        input.erase(0, pos + delimeter.length()); //erase(first, last) -> [first, last) 까지의 문자열을 지운다.
    }
    ret.push_back(input);
    return ret;
}

int main() {
    string s = "hello bye";
    vector<string> a = split(s, " ");
    for(string b : a) cout << b << "\n";
    return 0;
}