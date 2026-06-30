class MyStack {
public:
    queue<int> q;

    MyStack() {
    }

    void push(int x) {
        q.push(x);
    }

    int pop() {
        int n = q.size();
        for (int i = 0 ; i<n-1 ; i++){
            int x = q.front();
            q.pop();
            q.push(x);
        }
        int ans =q.front();
        q.pop();
        return ans;
    }

    int top() {
        int n = q.size();
        for (int i = 0 ; i<n-1 ; i++){
            int x = q.front();
            q.pop();
            q.push(x);
        }
        int topper=q.front();
        q.pop();
        q.push(topper);
        return topper;
    }

    bool empty() {
        return q.empty();
    }
};