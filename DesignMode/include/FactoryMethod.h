#ifndef __FACTORY_METHOD_H__
#define __FACTORY_METHOD_H__
#include "DesignModeHeader.h"

// ��������ģʽ
class CarFactory
{
public:
    virtual std::unique_ptr<Car> createCar() = 0;
};

// ���幤���ࣺ��Ϊ��������
class HuaweiCarFactory : public CarFactory {
public:
    std::unique_ptr<Car> createCar() override {
        return std::make_unique<HuaweiCar>();
    }
};

// ���幤���ࣺС����������
class XiaomiCarFactory : public CarFactory {
public:
    std::unique_ptr<Car> createCar() override {
        return std::make_unique<XiaomiCar>();
    }
};

// ���幤���ࣺ��˹����������
class TeslaCarFactory : public CarFactory {
public:
    std::unique_ptr<Car> createCar() override {
        return std::make_unique<TeslaCar>();
    }
};

#endif // !__FACTORY_METHOD_H__
