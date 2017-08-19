#include "TCPConnection.h"
#include "TCPState.h"
#include "TCPClosed.h"
#include <iostream>
using namespace std;

TCPConnection::TCPConnection(){
	_state = TCPClosed::getInstance();
}

TCPConnection::~TCPConnection(){}

void TCPConnection::changeState(TCPState* state){
	_state = state;
}

void TCPConnection::open(){
	cout << "TCPConnection: open() is called" << endl;
	_state = _state->open(this);
}

void TCPConnection::close(){
	cout << "TCPConnection: close() is called" << endl;
	_state = _state->close(this);
}

void TCPConnection::transmit(){
	cout << "TCPConnection: transmit() is called" << endl;
	_state = _state->transmit(this);
}

void TCPConnection::send(){
	cout << "TCPConnection: send() is called" << endl;
	_state->send(this);
}

void TCPConnection::receive(){
	cout << "TCPConnection: receive() is called" << endl;
	_state->receive(this);
}

