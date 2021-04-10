#ifndef ITRANSACTIONFACTORY_H
#define ITRANSACTIONFACTORY_H
#include "iDeposit.h"
#include "iWithdrawal.h"

class iTransactionFactory{
public:
    virtual iDeposit *createDepositTransaction()=0;
    virtual iWithdrawal *createWithdrawalTransaction()=0;
};

#endif // ITRANSACTIONFACTORY_H
