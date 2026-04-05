#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);

    cout << "Akar pohon: " << root->data << endl;
    cout << "Anak kiri dari akar: " << root->left->data << endl;
    cout << "Anak kanan dari akar: " << root->right->data << endl;
    cout << "Cucu (anak kiri dari node 2): " << root->left->left->data << endl;

    return 0;
}