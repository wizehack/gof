#include "TCPState.h"
#include "TCPListen.h"
#include "TCPClosed.h"
#include "TCPConnection.h"

#include <iostream>

using namespace std;

TCPListen* TCPListen::_tcpListen = 0;

TCPListen::TCPListen(){}
TCPListen::~TCPListen(){}

TCPListen* TCPListen::getInstance() {
	cout << "TCPListen" << endl;
	if(_tcpListen == 0){
		_tcpListen = new TCPListen();
	}

	return _tcpListen;
}

void TCPListen::send(TCPConnection* conn){
	cout << "send ok" << endl;
}

void TCPListen::receive(TCPConnection* conn){
	cout << "receive ok" << endl;
}

TCPState* TCPListen::close(TCPConnection* conn){
	cout << "close ok" << endl;
	cout << "state change: TCPClosed" << endl;

	TCPState* _state = TCPClosed::getInstance();
	this->changeState(conn, _state);
	return _state;
}
