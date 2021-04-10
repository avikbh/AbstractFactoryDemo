#ifndef EMVWITHDRAWAL_H
#define EMVWITHDRAWAL_H
#include "iWithdrawal.h"
#include "iostream"
using namespace std;

class emvwithdrawal:  public iWithdrawal
{
public:
    emvwithdrawal();

    // iWithdrawal interface
private:
    void makePkt() override;
    void sendTxn() override;
};

#endif // EMVWITHDRAWAL_H
