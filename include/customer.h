#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <vector>
#include <utility>
#include "product.h"

class Customer {
private:
    std::vector<std::pair<Product, int>> cart;

public:
    void addItem(const Product& p, int qty);
    void showCart() const;
    const std::vector<std::pair<Product, int>>& getCart() const;
    void clearCart();
};

#endif