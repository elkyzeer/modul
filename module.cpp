#include <iostream>

// Клас, який має метод brewCoffee()
class CoffeeMaker {
public:
    void brewCoffee() {
        std::cout << "Brewing coffee..." << std::endl;
    }
};

// Клас, який має метод brewTea()
class TeaMaker {
public:
    void brewTea() {
        std::cout << "Brewing tea..." << std::endl;
    }
};

// Інтерфейс, який використовується в CoffeeMaker, але потрібно адаптувати до TeaMaker
class TeaAdapter : public CoffeeMaker {
private:
    TeaMaker teaMaker;

public:
    // Перевизначення методу brewCoffee() для виклику методу brewTea() через адаптер
    void brewCoffee() override {
        teaMaker.brewTea();
    }
};

int main() {
    // Створення екземплярів класів
    CoffeeMaker coffeeMaker;
    TeaAdapter teaAdapter;

    // Виклик методу brewCoffee() через CoffeeMaker
    coffeeMaker.brewCoffee();

    // Виклик того ж методу через адаптер для TeaMaker
    teaAdapter.brewCoffee();

    return 0;
}
