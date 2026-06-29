class MyStack {
public:
    queue<int>q1,q2;
    MyStack() {
    }
     void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int n = q1.size();
        for(int i=0;i<n-1;i++){
            q2.push(q1.front());
            q1.pop();
        }
        int last = q1.front();
        q1.pop();
        swap(q1,q2);
        return last;

    }
    
    int top() {
        int n=q1.size();
        for(int i=0;i<n-1;i++){
            q2.push(q1.front());
            q1.pop();
        }
        int last=q1.front();
        q1.pop();
        q2.push(last);
        swap(q1,q2);
        return last;
    }
    
    bool empty() {
        return q1.empty();
    }
};