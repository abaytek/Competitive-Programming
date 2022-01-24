class MinStack {
public:
    vector<int> vec;
    int size = 0;
    MinStack() {
        
    }
    
    void push(int val) {
        size++;
        vec.push_back(val);
    }
    
    void pop() {
       vec.erase(vec.begin()+size-1);
        vec.resize(size-1);
        size--;
    }
    
    int top() {
        return vec[size-1];
    }
    
    int getMin() {
       return *min_element(vec.begin(), vec.end());
    }
};

