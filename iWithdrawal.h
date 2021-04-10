#ifndef IWITHDRAWAL_H
#define IWITHDRAWAL_H
class iWithdrawal{
    public:
    virtual void makePkt()=0;
    virtual void sendTxn()=0;
};

#endif // IWITHDRAWAL_H
