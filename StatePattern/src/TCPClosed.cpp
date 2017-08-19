#include "TCPState.h"
#include "TCPClosed.h"
#include "TCPConnection.h"
#include "TCPEstablished.h"

#include <iostream>
using namespace std;

TCPClosed* TCPClosed::_tcpClosed=0;

TCPClosed::TCPClosed(){}
TCPClosed::~TCPClosed(){}

TCPClosed* TCPClosed::getInstance(){

	cout << "TCPClosed state" << endl;
	if(_tcpClosed == 0) {
		_tcpClosed = new TCPClosed();
	}
	return _tcpClosed;
}

TCPState* TCPClosed::open(TCPConnection* conn){
	cout << "state change: TCPEstablished" << endl;
	TCPState* _state = TCPEstablished::getInstance();
	this->changeState(conn, _state);
	return _state;
}

TCPState* TCPClosed::close(TCPConnection* conn){
	cout << "quit" << endl;
	return TCPClosed::getInstance();
}


