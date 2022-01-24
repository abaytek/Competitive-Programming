class MinStack {
public:
    stack<int> s;
    stack<int> s2;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(s2.empty() || val <= s2.top()) s2.push(val);
    }
    
    void pop() {
        if(!s.empty() and !s2.empty() and  s2.top() == s.top()) s2.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
       return s2.top();
    }
};

