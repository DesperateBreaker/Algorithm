#ifndef __XIAOMI_H__
#define __XIAOMI_H__

#include "Car.h"

// 小米类，实现了车辆接口
class XiaomiCar : public Car {
public:
    XiaomiCar();
    virtual void Forward() override;
    virtual void Backward() override;
};

#endif // XIAOMI_H
