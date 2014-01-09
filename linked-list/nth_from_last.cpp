/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  //Increment pointer by N places
  int tmp = positionFromTail;
  Node *tmpNode = head;
  Node *pos = head;
  while (tmp > 0){
    tmpNode = tmpNode->next;
    tmp--;
  }
  while (tmpNode->next != NULL){
    pos = pos->next;
    tmpNode = tmpNode->next;
  }
  return pos->data;

}