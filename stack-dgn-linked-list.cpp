#include <iostream>
using namespace std;
typedef struct{
	string no[11], nama[11], posisi[11];
	int bos=1;int tos=0;
}stack_bola;
stack_bola bola;

bool emptyStack(stack_bola X){
	if(X.tos==0){
		return true;
	}
	else{
		return false;
	}
}
bool fullStack(stack_bola X){
	if(X.tos==10){
		return true;
	}
	else{
		return false;
	}
}
void Push_Stack(stack_bola &X){

	cout<<"Data Pemain Bola"<<endl;
	cout<<"-----------------------------------"<<endl;
	X.tos++;
	cout<<"No.Punggung: ";cin>>X.no[X.tos];
	cout<<"Nama: ";cin>>X.nama[X.tos];
	cout<<"Posisi: ";cin>>X.posisi[X.tos];
	
}

void Pop_Stack(stack_bola &X){
	X.tos--;
}
void Print_Stack(stack_bola X){
	cout<<"Isi Stack"<<endl;
	cout<<"--------------------------------------"<<endl;
	for(int i=X.tos;i>=X.bos;i--){
		cout<<X.no[i]<<"->"<<X.nama[i]<<"->"<<X.posisi[i]<<endl;
	}
}


int main(){
	int pil=0;
	do{
		cout<<"\n----------------------------------------------------------------------------"<<endl;
		cout<<"\n\t\t\tSTACK MENGGUNAKAN LINKED LIST"<<endl;
		cout<<endl;
		cout<<"\n1:PUSH"<<endl;
		cout<<"2:POP"<<endl;
		cout<<"3:TAMPIL"<<endl;
		cout<<"4:EXIT"<<endl;
		cout<<"PILIH(1-4): ";cin>>pil;
		switch(pil){
			case 1:{
				if(fullStack(bola)){
				cout<<"Stack penuh!"<<endl;
			}
			else{
				Push_Stack(bola);
			}
				break;
			}
			case 2:{
				if(emptyStack(bola)){
				cout<<"Stack kosong!"<<endl;
			}
			else{
				Pop_Stack(bola);
			}
				break;
			}
			case 3:{
				if(emptyStack(bola)){
				cout<<"Stack kosong!";
			}
			else{
				Print_Stack(bola);
			}
				break;
			}
			
			case 4:{
				break;
			}
			default:cout<<"salah pilih menu"<<endl;
		}
	}
	while(pil!=4);
} 
