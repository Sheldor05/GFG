// Given a Singly Linked List of size N, delete all alternate nodes of the list.

// Example 1:

// Input:
// LinkedList: 1->2->3->4->5->6
// Output: 1->3->5
// Explanation: Deleting alternate nodes
// results in the linked list with elements
// 1->3->5.
void deleteAlt(struct Node *head){
    // Code here
   Node* prev = head;
   int i=1;
   while(head){
       if(i %2==0)
      { prev->next= head->next;
       prev = prev->next;}
    head= head->next;
    i++
   }
}
