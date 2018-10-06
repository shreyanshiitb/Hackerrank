/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
void callLeft(node *n) {
	if (n == NULL) {
		return;
	}
	callLeft(n -> left);
	cout << n -> data << " ";
}

void callRight(node *t) {
	if (t == NULL) {
		return;
	}
    cout << t -> data << " ";
	callRight(t -> right);
}

void topView(node *root) {
	node *temp = root;
	if (root == NULL) {
		return;
	}
	if (temp -> left) {
		callLeft(temp -> left);
	}
	cout << root -> data << " ";
	if (temp -> right) {
		callRight(temp -> right);
	}
}

