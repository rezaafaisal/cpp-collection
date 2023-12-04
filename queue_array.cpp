#include <iostream>

using namespace std;

const int MAX = 5;

struct Numbers{
    int num;
    Numbers *next;
};

Numbers *new_node, *front = NULL, *back = NULL, *current;

int count(){
    int count = 0;
    current = front;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }

    return count; 
    
}

bool isEmpty(){
    if(front == NULL) return true;
    return false;
}

bool isFull(){
    if(count() >= MAX) return true;
    return false;
}


void enqueue(int num){
    new_node = new Numbers();
    new_node->num = num;

    if(!isEmpty()){
        new_node->next = front;
        front = new_node;
    }

    else{
        new_node->next = NULL;
        back = front = new_node;
    }
}

void display(){
    current = front;

    cout<<"Elements in Queue : ";
    while (current != NULL)
    {
        cout<<current->num<<" ";
        current = current->next;
    }
    cout<<endl;
    
}

int main(){
    enqueue(5);
    enqueue(7);
    enqueue(23);
    enqueue(9);
    display();
}
