class MyStack {
public:
    
    // Using queue to implement stack operations
    queue<int> q;
    MyStack() {
        
    }
    
    
    void push(int x) {
        
        //first pushing the element through q 
        q.push(x);
        //x will be added in the last. But for stack it should be first so reverse the queue
        for(int i=0;i<q.size()-1;i++)
        {
            //pushing the element in the first to the last and removing the early instance to simulate stack
            q.push(q.front());
            //after the element is pushed, pop its earlier instance
            q.pop();
        }
    }
    
    int pop() {
        
        int ans=q.front();
        //because pop of queue does not return the element
        q.pop();
        return ans;
    }
    
    int top() {
        
        //return the last added element
        return q.front();
    }
    
    bool empty() {
        return q.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
