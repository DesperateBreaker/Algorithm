#ifndef __SIMPLE_CAR_FACTORY_H__
#define __SIMPLE_CAR_FACTORY_H__

#include "DesignModeHeader.h"

// 简单工厂模式
class SimpleCarFactory {
public:
    static std::unique_ptr<Car> createCar(CarType nType_)
    {
        switch (nType_)
        {
        case CarType::HUAWEI:
            return std::make_unique<HuaweiCar>();
        case CarType::XIAOMI:
            return std::make_unique<XiaomiCar>();
        case CarType::TESLA:
            return std::make_unique<TeslaCar>();
        default:
            throw std::invalid_argument("Unknown car type");
        }
    }
};

#endif // __SIMPLE_CAR_FACTORY_H__