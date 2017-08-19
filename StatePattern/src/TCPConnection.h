#ifndef TCPCONNECTION_H_
#define TCPCONNECTION_H_

#include "TCPState.h"

class TCPState;
class TCPConnection {
public: 
	TCPConnection();
	~TCPConnection();

	void open();
	void close();
	void transmit();
	void send();
	void receive();

private:
	friend class TCPState;
	void changeState(TCPState* state);

private:
	TCPState* _state;
};

#endif /* TCPCONNECTION_H_ */
