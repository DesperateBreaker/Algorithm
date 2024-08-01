#ifndef __CAR_H__
#define __CAR_H__

// 车类型
enum CarType
{
    NONE = -1,
    HUAWEI,
    XIAOMI,
    TESLA,
};

// 车辆接口定义了车辆应该支持的基本操作
class Car {
public:
    // 虚析构函数，确保派生类的正确清理
    virtual ~Car() {}

    // 前进
    virtual void Forward() = 0;

    // 后退
    virtual void Backward() = 0;

protected:
    int m_nBattery;         // 电池
};

#endif // CAR_H
