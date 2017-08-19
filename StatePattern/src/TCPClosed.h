	#ifndef TCPCLOSED_H_
	#define TCPCLOSED_H_

	#include "TCPState.h"
	#include "TCPConnection.h"

	class TCPClosed : public TCPState{

	public:
		~TCPClosed();
		static TCPClosed* getInstance();
		virtual TCPState* open(TCPConnection* conn);
		virtual TCPState* close(TCPConnection* conn);

	protected:
		TCPClosed();

	private:
		static TCPClosed* _tcpClosed;

	};

	#endif /*TCPCLOSED_H_*/
