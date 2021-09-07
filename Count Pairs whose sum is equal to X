 int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
     set <int> l;
struct Node *temp2=head2;
while(temp2!=NULL){
l.insert(temp2->data);
temp2=temp2->next;
}
struct Node *temp1=head1;
int count=0,sum;
while(temp1!=NULL){
sum=x-temp1->data;
if(l.find(sum)!=l.end()){
count++;
}
temp1=temp1->next;
}
return count;

    }
