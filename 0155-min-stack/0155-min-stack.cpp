class MinStack {
public:
    stack<long long> st ;
    long long  min ; 
    MinStack() {
        min = LLONG_MAX ;
    }
    
    void push(int val) {
        long long x = (long long) val ;
        if(st.size()==0){
            st.push(val);
            min = x ;
        }
        else if (val>=min) st.push(x) ;
        else{
            st.push(2*x-min);
            min = x ;
        }
    }
    
    void pop() {
        if(st.top()>=min) st.pop();
        else{
             long long oldmin = 2*min - st.top();
             min = oldmin ;
             st.pop();
        }
    }
    
    int top() {
        if(st.top()<min) return min ;
        else return st.top();
    }
    
    int getMin() {
        return min ;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */