
class Solution
{
    public:
    Node* removeAllDuplicates(struct Node* head)
    {
    /*   unordered_map<int,int> m;
        Node *res=new Node(0);
        Node *temp=res;
        while(head!=NULL)
        {
            m[head->data]++;
            head=head->next;
        }
    for(auto i=m.begin();i!=m.end();i++)
    {
        if(i->second==1)
       { res->next=new Node(i->first);
        res=res->next;
       }
    }
    if(res->next==res)
    {
        return NULL;
    }
    else
    {
        return fin->next;
    }
    */
    map<int,int>mp;
Node*temp=head;
while(temp!=NULL)
{
mp[temp->data]++;
temp=temp->next;
}
for(auto x=mp.begin();x!=mp.end();x++)
{
if(x->second==1)
{
cout<<x->first<<" ";
}
}
return NULL;
    
    }
};
