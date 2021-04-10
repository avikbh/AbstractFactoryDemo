#include <iostream>
#include "interfaces/iTransactionFactory.h"
#include "aadhaar/aadhaartransactionfactory.h"
#include "emv/emvtransactionfactory.h"
using namespace std;


int main()
{
    cout << "Hello World!" << endl;

//    iTransactionFactory *factory;
//    factory = new aadhaarTransactionFactory();
//    factory->createDepositTransaction()->makePkt();

    iDeposit *deposit;
    aadhaarTransactionFactory factory;

    deposit=factory.createDepositTransaction();
    deposit->makePkt();
    deposit->sendTxn();

    return 0;
}
