#ifndef __ABSTRACT_FACTORY_H__
#define __ABSTRACT_FACTORY_H__
#include "DesignModeHeader.h"

// 抽象工厂模式
class Factory
{
public:
    virtual std::unique_ptr<Car> createCar() = 0;           // 生产车的接口
    virtual std::unique_ptr<Phone> createPhone() = 0;       // 生产手机的接口
};

// 具体工厂类：华为工厂
class HuaweiFactory : public Factory {
public:
    std::unique_ptr<Car> createCar() override {
        return std::make_unique<HuaweiCar>();
    }

    std::unique_ptr<Phone> createPhone() override {
        return std::make_unique<HuaweiPhone>();
    }

};

// 具体工厂类：小米工厂
class XiaomiFactory : public Factory {
public:
    std::unique_ptr<Car> createCar() override {
        return std::make_unique<XiaomiCar>();
    }

    std::unique_ptr<Phone> createPhone() override {
        return std::make_unique<XiaomiPhone>();
    }
};


#endif // !__ABSTRACT_FACTORY_H__
