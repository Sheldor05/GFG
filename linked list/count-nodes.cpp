// Given a singly linked list. 
// The task is to find the length of the linked list, 
// where length is defined as the number of 
// nodes in the linked list.

// Input:
// LinkedList: 1->2->3->4->5
// Output: 5
class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        int count = 0;
        while(head != NULL){
            head=head->next;
            count++;
        }
    
    return count;
    }
};
    