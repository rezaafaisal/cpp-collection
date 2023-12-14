#include <iostream>

using namespace std;

const int MAX = 5;

struct Numbers{
    int num;
    Numbers *next;
};

Numbers *new_node, *front, *back, *current;

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
    
    if(isFull()){
        cout<<"Queue is full\n";
    }

    else{
        new_node = new Numbers();
        new_node->num = num;

        if(!isEmpty()){
            back->next = new_node;
            back = new_node;
        }

        else{
            new_node->next = NULL;
            back = front = new_node;
        }
    }

}

void dequeue(){
    current = front;
    front = front->next;
    cout<<"Dequeue element is "<<current->num<<endl;
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
    enqueue(50);
    display();
    
    cout<<endl<<endl;
    dequeue();
    display();
}
