#include <iostream>
#include <algorithm>
using namespace std;

int village[1000];
struct Info {
    int v1;
    int v2;
    int t;
};
struct Info info[100000];

bool cmp(struct Info a, struct Info b) {
    return a.t < b.t;
}

int find(int item) {
    if (village[item] == item)
        return item;
    return (village[item] = find(village[item]));
}

bool is_connected(int N) {
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (village[i] == i)
            cnt++;
    }

    return (cnt == 1);
}

void connect(int a, int b) {
    village[b] = a;
}

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
        village[i] = i;

    for (int i = 0; i < M; i++) {
        cin >> info[i].v1 >> info[i].v2 >> info[i].t;
        info[i].v1--;
        info[i].v2--;
    }
    
    sort(info, info+M, cmp);

    int i = -1;
    while (!is_connected(N) && ++i < M) {
        int r1 = find(info[i].v1);
        int r2 = find(info[i].v2);
        if (r1 != r2)
            connect(r1, r2);
    }

    cout << (i < M ? info[i].t : -1) << endl;
    //cout << info[i].t << endl;
    //cout << i << endl;

    return 0;
}
