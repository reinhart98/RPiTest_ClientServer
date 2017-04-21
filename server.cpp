#include <iostream>
#include "network/SocketServer.h"
using namespace std;
using namespace exploringRPi;

int main(int argc, char *argv[])
{
	cout<<"stating RPi Server Example"<<endl;
	SocketServer server(54321);
	server.listen();
	string rec = server.receive(1024);
	cout<<"received from the client ["<<rec<<"]" <<endl;
	string message("the server say thanks");
	cout<<"sending back ["<< message <<"]"<<endl;
	server.send(message);
	cout<<"end of RPi server examle"<<endl;
	return 0;
}