#include <iostream>

using namespace std;

struct Element {
    int data;
    Element *list;
};

Element *top = NULL;
bool isEmpty(){
	if(top==NULL)
	return true;
	else
	return false;
	}
	
    void push(int input){
       Element *p = new Element;
       p->data= input;
       p->list=top;
       top=p;
       
    }
    void pop (){
    	if (isEmpty()){
    		cout<<" \t stack is empty ";
		}else{
			Element *p = top;
			top= top-> list;
			delete(p);
		}
	}
	void print (){
		if (isEmpty())
			cout<<"\t stack is empty ";
			else{
				Element *tmp = top;
				while ( tmp !=NULL){
					cout<<"\t"<<tmp->data;
					tmp=tmp->list;
					cout<<"  ";

				}
			}
	}


void pilih (){
	int pilihan,input;
cout<<"Rahmadila Nurjannah \n";
cout<<"1817051038\n";
cout<<"===================STACK=======================\n\n";
cout<<"\t\t silahkan pilih\n";
cout<<"\t1. input data \n";
cout<<"\t2. hapus data \n";
cout<<"\t3. tampilkan semua data \n";
cout<<"\t4. keluar\n";
cout<<"\t------------------------------\n";
cout<<"\tmasukkan pilihan "; cin>>pilihan;
switch(pilihan){
	case 1 : cout<<"\n\tmasukkan data ";	cin>>input;
			push(input);
			cout<<"\tdata masuk\n";
			system("pause");
			break;
	case 2 : pop();
			cout<<"\tdata terhapus\n";
			system("pause");
			break;
	case 3 :cout<<"\n\t===== isi stack =====\n";
			print ();
			cout<<"\n";
			system("pause");
			break;
	case 4: exit (0);
			break;
	default :cout<<"kode salah\n";
			 exit (0);
}
	system("cls");

}
int main (){
	char tanya;
pilih();

cout<<" [tekan sebuah karakter]?\n";
	cin>>tanya;
	while(tanya!='\0'){
		pilih();
	}

return 0;

		}  
