/*
Queue implementation in C++. Objects and methods are used in this implementaion.
Access, insertion, and deletion are included. Search is not included but would have a time complexity of O(n).
The other time complexities are listed below. The space complexity is O(n). 
*/

#include<iostream>
using namespace std;

class Queue{
private:
	int front;
	int rear;
	int size;
	int *Q;
public:
	Queue(){
		front = rear = -1;
		size = 10;
		Q = new int[size];
	}
	Queue(int size){
		front = rear = -1;
		this->size = size;
		Q = new int[this->size];
	}
	void enqueue(int x);
	int dequeue();
	void Display();
};

//Time complexity is O(1)
void Queue::enqueue(int x){
	if(rear == size -1)
		cout << "Queue Full" << endl;
	else{
		rear++;
		Q[rear] = x;
	}
}

//Time complexity is O(1)
int Queue::dequeue(){
	int x = -1;
	if(front == rear)
		cout << "Queue is Empty" << endl;
	else{
		x = Q[front + 1];
		front++;
	}
	return x;
}

//Time complexity is O(n)
void Queue::Display(){
	for(int i = front + 1; i <= rear; i++)
		cout << Q[i] << " ";
	cout << endl;
}

int main(){

	Queue myQueue(5);

	myQueue.enqueue(10);
	//Rear went from -1 to 0. Q[0] = 10
	myQueue.enqueue(20);
	//Rear went from 0 to 1. Q[1] = 20
	myQueue.enqueue(30);
	//Rear went from 1 to 2. Q[2] = 30
	myQueue.enqueue(40);
	//Rear went from 2 to 3. Q[3] = 40
	myQueue.enqueue(50);
	//Rear went from 3 to 4. Q[4] = 50
	myQueue.enqueue(60);
	//Queue is full

	cout << myQueue.dequeue() << endl;
	//Front went from -1 to 0. Return Q[0] (10)
	cout << myQueue.dequeue() << endl;
	//Front went from 0 to 1. Return Q[1] (20)

	myQueue.Display();
	
	return 0;
}