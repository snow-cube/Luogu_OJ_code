#include <iostream>
using namespace std;

struct Node {
	int num;
	struct Node* next;
};

struct Node* Create(int M) {
	struct Node* head = new struct Node;
	struct Node* item = head;
	for (int i = 1; i <= M; i++) {
		struct Node* new_item = new struct Node;
		new_item->num = i;
		item->next = new_item;
		
		item = new_item;
	}
	item->next = head->next;
	
	
	return item->next;
}

struct Node* Delete(struct Node* head, int step) {
	for (int i = 0; step-2 > 0 && i < step-2; i++) {
		head = head->next;
	}
	
	struct Node* obj = head->next;
	if (obj == obj->next) {
		cout << obj->num;
		return NULL;
	}
	cout << obj->num;
	head->next = obj->next;
	delete obj;
	
	return head->next;
}

int main() {
	int M, N;
	cin >> M >> N;
	struct Node* head = Create(M);
    //cout << head->num << endl;

    // step == 1 output
    if (N == 1) {
        for (int i = 1; i <= M; i++) cout << i << " ";
    } else {
	
//	for (int i = 0; i < 3*M; i++) {
//		cout << head->num << endl;
//		head = head->next;
//	}
	
	while (head = Delete(head, N))
		cout << " ";
    }

    cout << endl;
	
	return 0;
}
