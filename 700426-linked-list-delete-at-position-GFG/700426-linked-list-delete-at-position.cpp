/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/



class Solution
{
public:
    Node *deleteNode(Node *head, int x)
    {

        // IF 1 node only
        if (head->next == NULL)
            return NULL;

        // IF 1ST Node
        if (x == 1)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
            Node *curr = head;
            Node *prev = NULL;
            while (--x)
            {
                prev = curr;
                curr = curr->next;
            }

            prev->next = curr->next;
            delete curr;
        }

        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna