#include <iostream>
#include "network/SocketClient.h"
using namespace std;
using namespace exploringRPi;

int main(int argc,char argv[])
{
	if(argc!=2){
		cout<<"incorrect usage : "<<endl;
		cout<<" clint server name"<<end;
		return 2;
	}
	cout<<"Starting RPi Client Example"<,endl;
	SocketClient sc(argv[1],54321);
	sc.connectToServer();
	string message("Hello from the client");
	cout<<"Sending ["<<message<<"]"<<endl;
	sc.send(message);
	string rec = sc.receive(1024);
	cout<<"Received ["<<rec<<"]"<<endl;
	cout<<"End RPi Client Example"<<endl;
	return 0;
}