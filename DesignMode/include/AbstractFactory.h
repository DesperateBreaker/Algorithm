#ifndef __ABSTRACT_FACTORY_H__
#define __ABSTRACT_FACTORY_H__
#include "DesignModeHeader.h"

// ���󹤳�ģʽ
class Factory
{
public:
    virtual std::unique_ptr<Car> createCar() = 0;           // �������Ľӿ�
    virtual std::unique_ptr<Phone> createPhone() = 0;       // �����ֻ��Ľӿ�
};

// ���幤���ࣺ��Ϊ����
class HuaweiFactory : public Factory {
public:
    std::unique_ptr<Car> createCar() override {
        return std::make_unique<HuaweiCar>();
    }

    std::unique_ptr<Phone> createPhone() override {
        return std::make_unique<HuaweiPhone>();
    }

};

// ���幤���ࣺС�׹���
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
