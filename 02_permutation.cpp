#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[5] = {2, 1, 3, 4, 5};
    sort(arr, arr+5); //오름차순으로 정렬해줄 것!
    do {
        for(int i = 0; i < 5; i ++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
    } while(next_permutation(arr, arr + 5)); // 오름차순으로 정렬, 이전 정렬보다 낮은 정렬일 경우 false 리턴

    return 0;
}