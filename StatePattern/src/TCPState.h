#ifndef TCPSTATE_H_
#define TCPSTATE_H_

#include "TCPConnection.h"

class TCPConnection;
class TCPState {
public:
	TCPState();
	virtual ~TCPState();

	virtual TCPState* transmit(TCPConnection* conn);
	virtual void getAck();
	virtual TCPState* open(TCPConnection* conn);
	virtual TCPState* close(TCPConnection* conn);
	virtual void send(TCPConnection* conn);
	virtual void receive(TCPConnection* conn);

protected:
	void changeState (TCPConnection *conn, TCPState *state);
};

#endif /*TCPSTATE_H_ */
