#ifndef __XIAOMI_H__
#define __XIAOMI_H__

#include "Car.h"

// С���࣬ʵ���˳����ӿ�
class XiaomiCar : public Car {
public:
    XiaomiCar();
    virtual void Forward() override;
    virtual void Backward() override;
};

#endif // XIAOMI_H
