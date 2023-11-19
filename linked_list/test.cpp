#include <iostream>
using namespace std;

struct Students{
    string name;
    string nim;
    Students *next;
};

Students *head, *tail, *previous, *current, *new_node;

void print(string string){
    cout<<string;
}

void createSingleList(string name, string nim){
    head = new Students();
    head->name = name;
    head->nim = nim;
    head->next = NULL;
    tail = head;
}

void addAtTail(string name, string nim){
    new_node = new Students();
    new_node->name = name;
    new_node->nim = nim;
    new_node->next = NULL;
    tail->next = new_node;
    tail = new_node;
}

void addAtHead(string name, string nim){
    new_node = new Students();
    new_node->name = name;
    new_node->nim = nim;
    new_node->next = head;
    head = new_node;
    
}

void printLinkedList(){
    current = head;
    while(current != NULL){
        cout<<"Student name : "<<current->name<<endl;
        cout<<"Student NIM : "<<current->nim<<endl;
        current = current->next;
    }
}


void deleteDataByNim(){
    string nim;
    char confirm;

    current = head;
    previous = NULL;

    cout<<"Enter NIM : ";cin>>nim;

    while(current != NULL){
        if(current->nim == nim){
            print("Sure want to delete "+current->name+"? [y/n] : ");cin>>confirm;

            if(confirm == 'y'){
                if(previous == NULL){
                    head = current->next;
                    delete current;
                    break;
                }

                else{
                    previous->next = current->next;
                    delete current;
                    break;
                }
            }

            else{
                break;
            }

        }
        previous = current;
        current = current->next;
    }

    if(current == NULL){
        print("Data with NIM "+nim+" not found!\n");
    }

}

void editDataByNim(){
    string nim, name;
    
    print("Input NIM : ");cin>>nim;
    current = head;

    while(current != NULL){
        if(current->nim == nim){
            print("Data with current name "+current->name+"\n");
            cin.ignore();
            print("Input your new Name : ");getline(cin, name);

            current->name = name;

            break;
        }

        current = current->next;
    }

    if(current == NULL){
        print("Data with NIM "+nim+" not found!\n");
    }

}


int main(){
    createSingleList("Aliong", "123");
    addAtTail("Hansen 54", "321");
    addAtHead("Alexander Graham", "234");
    printLinkedList();

    cout<<endl<<endl;

    // deleteDataByNim();
    editDataByNim();
    printLinkedList();
    
}