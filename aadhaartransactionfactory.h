#ifndef AADHAARTRANSACTIONFACTORY_H
#define AADHAARTRANSACTIONFACTORY_H
#include "iTransactionFactory.h"
#include "iostream"
#include "aadhaardeposit.h"
#include "aadhaarwithdrawal.h"
using namespace std;

class aadhaarTransactionFactory: public iTransactionFactory
{
public:
    aadhaarTransactionFactory();

    // iTransactionFactory interface
    iDeposit *createDepositTransaction() override;
    iWithdrawal *createWithdrawalTransaction() override;
};

#endif // AADHAARTRANSACTIONFACTORY_H
