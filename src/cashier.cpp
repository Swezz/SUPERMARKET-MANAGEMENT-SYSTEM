#include "Cashier.h"
#include "Customer.h"
#include <iostream>

void Cashier::bill(Customer& customer) {
    std::cout << "\n--- CHECKOUT ---\n";
    customer.showCart();
    std::cout << "Payment processed. Thank you!\n";
    customer.clearCart();
}