#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
	
			
		Node(int val){
			this->data=val;
			this->next=NULL;
		}
};
class Stack{
	Node* head;
	int capacity;
	int curr;
	public:
	Stack(int c){
		this->capacity=c;
		this->curr=0;
		head=NULL;
	}	
	bool isEmpty(){
		return this->head=NULL;
	}
	bool isFULL(){
		return this->curr==this->capacity;
	}
	void push(int val){
		Node* new_node=new Node(val);
		new_node->next=this->head;
		this->head=new_node;
		this->curr++;
	}
	void pop(){
		if(this->head->next=NULL){
			cout<<"Underflow";
			
		}
		Node* temp=this->head;
		this->head->next=this->head->next->next;
		delete temp;
		
	}
	int getTop(){
		if(this->head->next=NULL){
			cout<<"Underflow";
			
		}
		return this->head->data;
	}
};
int main(){
	Stack s(5);
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	cout<<s.getTop()<<" ";
	s.pop();
}
