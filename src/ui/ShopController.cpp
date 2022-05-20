//
// Created by tuddy on 20-May-22.
//

#include "ShopController.h"
#include "exceptions/ui_exception.h"

ShopController::ShopController(ProductService &service) : service(service) {}

Product ShopController::readProduct() {
    Product p;
    cin >> p;

    validateInputStream(cin);

    return p;
}

void ShopController::addProduct() {
    try{
        Product p = readProduct();
        service.add(p);
    }
    catch (custom_exception& e){
        cout << "Couldn't add product: " << endl << e.what() << endl;
        return;
    }
}

void ShopController::getAllProducts() {
    try{
        for(auto& p: service.getAll()){
            cout << p << endl;
        }
    }
    catch (custom_exception& e){
        cout << "Couldn't get all products: " << endl << e.what() << endl;
        return;
    }
}

void ShopController::getProductPriceAverage() {

    try{
        double avg = service.getPriceAverage();

        cout << "Price average: " << avg << endl;
    }
    catch (custom_exception& e){
        cout << "Couldn't calculate average: " << e.what() << endl;
        return;
    }
}



void ShopController::runMenu() {
    char option = 0;
    bool keepRunning = true;

    try{
        while(keepRunning){
            printOptions();
            validateInputStream(cin >> option);

            switch (option) {
                case '1': {
                    addProduct();
                    break;
                }
                case '2': {
                    getAllProducts();
                    break;
                }
                case '3': {
                    getProductPriceAverage();
                    break;
                }
                case 'x': {
                    keepRunning = false;
                    break;
                }
                default:{
                    keepRunning = false;
                    throw ui_exception("Invalid menu option!");
                }
            }
        }
    }
    catch(custom_exception& e){
        cout << "Run menu aborted: " << e.what() << endl;
        return;
    }

}

void ShopController::printOptions() {
    cout << "1. Add product (id, name, price)" << endl;
    cout << "2. Get all products" << endl;
    cout << "3. Get product price average" << endl;
    cout << "x. Exit" << endl;
}

void ShopController::validateInputStream(istream &is) {
    if(!is.good()){
        is.clear();
        is.ignore(numeric_limits<streamsize>::max(), '\n');
        throw ui_exception("Invalid input!");
    }
}
