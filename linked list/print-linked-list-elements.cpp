// Given a linked list. Print all the elements of the linked list.
// Input:
// N=2
// LinkedList={1 , 2}
// Output:
// 1 2
class Solution
{
    public:
    void display(Node *head)
    {
     while(head!=NULL){
     cout<<head->data<<' ';
     head = head->next;
    }
    }
};