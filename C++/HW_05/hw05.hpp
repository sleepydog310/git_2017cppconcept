/*****************************************************************
Name : hw05
Date : 2017/02/11
By   : sleepydog310
Final: 2017/02/16
*****************************************************************/
#ifndef SOURCE_HPP
#define SOURCE_HPP
//----------------------------------------------------------------
// create Node
struct Node {
    int data;
    Node* next;
};
// print all
void pri(Node* n);

void start(Node* n);
void insert(Node* n,int num);
void del(Node*n,int pos);
void search(Node*n, Node* ll, int num);
void sort(Node* n, int count);
int length(Node* n);
void exchange(Node* n, int count);

//----------------------------------------------------------------
#endif