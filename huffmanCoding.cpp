#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class cmp {
public:
    bool operator()(node* a, node* b) {
        return a->data > b->data;
    }
};

class Solution {
public:
    void traverse(node* root, vector<string>& ans, string temp) {
        if (root->left == NULL && root->right == NULL) {
            ans.push_back(temp);
            return;
        }
        traverse(root->left, ans, temp + '0');
        traverse(root->right, ans, temp + '1');
    }

    vector<string> huffmanCodes(string S, vector<int> f, int N) {
        priority_queue<node*, vector<node*>, cmp> pq;
        for (int i = 0; i < N; i++) {
            node* temp = new node(f[i]);
            pq.push(temp);
        }

        while (pq.size() > 1) {
            node* left = pq.top();
            pq.pop();

            node* right = pq.top();
            pq.pop();

            node* newnode = new node(left->data + right->data);
            newnode->left = left;
            newnode->right = right;
            pq.push(newnode);
        }

        node* root = pq.top();
        vector<string> ans;
        string temp = "";
        traverse(root, ans, temp);
        return ans;
    }
};

int main() {
    Solution ob;
    vector<int> frequencies = {5, 9, 12, 13, 16, 45};
    vector<string> result = ob.huffmanCodes("", frequencies, frequencies.size());

    cout << "Huffman Codes:\n";
    for (int i = 0; i < result.size(); i++) {
        cout << "Character " << i << ": " << result[i] << endl;
    }

    return 0;
}
