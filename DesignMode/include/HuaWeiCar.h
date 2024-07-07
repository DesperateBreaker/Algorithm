#ifndef __HUAWEI_H__
#define __HUAWEI_H__

#include "Car.h"

// 华为类，实现了车辆接口。
class HuaweiCar : public Car {
public:
    HuaweiCar();
    virtual void Forward() override;
    virtual void Backward() override;
};

#endif // HUAWEI_H
