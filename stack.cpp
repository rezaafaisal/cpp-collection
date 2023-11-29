#include <iostream>

using namespace std;

int MAX = 10;
struct Node {
   int data;
   struct Node *next;
};

struct Node *top = NULL, *current, *new_node;


// menghitung banyak data
int count(){
    int item_count = 0;
    if(top == NULL) return item_count;

    else{
        current = top;
        while (current != NULL) {
            item_count++;
            current = current->next;
        }
        return item_count;
    }
}

// mengecek apakah tumpukan kosong
bool isEmpty(){
    if(top == NULL) return true;
    return false;
}

// mengecek apakah tumpukan sudah penuh
bool isFull(){
    if(count() == MAX) return true;
    return false;
}

// melihat data berdasarkan urutan
void peek(int order){
    int item = 0;
    if(isEmpty) cout<<"Stack is empty!";

    else{
        current = top;
        while (current != NULL) {
            item++;
            if(item == order){
                cout<<"Data at order "<<order<<" are "<<current->data<<endl;
                break;
            }
            current = current->next;
        }
        
    }
}

// membersihkan semua data di tumpukan
void destroy(){

}

void push(int val) {
    if(isFull) cout<<"Stack is overflow!";

    else{
        struct Node* newnode = new Node();
        newnode->data = val;
        newnode->next = top;
        top = newnode;
    }
}

void pop() {
   if(isEmpty)
   cout<<"Stack Underflow"<<endl;

   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}

void display() {
   if(isEmpty()) cout<<"Stack is empty!";

   else {
      current = top;
      cout<<"Stack elements are: ";
      while (current != NULL) {
         cout<<current->data<<" ";
         current = current->next;
      }
   }
   cout<<endl;
}

int main() {
    // set max stack
    MAX = 5;

    push(12);
    push(89);
    push(90);
    display();

    cout<<endl<<endl;

    pop();
    display();

    cout<<endl<<endl;
    peek(2);
    display();

    cout<<endl<<endl;
    cout<<"60200119075_Reza Faisal\n";


   return 0;
}