#include <iostream>
using namespace std;

int main() {
	int option;


	cout<<"1. Save information"<<endl;
	cout<<"2. Delete information"<<endl;
	cout<<"3. Edit information"<<endl;
	cout<<"4. Quit"<<endl;
	


	cout<<"Press one of the previous numbers: "<<flush;
	cin>>option;
	switch (option){
		case 1: 
			cout<<"Information saved"<<endl;
			break;
		case 2:
			cout<<"Information deleted"<<endl;
			break;
		case 3:
			cout<<"Information edited"<<endl;
			break;
		case 4:
			cout<<"QUITTING..."<<endl;
			break;
		default:
			cout<<"Unknown number entered"<<endl;
			break;
	}
	


	return 0;
}
