TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    aadhaar/aadhaardeposit.cpp \
    aadhaar/aadhaartransactionfactory.cpp \
    aadhaar/aadhaarwithdrawal.cpp \
    emv/emvdeposit.cpp \
    emv/emvtransactionfactory.cpp \
    emv/emvwithdrawal.cpp \
    main.cpp

HEADERS += \
    aadhaar/aadhaardeposit.h \
    aadhaar/aadhaartransactionfactory.h \
    aadhaar/aadhaarwithdrawal.h \
    emv/emvdeposit.h \
    emv/emvtransactionfactory.h \
    emv/emvwithdrawal.h \
    interfaces/iDeposit.h \
    interfaces/iTransaction.h \
    interfaces/iTransactionFactory.h \
    interfaces/iWithdrawal.h


