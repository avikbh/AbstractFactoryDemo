#ifndef AADHAARDEPOSIT_H
#define AADHAARDEPOSIT_H
#include "iDeposit.h"
#include "iostream"
using namespace std;

class AadhaarDeposit : public iDeposit
{
public:
    AadhaarDeposit();

    // iDeposit interface
private:
    void makePkt() override;
    void sendTxn() override;
};

#endif // AADHAARDEPOSIT_H
