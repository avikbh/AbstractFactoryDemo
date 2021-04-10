TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        aadhaardeposit.cpp \
        aadhaartransactionfactory.cpp \
        aadhaarwithdrawal.cpp \
        emvdeposit.cpp \
        emvtransactionfactory.cpp \
        emvwithdrawal.cpp \
        main.cpp

HEADERS += \
    aadhaardeposit.h \
    aadhaartransactionfactory.h \
    aadhaarwithdrawal.h \
    emvdeposit.h \
    emvtransactionfactory.h \
    emvwithdrawal.h \
    iDeposit.h \
    iTransaction.h \
    iTransactionFactory.h \
    iWithdrawal.h
