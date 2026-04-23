#include <iostream>
#include "supermarket.h"
#include "customer.h"
#include "cashier.h"
using namespace std;

int main() {

    Supermarket store;
    store.loadInventory();

    Customer customer;
    Cashier cashier;

    int choice;

    cout << "\n========================================\n";
    cout << "       WELCOME TO FRESH MART            \n";
    cout << "========================================\n";

    do {
        cout << "\n-------- MAIN MENU --------\n";
        cout << "1. View Products\n";
        cout << "2. Add to Cart\n";
        cout << "3. View Cart\n";
        cout << "4. Checkout\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        try {
            if (choice == 1) {
                store.showProducts();
            }

            else if (choice == 2) {
                store.showProducts();

                int id, qty;
                cout << "\nEnter Product ID: ";
                cin >> id;

                Product* p = store.getProduct(id);
                if (!p) throw runtime_error("Product not found! Check the ID.");

                cout << "Enter quantity: ";
                cin >> qty;

                customer.addItem(*p, qty);
            }

            else if (choice == 3) {
                customer.showCart();
            }

            else if (choice == 4) {
                cashier.bill(customer);
                break;
            }

            else if (choice != 0) {
                cout << "Invalid choice! Enter 0-4.\n";
            }

        } catch (const exception &e) {
            cout << "\nError: " << e.what() << endl;
        }

    } while (choice != 0);

    cout << "\nThank you for visiting Fresh Mart!\n";
    return 0;
}
