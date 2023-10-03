#ifndef INVOICE_H
#define INVOICE_H


#include <string>

class Invoice {
public:
    Invoice(std::string invoiceId) : invoiceId(invoiceId), dollarsOwed(0) {}

    void addServiceCost(int costDollars) {
        if (costDollars > 0) {
            dollarsOwed += costDollars;
        }
    }

    int getDollarsOwed() const {
        return dollarsOwed;
    }

    std::string getInvoiceId() const {
        return invoiceId;
    }

private:
    std::string invoiceId;
    int dollarsOwed;
};

#endif