#include <iostream>
#include <queue>
using namespace std;

int main() {
    bool bucket[10001] = {0};
    queue<int> que;
    int M, N;
    cin >> M >> N;

    int word, count = 0;
    while (N--) {
        cin >> word;
        if (!bucket[word]) {
            if (que.size() >= M) {
                bucket[que.front()] = false;
                que.pop();
            }
            que.push(word);
            bucket[word] = true;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
