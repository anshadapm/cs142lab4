//queue from linkedlist
//library
#include<iostream>
#include "linklist.cpp"

using namespace std;
//class
class queue{
	public:
	Linkedlist l1;
	Node*end;
	Node*front;
	queue(){
		front=NULL;
		end=l1.head;
	}
	//add element
	void enqueue(int value){
		l1.insertAt(1,value);
	}
	//display
	void display(){
		l1.display();
	}
	//delet
	void dequeue(){
		end=l1.head;
		l1.delet();
	}
	//isempty
	bool isEmpty(){
        if(l1.head == NULL) return true;
        return false;
    }
	//size
	int size(){
		cout<<"size="<<l1.countItems()<<endl;
	}
	//top element
	void topDisplay(){
		cout<<l1.head->data<<endl;
    }

};

int main(){
	queue q1;
	q1.size();
	cout<<q1.isEmpty()<<endl;
	q1.enqueue(76);
	q1.enqueue(58);
	q1.enqueue(39);
	q1.enqueue(12);
	q1.topDisplay();
	q1.display();
	cout<<q1.isEmpty()<<endl;
	q1.dequeue();
	q1.display();
	q1.size();
}
