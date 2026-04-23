#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    int id;
    std::string name;
    double price;
    int stock;

public:
    Product(int id, const std::string& name, double price, int stock);
    int getId() const;
    std::string getName() const;
    double getPrice() const;
    int getStock() const;
    void setStock(int s);
};

#endif