#ifndef __TESLA_H__
#define __TESLA_H__

#include "Car.h"

// ��˹���࣬ʵ���˳����ӿ�
class TeslaCar : public Car {
public:
    TeslaCar();
    virtual void Forward() override;
    virtual void Backward() override;
};

#endif // TESLA_H