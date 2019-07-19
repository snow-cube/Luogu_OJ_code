#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int arr[10000] = {0}, mins[100] = {0};
	int n, m;
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) cin >> arr[i];
	
	int index = m, max = 0;
	while (index < n) {
		int min = 1000000000, idx_min = 0;
		for (int i = 0; i < m; i++) {
			if (arr[i] < min) {
				memset(mins, 0, sizeof(mins));
				mins[(idx_min = 0)++] = i;
				min = arr[i];
			} else if (arr[i] == min) {
				mins[idx_min++] = i; 
			}
		}
		
		for (int i = 0; i < idx_min; i++) {
			arr[mins[i]] += arr[index++];
			if (arr[mins[i]] > max)
				max = arr[mins[i]];
				//cout << max << endl;
		}
	}
	
	cout << max << endl;
}
