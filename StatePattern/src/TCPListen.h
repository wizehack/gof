#ifndef TCPLISTEN_H_
#define TCPLISTEN_H_

#include "TCPState.h"
#include "TCPConnection.h"

class TCPListen : public TCPState{
private:
	static TCPListen* _tcpListen;
protected:
	TCPListen();
public:
	~TCPListen();
	static TCPListen* getInstance();
	virtual void send(TCPConnection* conn);
	virtual void receive(TCPConnection* conn);
	virtual TCPState* close(TCPConnection* conn);
};

#endif /*TCPLISTEN_H_*/
