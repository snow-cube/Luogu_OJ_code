#include <iostream>
#include <algorithm>
using namespace std;

struct stu {
    int idx;
    int total;
    int chinese;
};

bool cmp(struct stu a, struct stu b) {
    if (a.total > b.total)
        return true;
    if (a.total < b.total)
        return false;
    if (a.chinese > b.chinese)
        return true;
    if (a.chinese < b.chinese)
        return false;
    if (a.idx < b.idx)
        return true;
    if (a.idx < b.idx)
        return false;
}

int main() {
    struct stu students[300];
    int N;
    cin >> N;
    int cn, math, en;
    for (int i = 0; i < N; i++) {
        cin >> cn >> math >> en;
        students[i].idx = i+1;
        students[i].chinese = cn;
        students[i].total = cn + math + en;
    }

    sort(students, students+N, cmp);

    for (int i = 0; i < 5; i++) {
        cout << students[i].idx << " " << students[i].total << endl;
    }

    return 0;
}
