#include <iostream>
#include <cstdio>
using namespace std;

int nums[1000005];
int cnt[11];

int main() {
    int n;
    cin >> n;

    int total = 0; // 记录所有数字的总和， 方便后续计算
    for (int i = 1; i <= n; i++) {
        cin >> nums[i];
        total += nums[i];
        cnt[nums[i]]++; // 记录每个点数出现次数
    }
    
    int ans = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = i; j <= 10; j++) {
            if ((i == j && cnt[i] < 2) || cnt[i] < 1 || cnt[j] < 1)
                continue; // 不够取
            int rest = i + j;
            int score = total - rest;
            if (!(score % 10)) {
                rest %= 10;
                if (!rest)
                    rest = 10;
                ans = rest;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}