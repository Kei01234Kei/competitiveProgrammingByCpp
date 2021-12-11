#include "bits/stdc++.h"

using namespace std;

int main() {
    // 入力受付
    long long H;
    cin >> H;

    long long binaryNum, num;

    binaryNum = 0, num = 0;
    while (H != 0) {
        num += (long long) pow(2, binaryNum);
        binaryNum++;
        H /= 2;
    }
    cout << num;
}
