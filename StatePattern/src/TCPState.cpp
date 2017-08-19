#include "TCPState.h"
#include "TCPConnection.h"

using namespace std;

TCPState::TCPState(){}
TCPState::~TCPState(){}

TCPState* TCPState::transmit(TCPConnection *conn){return 0;}
void TCPState::getAck(){}
TCPState* TCPState::open(TCPConnection *conn){return 0;}
TCPState* TCPState::close(TCPConnection *conn){return 0;}
void TCPState::send(TCPConnection *conn){}
void TCPState::receive(TCPConnection *conn){}

void TCPState::changeState(TCPConnection *conn, TCPState *state){
	conn->changeState(state);
}


