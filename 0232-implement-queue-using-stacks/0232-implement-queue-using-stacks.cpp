class MyQueue {
public:
    stack<int> st;

    void push(int x) {
        st.push(x);
    }

    int pop() {
        int x = st.top();
        st.pop();

        if(st.empty()) {
            return x;
        }

        int res = pop();
        st.push(x);

        return res;
    }

    int peek() {
        int x = st.top();
        st.pop();

        if(st.empty()) {
            st.push(x);
            return x;
        }

        int res = peek();
        st.push(x);

        return res;
    }

    bool empty() {
        return st.empty();
    }
};