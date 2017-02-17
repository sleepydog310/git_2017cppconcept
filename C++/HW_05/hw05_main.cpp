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
	cout << "創建初始list" << endl;
	start(list);
	pri(list);
	//
	cout << "插入99" << endl;
	insert(list,99);
	cout << "插入88" << endl;
	insert(list,88);
	pri(list);
	//
	cout << "刪除第五個數" << endl;
	del(list,5);
	pri(list);
	//
	cout << "搜尋是否存在-1" << endl;
	search(list,temp,-1);
	cout << "搜尋是否存在99" << endl;
	search(list,temp,99);
	cout << "搜尋是否存在88" << endl;
	search(list,temp,88);
	//
	cout << "排序,由小到大,但不更改原本的list" << endl;
	sort(list,length(list));
	pri(list);


	return 0;
}//end_main
/*==============================================================*/