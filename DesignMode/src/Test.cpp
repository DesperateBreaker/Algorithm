#include "../include/stdafx.h"
#include "../include/SimpleCarFactory.h"

int main() {
    std::unique_ptr<Car> pCar = SimpleCarFactory::createCar(CarType::HUAWEI);
    pCar->Backward();

    
}