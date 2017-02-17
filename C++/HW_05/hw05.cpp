/*****************************************************************
Name : hw05
Date : 2017/02/11
By   : sleepydog310
Final: 2017/02/16
*****************************************************************/
#include <iostream>
#include "hw05.hpp"
#include <algorithm>
//maxima input
#define limit 5
using namespace std;

//----------------------------------------------------------------
//print all list
void pri(Node* n){
	while(1){
			if(n->next == nullptr)
				break;
			else if(n->data == 0){
				n=n->next;
				continue;
			}
			else{
				cout << n->data;
				printf("\t");
				n=n->next;
			}
		}
		cout << "" << endl;
}//end_pri
/*==============================================================*/
//if sel==0, do startup. else, do insert function.
void start(Node* n){
	int i=0;
	//do startup
	while(1){
		if(i==limit){
			n->next = nullptr;
			break;
		}
		n->data = (rand()%100)+1;
		n->next = new Node;
		n = n->next;
		++i;
	}
}//end_insert
/*==============================================================*/
//do insert
void insert(Node* n,int num){
	while(1){
		n=n->next;
		if(n->next == nullptr){
			n->next = new Node;
			n->data = num;
			n->next->next = nullptr;
			break;
		}
	}
}
/*==============================================================*/
void del(Node*n,int pos){
	int i=0;
	while(1){
		if(n->next == nullptr)
			break;
		else if(i==pos-2){
			n->next = n->next->next;
		}
		n=n->next;
		++i;
	}
}
/*==============================================================*/
void search(Node*n, Node* ll, int num){
	//create a node to save num.
	Node* qoo = new Node;
	qoo->data = num;
	qoo->next = nullptr;
	//do search.
	while(1){
		//find the number.
		if(n->data == qoo->data){
			cout << "found ";
			cout << num << endl;
			break;
		}
		//can't find the number.
		else if(n->next == nullptr){
			cout << "not found" << endl;
			break;
		}
		n=n->next;
	}

}
/*==============================================================*/
void sort(Node* n, int count){//do sorting.
	int qoo[count-1];
	//temp node, to save sorting data
	Node* temp = new Node;
    temp->data = 0;
    temp->next = new Node;
    temp->next->next = nullptr;
	int i=0;
	//get list's data
    while(1){
        if(n->next == nullptr)
            break;
        else
            qoo[i] = n->data;
        ++i;
        n=n->next;
    }
    //do number's sorting
    for(i=0; i<count-1; ++i){
    	for(int j=0; j<count-1; ++j){
    		if (qoo[j] > qoo[j + 1])
				swap(qoo[j], qoo[j + 1]);
    	}
    }
	//insert numbers to temp
	for(i=0; i<count; ++i)
		insert(temp,qoo[i]);
	//print all temp
	pri(temp);
}
/*==============================================================*/
int length(Node* n){//find true length.
	int count=0;
	//find the true length.
	while(1){
		if(n->next != nullptr){
			n=n->next;
			++count;
		}
		else
			break;
	}
	return count;
}
/*==============================================================*/