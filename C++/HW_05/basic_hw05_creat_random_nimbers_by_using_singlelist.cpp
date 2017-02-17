#include <iostream>
#include <time.h>
#define limit 5
using namespace std;
/*==============================================================*/
//create Node
struct Node{
	int data;
	Node* next;
};
//print all list
void pri(Node* n){
	while(1){
			if(n->next == nullptr)
				break;
			else{
				cout << n->data << endl;
				n=n->next;
			}
		}
}
//if sel==0, do startup. else, do insert function.
void insert(Node* n){
	int i=0;
	while(1){
		if(i==limit){
			n->data = (rand()%100)+1;
			n->next = nullptr;
			break;
		}
		n->data = (rand()%100)+1;
		n->next = new Node;
		n=n->next;
		++i;
	}
}


int main(int argc, char const *argv[]){
	srand(time(NULL));
	//create Node
	Node* list = new Node;
	//create the list
	insert(list);
	//after finish create, print all list
	pri(list);




	return 0;
}
/*==============================================================*/