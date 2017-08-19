#include "TCPState.h"
#include "TCPConnection.h"
#include "TCPEstablished.h"
#include "TCPListen.h"

#include <iostream>
using namespace std;

TCPEstablished* TCPEstablished::_tcpEstablished(0);

TCPEstablished::TCPEstablished(){}
TCPEstablished::~TCPEstablished(){}

TCPEstablished* TCPEstablished::getInstance(){

	cout << "TCPEstablished" << endl;
	if(_tcpEstablished == 0) {
		_tcpEstablished = new TCPEstablished();
	}
	return _tcpEstablished;
}

TCPState* TCPEstablished::transmit(TCPConnection* conn){
	// transmit....
	TCPEstablished::getAck();
	cout << "state change: TCPListen" << endl;
	TCPState* _state = TCPListen::getInstance();

	this->changeState(conn, _state);
	return _state;
}

void TCPEstablished::getAck(){
	cout << "ACK" << endl;
}

