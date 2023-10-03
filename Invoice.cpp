#include "Invoice.h"

Invoice::Invoice(std::string invoiceId) : invoiceId(invoiceId), dollarsOwed(0) {}

void Invoice::addServiceCost(int costDollars) {
    if (costDollars > 0) {
        dollarsOwed += costDollars;
    }
}

int Invoice::getDollarsOwed() const {
    return dollarsOwed;
}

std::string Invoice::getInvoiceId() const {
    return invoiceId;
}
