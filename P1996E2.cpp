#include <iostream>
using namespace std;

int main() {
	int nums[1000] = {0};
	int M, N;
	cin >> M >> N;
	
	for (int i = 1; i <= M; i++)
		nums[i] = i;
	nums[M+1] = -1;
	
	int count = 0, index = 0, step = 1;
	while (1) {
		if (nums[index]) {
			//cout << index << endl;
			if (count == M)
				break;
			else if (nums[index] < 0) {
				index = 0;
				continue;
		}
			else if (step == N) {
				cout << nums[index] << " ";
				nums[index] = 0;
				step = 1;
				count++;
			} else
				step++;
		}
		
		index++;
	}
}
