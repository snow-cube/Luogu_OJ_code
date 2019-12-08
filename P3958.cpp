#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

struct xyz {
	int x;
	int y;
	int z;
};
struct xyz holes[1005];

int g[1003][1003];
int n, r, T, h;
bool found;

bool visited[1003];
void dfs(int from, int target) {
	visited[from] = true;
	if (g[from][target]) {
		found = true;
		return;
	}
	
	for (int i = 1; i <= n+1; i++) {
		if (!found && !visited[i] && g[from][i])
			dfs(i, target);
	}
} 

int main() {
	cin >> T;
	while (T--) {
		found = false;
		for (int i = 0; i < 1005; i++)
			holes[i].x = holes[i].y = holes[i].z = 0;
		memset(g, 0, sizeof(g));
		memset(visited, 0, sizeof(visited));
		n = r = h = 0;
		cin >> n >> h >> r;
		for (int i = 1; i <= n; i++) {
			cin >> holes[i].x >> holes[i].y >> holes[i].z;
			for (int j = 1; j < i; j++) {
				if (sqrt(pow(holes[i].x-holes[j].x, 2) + pow(holes[i].y-holes[j].y, 2) + pow(holes[i].z-holes[j].z, 2)) <= 2 * r) {
					g[i][j] = 1;
					g[j][i] = 1;
				}
			}
			
			if (holes[i].z <= r) {
				g[0][i] = 1;
				g[i][0] = 1;
			}
			if (h - holes[i].z <= r) {
				g[i][n+1] = 1;
				g[n+1][i] = 1;
			}
		}
		
		dfs(0, n+1);
		cout << (found ? "Yes" : "No") << endl;
	}
	
	return 0;
}
