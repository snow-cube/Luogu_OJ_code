#include <iostream>
#include <string>
using namespace std;

typedef struct node {
    char type;
    struct node* left;
    struct node* right;
} BNode, *BTree;

char Type(string s) {
    char type;
    if (s[0] == '0')
        type = 'B';
    else
        type = 'I';

    for (int i = 1; i < s.size(); i++)
        if (s[i] == '0' && type == 'I' || s[i] == '1' && type == 'B') {
            type = 'F';
            break;
        }

    return type;
}

void Create(BTree& r, string s) {
    char type = Type(s);

    r = new BNode;
    r->type = type;
    r->left = NULL;
    r->right = NULL;
    
    if (s.size() >= 2) {
        Create(r->left, s.substr(0, s.size() / 2));
        Create(r->right, s.substr(s.size() / 2));
    }
}

void PostTravel(BTree r) {
    if (r == NULL)
        return;

    PostTravel(r->left);
    PostTravel(r->right);
    cout << r->type;
}

int main() {
    int N;
    string s;
    cin >> N >> s;

    BTree root;
    Create(root, s);
    PostTravel(root);
    cout << endl;

    return 0;
}
