int sumOfLastN_Nodes(struct Node* head, int n)
{
   
 Node* temp = head;
int len = 0;
int sum = 0;
int i=0;
while(temp!=0){
len++;
temp = temp->next;
}
for(i=0;i<len-n;i++)
{
    head=head->next;
}
while(head!=0){
sum += head->data;
head = head->next;
}
return sum;
      
}
//another way is by using flyods algo(move fast untill n is 0 and then move slow from head untill fast!=NULL
