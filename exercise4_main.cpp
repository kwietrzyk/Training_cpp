#include "exercise4.h"
#include <iostream>

using namespace std;

int main()
{
MessageOK msg(9);
Signal* message = new MessageOK(2);
Signal* operation = new OperationFailed(4, 5.6, "Kasia");

receive(message);
receive(operation);
receive(&msg);
delete message;
delete operation;

return 0;
}
