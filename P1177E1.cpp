#include <iostream>
using namespace std;

void Qsort(int* begin, int* end) {
	if (begin >= end)
		return;
		
	//cout << begin << " " << end << endl;
	int* idx = begin + (end-begin)/2;
	int t = *idx;
	*idx = *begin;
	*begin = t;
	
	int* head = begin, *tail = end;
	bool flag = true;
	while (head < tail) {
		while (*tail >= *begin && head < tail) {
			if (*tail != *begin)
				flag = false;
			tail--;
		}
		while (*head <= *begin && head < tail) {
			if (*head != *begin)
				flag = false;
			head++;
	    }
			
		int t = *head;
		*head = *tail;
		*tail = t;
	}
	
	t = *head;
	*head = *begin;
	*begin = t;
	
	if (flag)
		return;
	
	Qsort(begin, head-1);
	Qsort(head+1, end);
}

int main() {
	int nums[100001] = {0};
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> nums[i];
		
	Qsort(nums, nums+N-1);
	
	for (int i = 0; i < N; i++)
		cout << nums[i] << (i == N-1 ? "" : " ");
	cout << endl;
	
	return 0;
}
