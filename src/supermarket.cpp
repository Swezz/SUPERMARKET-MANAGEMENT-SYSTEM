#include "Supermarket.h"
#include <iostream>

void Supermarket::loadInventory() {
    inventory.emplace_back(1, "Apple", 20.50, 100);
    inventory.emplace_back(2, "Banana", 15.75, 150);
    inventory.emplace_back(3, "Orange", 25.00, 80);
    inventory.emplace_back(4, "Milk", 30.50, 50);
    inventory.emplace_back(5, "Bread", 35.50, 60);
    inventory.emplace_back(6, "Eggs", 4.00, 40);
    inventory.emplace_back(7, "Cheese", 55.00, 30);
    inventory.emplace_back(8, "Chicken", 98.00, 25);
    inventory.emplace_back(9, "Rice", 300.00, 70);
    inventory.emplace_back(10, "Pasta", 200.00, 90);
    inventory.emplace_back(11, "Tomato", 36.20, 120);
    inventory.emplace_back(12, "Potato", 10.80, 200);
    inventory.emplace_back(13, "Onion", 10.60, 180);
    inventory.emplace_back(14, "Carrot", 10.00, 100);
    inventory.emplace_back(15, "Lettuce", 25.50, 40);
}

void Supermarket::showProducts() const {
    std::cout << "\n--- PRODUCTS ---\n";
    for (const auto& p : inventory) {
        std::cout << p.getId() << ". " << p.getName() << " - Rs." << p.getPrice() << " (Stock: " << p.getStock() << ")\n";
    }
}

Product* Supermarket::getProduct(int id) {
    for (auto& p : inventory) {
        if (p.getId() == id) {
            return &p;
        }
    }
    return nullptr;
}