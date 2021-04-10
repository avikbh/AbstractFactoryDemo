#include <iostream>
#include "iTransactionFactory.h"
#include "aadhaartransactionfactory.h"
#include "emvtransactionfactory.h"
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
