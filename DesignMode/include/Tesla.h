#ifndef __TESLA_H__
#define __TESLA_H__

#include "Car.h"

// 特斯拉类，实现了车辆接口
class TeslaCar : public Car {
public:
    TeslaCar();
    virtual void Forward() override;
    virtual void Backward() override;
};

#endif // TESLA_H