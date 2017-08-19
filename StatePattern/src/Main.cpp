#include "TCPConnection.h"

int main() {
	TCPConnection *conn = new TCPConnection();

	conn->open();
	conn->transmit();
	conn->send();
	conn->receive();
	conn->close();

	delete conn;	
	return 0;
}

