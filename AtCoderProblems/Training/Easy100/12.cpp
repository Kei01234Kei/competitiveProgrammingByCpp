#include "bits/stdc++.h"

using namespace std;

int main() {
    // 入力受付
    int K, N;
    cin >> K >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
        cin >> A.at(i);

    int maxDistance;

    maxDistance = 0;
    for (int i = 0; i < N - 1; ++i) {
        if (maxDistance < A.at(i + 1) - A.at(i))
            maxDistance = A.at(i + 1) - A.at(i);
        if (i + 1 == N - 1) {
            if (maxDistance < K - A.at(i + 1) + A.at(0))
                maxDistance = K - A.at(i + 1) + A.at(0);
        }
    }
    cout << K - maxDistance << endl;
}
