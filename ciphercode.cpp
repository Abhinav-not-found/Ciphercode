//Cipher encryption for single character program
#include<iostream>
using namespace std;
void encryption();
void decryption();
void menu(){
	int ch;
	cout<<"\tWhat would you like to do?"<<endl;
	cout<<"\t1...Encryption"<<endl;
	cout<<"\t2...Decryption"<<endl;
	cout<<"\tEnter your choice: ";
	cin>>ch;
	(ch==1)?encryption():decryption();
}
void encryption(){
	cout<<"\n"<<"\n............ENCRYPTION..............."<<endl;
	int k,t1,t2,C;
	char p,t3;
	cout<<"\tEnter the key(1-9):";
	cin>>k;
	t1=(int)k;
	
	cout<<"\tEnter a single character: ";
	cin>>p;
	t2=(int) p;//changes to ascii code
	t2=t2-97;//a=0
//	cout<<"a/c to cipher table: "<<p<<"="<<t2<<endl;
	C=t1+t2;
//	cout<<"after calculation: "<<p<<"="<<C<<endl;
	C=C+97;
	t3=(char)C;
	cout<<"\tThe encrypted code is : "<<t3;
	encryption();
}
void decryption(){
	int k,t1,t2,D;
	char p,t3;
	cout<<"\n"<<"............DECRYPTION..............."<<endl;
	cout<<"\tEnter the single character: ";
	cin>>p;
	cout<<"\tEnter the key(1-9): ";
	cin>>k;
	t1=(int)p;
	t2=(int)k;
	t1=t1+97;
	D=t1-t2;
	D=D-97;
	t3=(char)D;
	cout<<"\tDecrypted code: "<<t3;
	decryption();
}
int main(){
menu();
return 0;
}
