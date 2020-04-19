#include <iostream>

#define SIZE 10


using namespace std;

struct stack {
    int a[SIZE];
    int head = -1;

    void push(int x) {
        head++;
        a[head] = x;
    }

    void pop() {
        if (head != -1)
            head--;
        else {
        		printf("Error on pop query\n");
			exit(EXIT_FAILURE);
		}	
    }

    bool isEmpty() {
        return head == -1;
    }
    
    int top() {
    		if (head != -1)
    			return a[head];
    		printf("Empty stack\n");
		exit(EXIT_FAILURE);    			
    }    
};

int main() {
	stack st;
	st.push(5);
	st.push(6);
	printf("%d\n", st.top());
	st.pop();
	printf("%d\n", st.top());
	st.pop();
	printf("%d\n", st.top());
	printf("isEmpty -> %d\n", st.isEmpty());	
	return 0;
}
