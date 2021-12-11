#include "bits/stdc++.h"

using namespace std;

int main() {
    // 入力受付
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i)
        cin >> a.at(i);

    int indexNum, ans;

    indexNum = 1, ans = 0;
    for (int i = 0; i < N; ++i) {
        if (indexNum == a.at(i)) {
            indexNum++;
            continue;
        }
        ans++;
    }
    if (indexNum != 1)
        cout << ans << endl;
    else
        cout << -1 << endl;
}
