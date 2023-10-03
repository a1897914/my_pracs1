#ifndef INVOICETEST_H
#define INVOICETEST_H

// InvoiceTest.h

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        testGetDollarsOwed();
        testGetInvoiceId();
        
    }

private:
    void testAddServiceCost() {
         {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }
    }

    void testGetDollarsOwed() {
        Invoice invoice("ABCD");
        if (invoice.getDollarsOwed() != 0) {
            std::cout << "Test 3 failed!" << std::endl;
        }
        
        invoice.addServiceCost(10);
        if (invoice.getDollarsOwed() != 10) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }

    void testGetInvoiceId() {
        Invoice invoice("ABCD");
        if (invoice.getInvoiceId() != "ABCD") {
            std::cout << "Test 5 failed!" << std::endl;
        }
    }

};

#endif