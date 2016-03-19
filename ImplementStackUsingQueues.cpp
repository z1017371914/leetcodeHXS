class Stack {  
public:  
    // Push element x onto stack.  
    queue<int> queue1;  
    queue<int> queue2;  
    void push(int x) {  
        if (queue1.empty())  
        {  
            queue1.push(x);  
            while(!queue2.empty()){  
                int tmp = queue2.front();  
                queue2.pop();  
                queue1.push(tmp);  
            }  
        }else{  
            queue2.push(x);  
            while(!queue1.empty()){  
                int tmp = queue1.front();  
                queue1.pop();  
                queue2.push(tmp);  
            }  
        }  
    }  
  
    // Removes the element on top of the stack.  
    void pop() {  
        if (!queue1.empty())  
            queue1.pop();  
        if (!queue2.empty())  
            queue2.pop();  
    }  
  
    // Get the top element.  
    int top() {  
        if (!queue1.empty())  
            return queue1.front();  
        if (!queue2.empty())  
            return queue2.front();  
    }  
  
    // Return whether the stack is empty.  
    bool empty() {  
        return queue1.empty() && queue2.empty();  
    }  
};  
