/*****************************************************************
Name : hw05
Date : 2017/02/11
By   : sleepydog310
Final: 2017/02/16
*****************************************************************/
#include <iostream>
#include <time.h>
#include "hw05.cpp"
#include "hw05.hpp"

using namespace std;

/*==============================================================*/
int main(int argc, char const *argv[]){
	srand(time(NULL));
	//create Node and temp Node.
	Node* list = new Node;
	Node* temp = new Node;
	//create the list
	cout << "�Ыت�llist" << endl;
	start(list);
	pri(list);
	//
	cout << "���J99" << endl;
	insert(list,99);
	cout << "���J88" << endl;
	insert(list,88);
	pri(list);
	//
	cout << "�R���Ĥ��Ӽ�" << endl;
	del(list,5);
	pri(list);
	//
	cout << "�j�M�O�_�s�b-1" << endl;
	search(list,temp,-1);
	cout << "�j�M�O�_�s�b99" << endl;
	search(list,temp,99);
	cout << "�j�M�O�_�s�b88" << endl;
	search(list,temp,88);
	//
	cout << "�Ƨ�,�Ѥp��j,�������쥻��list" << endl;
	sort(list,length(list));
	pri(list);


	return 0;
}//end_main
/*==============================================================*/