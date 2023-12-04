#include <iostream>

using namespace std;

const int MAX = 5;
int front = -1;
int back = -1;

int my_queue[MAX];


int count(){
    int count = 0;
    for (int i = front; i <= back; i++)
    {
        count++;
    }
    

    return count; 
    
}

bool isEmpty(){
    if(back == -1) return true;
    return false;
}

bool isFull(){
    if(back == MAX-1) return true;
    return false;
}


void enqueue(int num){

    if(isEmpty()){
        back = front = 0;
    }

    else{
        back++;
    }

    my_queue[back] = num;
}

void dequeue(){
    if(isEmpty()){
        cout<<"Antrian sudah kosong !\n";
    }else {
        for(int a = front; a < back; a++){
            my_queue[a]=my_queue[a+1];
        }
        back--;
        if(back == -1){
            front = -1;
        }
    }
}

void display(){
    cout<<"Elements in Queue : ";
    for (int i = front; i <= back; i++)
    {
        cout<<my_queue[i]<<" ";
    }
    cout<<endl;
    
    
}

int main(){
    enqueue(5);
    enqueue(7);
    enqueue(23);
    enqueue(9);
    display();

    cout<<endl<<endl;
    dequeue();
    display();

}
