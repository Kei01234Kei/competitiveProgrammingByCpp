#include "bits/stdc++.h"
#include "numeric"
#include "cmath"

using namespace std;

int main() {
    // 入力受付
    int N = 0;
    cin >> N;
    vector<int> X(N, 0);
    for (int i = 0; i < N; ++i)
        cin >> X.at(i);

    int aveX, ans;

    ans = 0;

    aveX = (int) round((double) accumulate(X.begin(), X.end(), 0) / (double) X.size());
    for (int i = 0; i < N; ++i) {
        ans += (int) pow(X.at(i) - aveX, 2);
    }
    cout << ans << endl;

    return 0;
}
