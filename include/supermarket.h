#ifndef SUPERMARKET_H
#define SUPERMARKET_H

#include <vector>
#include "product.h"

class Supermarket {
private:
    std::vector<Product> inventory;

public:
    void loadInventory();
    void showProducts() const;
    Product* getProduct(int id);
};

#endif