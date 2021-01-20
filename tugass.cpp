#include <iostream>
using namespace std;


struct TNode{
    int data;
    TNode* next;
};

TNode *head;
void init(){
    head = NULL;
}
bool isEmpty(){
    return head == NULL;
}
void tambahDepan(int databaru){
    TNode *baru;
    baru = new TNode;
    baru->data = databaru;
    if (isEmpty()){
        baru->next = NULL;
        head = baru;
    } else {
        baru->next = head;
        head = baru;
    }
    cout<<"Data "<<databaru<<" ditambahkan"<<endl;
}
void tambahBelakang(int databaru){
		TNode *b,*bantu;
	b = new TNode;
	b->data = databaru;
	b->next = b;
	if(isEmpty()==1){
		head=b;
		head->next=head;
	}
	else {
		bantu = head;
	while(bantu->next != head){
		bantu=bantu->next;
	}
		bantu->next = b;
		b->next = head;
	}
	cout<<"Data masuk"<<endl;
}
    

void cetakList(){
    if (isEmpty()){
        cout<<"List masih kosong"<<endl;
    } else {
        TNode *bantu;
        bantu = new TNode;
        bantu = head;
        while (bantu != NULL){
            cout<<bantu->data<<endl;
            bantu = bantu->next;
        }
    }

}
int main(){
    init();
    for (int i=0;i<10;i++)
        tambahDepan(10 + i * 2);

    cetakList();
    return 0;
}

