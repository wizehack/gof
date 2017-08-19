#include "ChatMediator.h"
#include "User.h"
#include <iostream>

int main()
{
  ChatMediator* mChatMediator = new ChatMediator();

  User* mUser1 = new User(mChatMediator, "윤현상");
  User* mUser2 = new User(mChatMediator, "정동환");
  User* mUser3 = new User(mChatMediator, "김병기");

  mChatMediator->appendUser(mUser1);
  mChatMediator->appendUser(mUser2);
  mChatMediator->appendUser(mUser3);

  mUser1->sendMessages("하이");
  std::cout << "-------------------------------------------" << std::endl;

  mChatMediator->removeUser(mUser1);
  mChatMediator->removeUser(mUser3);

  delete mChatMediator;
  delete mUser1;
  delete mUser2;
  delete mUser3;
  return 0;
}
