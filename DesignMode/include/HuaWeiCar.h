#ifndef __HUAWEI_H__
#define __HUAWEI_H__

#include "Car.h"

// ��Ϊ�࣬ʵ���˳����ӿڡ�
class HuaweiCar : public Car {
public:
    HuaweiCar();
    virtual void Forward() override;
    virtual void Backward() override;
};

#endif // HUAWEI_H
