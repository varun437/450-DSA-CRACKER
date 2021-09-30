class Solution{
  public:
    /* The below method print the required sum of polynomial
    p1 and p2 as specified in output  */
    Node* addPolynomial(Node *p1, Node *p2)
    {
     /*   Node *p3=new Node(0,0);
        Node *temp=p3;
        while(p1 && p2)
        {
            if(p1->pow>p2->pow)
            {
                temp->pow=p1->pow;
                temp->coeff=p1->coeff;
                p1=p1->next;
            }
            else if(p1->pow<p2->pow)
            {
                temp->pow=p2->pow;
                temp->coeff=p2->coeff;
                p2=p2->next;
            }
            else
            {
                temp->pow=p1->pow;
                temp->coeff=p1->coeff + p2->coeff;
                p1=p1->next;
                p2=p2->next;
            }
        temp->next=new Node(0,0);
        temp=temp->next;
        }
        while(p1 || p2)
        {
            Node *ext=new Node(0,0);
        temp->next=ext;
        temp=ext;
            if(p1)
            {
                temp->coeff=p1->coeff;
                temp->pow=p1->pow;
                p1=p1->next;
            }
            if(p2)
            {
                temp->coeff=p2->coeff;
                temp->pow=p2->pow;
                p2=p2->next;
            }
    
        temp->next=new Node(0,0);
        temp=temp->next;
        }
        return p3->next;
     */   
      Node *prev=NULL,*head=NULL;
    while(p1 && p2){
        if(p1->pow==p2->pow){ 
            if(prev==NULL) head=p2;
            prev=p2;
            p2->coeff+=p1->coeff,p1=p1->next,p2=p2->next;}
        else if(p1->pow>p2->pow){
            Node *temp=p1->next;
            if(prev) prev->next=p1;
            else head=p1;
            p1->next=p2;
            prev=p1;
            p1=temp;
        }
        else{
            if(prev==NULL) head=p2;
            prev=p2;
            p2=p2->next;
        }
    }
    while(p1){
            Node *temp=p1->next;
            if(prev) prev->next=p1;
            else head=p1;
            p1->next=NULL;
            prev=p1;
            p1=temp;
    }
    Node *cur=head;
    while(cur){
        if(cur->next) cout<<cur->coeff<<"x^"<<cur->pow<<" + ";
        else cout<<cur->coeff<<"x^"<<cur->pow;
        cur=cur->next;
    }
    }
};
