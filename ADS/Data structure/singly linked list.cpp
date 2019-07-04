#include <iostream>


using namespace std;


class List {
	struct node {
		int data;
		node *next;
	};
	
	node *head;
	node *tail;
	node *tmp;
	
	
public: 
	List() {
		head = NULL;
		tail = NULL;
		
		void insert(int x) {
			tmp = new Node;
			tmp->data = x;
			
		
		}
	} 
};

int main() {
	printf ("hi\n");
	return 0;
}
