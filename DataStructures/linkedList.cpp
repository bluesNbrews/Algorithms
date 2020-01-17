#include <iostream>

using namespace std;

struct Node{
	int data;
	Node *next;
};

class LinkedList{
private:
	Node *first;
public:
	LinkedList(){
		first=NULL;
	}
	LinkedList(int A[], int n);
	~LinkedList();

	void Display();
	void Insert(int index, int x);
	int Delete(int index);
	int Length();
	void Search(int x);
};

//Constructor for LinkedList
LinkedList::LinkedList(int A[], int n){
	Node *last,*t;
	int i = 0;

	first = new Node;
	first->data = A[0];
	first->next = NULL;
	last = first;

	for(i = 1;i < n; i++){
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

//Deconstructor for LinkedList
LinkedList::~LinkedList(){
	Node *p = first;
	while(first){
		first = first->next;
		delete p;
		p = first;
	}
}

//The time complexity is O(n) 
void LinkedList::Display(){
	Node *p = first;

	while(p){
		cout << p->data << " ";
		p = p->next;
	}

	cout << endl;
}

//The time complexity is O(n)
int LinkedList::Length(){
	Node *p = first;
	int len = 0;

	while(p){
		len++;
		p = p->next;
	}

	return len;
}

//The time complexity is O(x)
void LinkedList::Insert(int index, int x){
	Node *t,*p = first;

	if(index < 0 || index > Length())
		return;
	t = new Node;
	t->data = x;
	t->next = NULL;

	if(index == 0){
		t->next = first;
		first = t;
	}
	else{
		for(int i = 0; i < index; i++)
			p = p->next;
		t->next = p->next;
		p->next = t;
	}
}

//The time complexity is O(index)
int LinkedList::Delete(int index){
	Node *p, *q = NULL;
	int x = -1;

	if(index < 1 || index > Length())
		return -1;
	if(index == 1){
		p = first;
		first = first->next;
		x = p->data;
		delete p;
	}
	else{
		p = first;
		for(int i = 0; i < index - 1; i++){
			q = p;
			p = p->next;
		}
		q->next = p->next;
		x = p->data;
		delete p;
	}
	cout << x << endl;
	return x;
}

void LinkedList::Search(int x){
	//Start at the head and iterate through
	//Use a boolean value for found
	//Display message if the data can't be found
	Node *p = first;
	bool found = false;

	while(p && found == false){
		if(x == p->data){
			cout << "Found data " << x << endl;
			found = true;
		}
		else{
			p = p->next;
		}
	}

	if(found == false)
		cout << "The data " << x << " could not be found.\n";
}

int main(){
	
	int myArray[] = {1,2,3,4,5,6,7,8};
	LinkedList myLinkedList(myArray,8);

	myLinkedList.Display();
	myLinkedList.Insert(2,30);
	myLinkedList.Display();
	myLinkedList.Delete(4);
	myLinkedList.Display();

	myLinkedList.Search(20);
	myLinkedList.Search(7);

	return 0;
}