class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
        q.push(k);
        
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        queue<int> a=q;
  vector<int> v;
  while(a.empty()!=true)
  {
      v.push_back(a.front());
      a.pop();
  }
  int x;
  x=count(v.begin(),v.end(),k);
  return x;
    }
};
