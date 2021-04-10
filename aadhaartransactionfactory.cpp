#include "aadhaartransactionfactory.h"

aadhaarTransactionFactory::aadhaarTransactionFactory()
{

}


iDeposit *aadhaarTransactionFactory::createDepositTransaction()
{
    cout<<this<<" Aadhaar Transaction Factory: Create Deposit Transaction"<<endl;
    return new AadhaarDeposit();
}

iWithdrawal *aadhaarTransactionFactory::createWithdrawalTransaction()
{
    cout<<this<<" Aadhaar Transaction Factory: Create Withdrawal Transaction"<<endl;
    return new aadhaarwithdrawal();
}
