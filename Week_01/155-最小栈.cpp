class MinStack {
    stack<int> num_stack;
    stack<int> min_stack;
public:
    /** initialize your data structure here. */
    MinStack() {
        min_stack.push(INT_MAX);
    }
    
    void push(int x) {
        num_stack.push(x);
        int t=min_stack.top();
        min_stack.push(t<x?t:x);
    }
    
    void pop() {
        num_stack.pop();
        min_stack.pop();
    }
    
    int top() {
        return num_stack.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
