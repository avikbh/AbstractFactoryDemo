#include "emvtransactionfactory.h"

emvtransactionfactory::emvtransactionfactory()
{

}


iDeposit *emvtransactionfactory::createDepositTransaction()
{
    cout<<this<<" EMV Transaction Factory: Create Deposit Transaction"<<endl;
    return new emvdeposit();
}

iWithdrawal *emvtransactionfactory::createWithdrawalTransaction()
{
    cout<<this<<" EMV Transaction Factory: Create Withdrawal Transaction"<<endl;
    return new emvwithdrawal();
}
