class SocketServer
{
private:
	int portNumber;
	int socketfd, clientsocketfd;
	struct sockaddr_in serverAddress;
	struct sockaddr_in clientAddress;
	bool clientConnected;
public:
	SocketServer(int portNumber);
	virtual int listen();
	virtual int send(std::string message);
	virtual std::string receive(int size);
	virtual ~SocketServer();
};