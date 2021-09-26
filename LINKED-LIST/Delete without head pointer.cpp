   
void deleteNode(Node *del)
    {
       // Your code here
      Node *temp=del->next;
      *del = *(del->next);
      free(temp);
    }
