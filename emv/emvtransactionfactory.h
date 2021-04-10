#ifndef EMVTRANSACTIONFACTORY_H
#define EMVTRANSACTIONFACTORY_H

#include "interfaces/iTransactionFactory.h"
#include "iostream"
#include "emvdeposit.h"
#include "emvwithdrawal.h"
using namespace std;


class emvtransactionfactory: public iTransactionFactory
{
public:
    emvtransactionfactory();

    // iTransactionFactory interface
    iDeposit *createDepositTransaction() override;
    iWithdrawal *createWithdrawalTransaction() override;
};

#endif // EMVTRANSACTIONFACTORY_H
