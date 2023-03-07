/*
наследование:
Птица - Орел
Музыкальный инструмент - Гитара
Аксессуар - Чехол для телефона

Интерфейс:
Операционная система - Интерфейс Операционной системы, 
Медиа-плеер - Интерфейс Медиа-плеера,
Интернет-браузер - Интерфейс Интернет-браузера
*/


#include <iostream>

class Engine {
public:
    Engine(int horsepower) : horsepower_(horsepower) {}
    void Start() const {
        std::cout << "Starting engine with " << horsepower_ << " horsepower" << std::endl;
    }
private:
    int horsepower_;
};

class Car {
public:
    Car(int year, const Engine& engine) : year_(year), engine_(engine) {}
    void Start() const {
        std::cout << "Starting car from year " << year_ << std::endl;
        engine_.Start();
    }
private:
    int year_;
    Engine engine_;
};

int main() {
    Engine engine(200);
    Car car(2020, engine);
    car.Start();
    return 0;
}