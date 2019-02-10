//stack from linkedlist
//library
#include<iostream>
#include "linklist.cpp"

using namespace std;

class stack{
    public:
	Node * top;
	Linkedlist l1;
	stack(){
	    top= NULL;
	}
    //push on top
	void push(int value){
		l1.insertAt(1,value);
		top = l1.head;
	}
	//pops the top
	void pop(){
		l1.deletFt();
		top=l1.head;
	}	
	bool isEmpty(){
        if(top == NULL) return true;
        return false;
    }
    int size(){
        return l1.countItems();
    }
    void topDisplay(){
		cout<<top->data<<endl;
    }
    void display(){
        l1.display();
    }
};


int main(){
    stack s1;

    for(int i = 0; i < 5 ; i++)
       { s1.push(i);}
	s1.topDisplay();
    s1.display();
    s1.pop();
    s1.display();
    s1.pop();
    s1.display();
    s1.pop();
    s1.display();
    s1.pop();
    s1.display();
	cout<<"size of stack is "<<s1.size()<<endl;
	cout<<s1.isEmpty()<<endl;
	
}
