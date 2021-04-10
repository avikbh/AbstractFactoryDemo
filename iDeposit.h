#ifndef IDEPOSIT_H
#define IDEPOSIT_H
#include <iostream>
class iDeposit{
    public:
    virtual void makePkt()=0;
    virtual void sendTxn()=0;
};

#endif // IDEPOSIT_H
