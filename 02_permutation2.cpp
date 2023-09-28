#include <bits/stdc++.h>

using namespace std;

int arr[5] = {1, 2, 3, 4, 5};
int n = 5;
int r = 2;

void printV()
{
    for(int i = 0; i < r; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

void makePermutation(int n, int r, int depth)
{
    if(r == depth) {
        printV();
        return;
    }
    for(int i = depth; i < n; i++) {
        swap(arr[i], arr[depth]);
        makePermutation(n, r, depth + 1);
        swap(arr[i], arr[depth]);
    }
}

int main()
{
    makePermutation(n, r, 0);
    return 0;
}