#include "customer.h"
#include <iostream>

void Customer::addItem(const Product& p, int qty) {
    cart.push_back({p, qty});
}

void Customer::showCart() const {
    if (cart.empty()) {
        std::cout << "Your cart is empty.\n";
        return;
    }
    std::cout << "\n--- YOUR CART ---\n";
    double total = 0.0;
    for (const auto& item : cart) {
        const Product& p = item.first;
        int qty = item.second;
        double itemTotal = p.getPrice() * qty;
        std::cout << p.getName() << " x" << qty << " = Rs." << itemTotal << "\n";
        total += itemTotal;
    }
    std::cout << "Total: Rs." << total << "\n";
}

const std::vector<std::pair<Product, int>>& Customer::getCart() const {
    return cart;
}

void Customer::clearCart() {
    cart.clear();
}