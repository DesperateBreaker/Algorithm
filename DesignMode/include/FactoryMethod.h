#ifndef __FACTORY_METHOD_H__
#define __FACTORY_METHOD_H__
#include "DesignModeHeader.h"

// 工厂方法模式
class CarFactory
{
public:
    virtual std::unique_ptr<Car> createCar() = 0;
};

// 具体工厂类：华为汽车工厂
class HuaweiCarFactory : public CarFactory {
public:
    std::unique_ptr<Car> createCar() override {
        return std::make_unique<HuaweiCar>();
    }
};

// 具体工厂类：小米汽车工厂
class XiaomiCarFactory : public CarFactory {
public:
    std::unique_ptr<Car> createCar() override {
        return std::make_unique<XiaomiCar>();
    }
};

// 具体工厂类：特斯拉汽车工厂
class TeslaCarFactory : public CarFactory {
public:
    std::unique_ptr<Car> createCar() override {
        return std::make_unique<TeslaCar>();
    }
};

#endif // !__FACTORY_METHOD_H__
