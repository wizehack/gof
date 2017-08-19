#ifndef TCPESTABLISHED_H_
#define TCPESTABLISHED_H_

#include "TCPState.h"
#include "TCPConnection.h"

class TCPEstablished : public TCPState{
private:
	static TCPEstablished* _tcpEstablished;
protected:
	TCPEstablished();
public:
	~TCPEstablished();
	static TCPEstablished* getInstance();
	virtual TCPState* transmit(TCPConnection* conn);
	virtual void getAck();
};

#endif /*TCPESTABLISHED_H_*/
