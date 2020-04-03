#include <iostream>
#include <algorithm>
using namespace std;

int n, m, s, t;
struct Road {
    int u, v, w;
} roads[20005];

bool cmp(struct Road a, struct Road b) {
    return a.w < b.w;
}

int set[10005];

int find(int a) {
    if (set[a] != a)
        set[a] = find(set[a]);
    return set[a];
}

void uni(int a, int b) {
    set[find(b)] = find(a);
}

int main() {
    cin >> n >> m >> s >> t;
    for (int i = 1; i <= m; i++) {
        cin >> roads[i].u >> roads[i].v >> roads[i].w;
    }

    sort(roads+1, roads+m+1, cmp);

    int begin = 1, end = m;
    while (begin < end) {
        for (int i = 0; i <= n; i++) set[i] = i;
        int mid = (begin + end) / 2;
        for (int i = 1; i <= mid; i++)
            uni(roads[i].u, roads[i].v);
        if (find(s) == find(t))
            end = mid;
        else
            begin = mid + 1;
    }

    cout << roads[end].w << endl;

    return 0;
}