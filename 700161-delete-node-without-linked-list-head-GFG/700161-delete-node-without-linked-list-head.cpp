/* Structure of Linked List Node
class Node {
	public:
	int data;
	Node* next;
	
	Node(int x) {
		data = x;
		next = nullptr;
	}
};
*/
class Solution {
	public:
	void deleteNode(Node* x) {
		// code here
		
		Node * curr = x->next;
		Node * prev = x;
		
		while (curr->next != NULL) {
			
			prev->data = curr->data;
			prev = curr;
			curr = curr->next;
			
		}
		
		prev->data = curr->data;
		prev->next = NULL;
		
		delete curr;
		
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna