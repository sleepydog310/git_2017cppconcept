亂數的使用
http://dhcp.tcgs.tc.edu.tw/c/p005.html

cout 輸出你要的字
http://it-easy.tw/cout/

在做insert的副程式時
//do insert
	else{
		Node* qoo = new Node;
		qoo->data = num;
		qoo->next = new Node;
		//do loop and move the list until we find the position
		for(i=1;i<pos;++i)
			n = n->next;
		//insert the new number
		ll = n->next;
		n->next = qoo;
		n = n->next;
		//start exchange
		for(int j=pos+1;j<=limit+1;++j){
			qoo = n->next;
			n->next = ll;
			ll = qoo;
			n = n->next;
		}
	}
會產生01的結果

/*==============================================================*/

