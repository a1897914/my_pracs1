#ifndef INVOICE_H
#define INVOICE_H



#include <string>

class Invoice {
public:
    Invoice(std::string invoiceId);

    void addServiceCost(int costDollars);

    int getDollarsOwed() const;

    std::string getInvoiceId() const;

private:
    std::string invoiceId;
    int dollarsOwed;
};


#endif