#include "bits/stdc++.h"

using namespace std;

int main() {
    // 入力受付
    int N;
    cin >> N;
    vector<int> points(N);
    for (int i = 0; i < N; i++)
        cin >> points.at(i);

    int A, B;

    A = 0;
    B = 0;
    sort(points.begin(), points.end());
    reverse(points.begin(), points.end());
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0)
            A += points.at(i);
        else
            B += points.at(i);
    }
    cout << A - B;
}
