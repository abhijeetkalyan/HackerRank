/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node* head)
{ 
   if (head == NULL) return 0;
   Node *fast = head;
   Node *slow = head;
   while (1){
    if ((slow->next == NULL) || (fast->next->next == NULL)) return 0;
    fast = fast->next->next;
    slow = slow->next;
    if (fast == slow) return 1;
   }
}