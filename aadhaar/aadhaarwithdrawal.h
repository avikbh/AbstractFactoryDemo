#ifndef AADHAARWITHDRAWAL_H
#define AADHAARWITHDRAWAL_H
#include "interfaces/iWithdrawal.h"
#include "iostream"
using namespace std;

class aadhaarwithdrawal : public iWithdrawal
{
public:
    aadhaarwithdrawal();

    // iWithdrawal interface
private:
    void makePkt() override;
    void sendTxn() override;
};

#endif // AADHAARWITHDRAWAL_H
