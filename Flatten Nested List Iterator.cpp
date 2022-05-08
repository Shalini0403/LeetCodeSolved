class NestedIterator {
public:
    stack<vector<NestedInteger>::iterator> st, last; 
    NestedIterator(vector<NestedInteger> &nestedList) {
        st.push(begin(nestedList)); 
        last.push(end(nestedList));     
    }
    
    int next() {
        return st.top()++ -> getInteger();
    }
    
	    bool hasNext() {        
        while(size(st)){			
            auto top = st.top();            
			
            if(st.top() == last.top()){
                st.pop(), last.pop();
                continue;
            }                
            if(top -> isInteger()) break;
			
            st.top()++;
            st.push(begin(top -> getList()));  
            last.push(end(top -> getList()));
        }
		
        return size(st); 
    }    
};
