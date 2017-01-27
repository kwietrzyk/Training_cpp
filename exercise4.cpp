#include "exercise4.h"
#include <iostream>

using namespace std;

void receive(Signal* signal)
{
switch (signal->sigNo)
{
case MESSAGE_OK:
{
MessageOK* message= static_cast<MessageOK*>(signal);
cout<<"Message OK "<< message->param <<endl;
break;}

case OPERATION_FAILED:
{
OperationFailed* operation= static_cast<OperationFailed*>(signal);
cout<<"Operation failed"<<" "<< operation->a <<" "<< operation->b <<" "<< operation->c <<endl;	
break;}

default:
cout<<"Invalid signal"<<endl;
break;
}

}
