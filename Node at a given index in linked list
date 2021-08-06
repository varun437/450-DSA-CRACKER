// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list
int GetNth(struct node* head, int index){
  node *temp=head;
  while(temp!=NULL&&index>1)
  {
      index--;
      temp=temp->next;
  }
  return temp->data;
}
