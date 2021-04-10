#ifndef EMVDEPOSIT_H
#define EMVDEPOSIT_H
#include "interfaces/iDeposit.h"
#include "iostream"
using namespace std;

class emvdeposit : public iDeposit
{
public:
    emvdeposit();

    // iDeposit interface
private:
    void makePkt() override;
    void sendTxn() override;
};

#endif // EMVDEPOSIT_H
