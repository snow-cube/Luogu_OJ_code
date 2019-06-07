#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int nums[101] = {0};
	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}
	
	sort(nums, nums+N);
	
	int last = 0;
	int count = 0;
	for (int i = 0; nums[i]; i++) {
		if (nums[i] != last) {
			count++;
			last = nums[i];
		} else {
			nums[i] = -1;
		}
	}
	cout << count << endl;
	int flag = 0;
	for (int i = 0; nums[i]; i++) {
		if (nums[i] > 0)
			cout << (flag++ ? " " : "") << nums[i];
	}
	cout << endl;
	
	return 0;
}
