/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{   
    Node *tmpB = headB;
    while (headA != NULL){
      headB = tmpB;
      while (headB != NULL){
         if (headA == headB) return headA->data;
         headB = headB->next; 
      }
      headA = headA->next;
	  }
}