#include <iostream>
#include <fstream>
using namespace std;


int main(){
	int choose;
	string username , passward , pw,un;
	again:
	cout<<"1) register "<<endl;
	cout<<"2) sign in "<<endl;
	cin>>choose;
	
	if(choose == 1){
		
	cout<<"Enter username : ";
	cin>>username;
	cout<<"Enter passward : ";
	cin>>passward;
	
	ofstream logfile ("logfile.txt");
	logfile <<username<<endl<<passward;
	logfile.close();
		goto again;
	}

	string thefile;
	if(choose ==2){
		

	again2:
	cout<<"Enter username : ";
	cin>>username;
	cout<<"Enter passward : ";
	cin>>passward;
	
	ifstream logfile("logfile.txt");
	while(logfile>>un>>pw) {
	if(un==username and pw == passward){
			cout<<"You are seccssesfully logged in ";
	}
	

	else{
		cout<<"the username or the passward are wrong , please try again . "<<endl;
		goto again2;
	}}
	logfile.close();
}
}
