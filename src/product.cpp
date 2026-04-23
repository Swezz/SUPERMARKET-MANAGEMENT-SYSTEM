#include "product.h"

Product::Product(int id, const std::string& name, double price, int stock)
    : id(id), name(name), price(price), stock(stock) {}

int Product::getId() const {
    return id;
}

std::string Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}

int Product::getStock() const {
    return stock;
}

void Product::setStock(int s) {
    stock = s;
}