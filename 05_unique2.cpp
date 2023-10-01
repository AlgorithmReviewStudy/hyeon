#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v {2, 2, 4, 1, 2, 3, 4, 4, 5, 6, 7, 8};
    sort(v.begin(), v.end());

    //cout << *(v.end() -1 ) << '\n';  //v.end() 는 8뒤의 빈 공간을 가리킨다.
    v.erase(unique(v.begin(), v.end()), v.end());
    
    for(int i : v) cout << i << '\n';

    return 0;
}

// 1 1 2 2 3 3
// 1 2 3 2 3 3 
// unique : 두개씩 비교해가면서 중복일 경우 삭제한다. 남은 뒷자리칸들은 원래 수들로 그대로 채워둔다.
// 따라서, sort를 한 이후 사용해야 한다.
// 남은 뒷자리칸들의 첫번째 칸을 리턴한다.