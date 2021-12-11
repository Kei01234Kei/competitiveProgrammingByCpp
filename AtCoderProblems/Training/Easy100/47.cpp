#include "bits/stdc++.h"

using namespace std;

int main() {
    // 入力受付
    int H, W;
    cin >> H >> W;
    int count = H * W;
    vector<string> pix(count);
    for (int i = 0; i < count; i++)
        cin >> pix.at(i);

    for (int i = 0; i < W + 2; i++) {
        cout << "#";
        if (i == W + 1)
            cout << endl;
    }
    for (int i = 0; i < H; i++)
        cout << "#" << pix.at(i) << "#" << endl;
    for (int i = 0; i < W + 2; i++) {
        cout << "#";
        if (i == W + 1)
            cout << endl;
    }
}
