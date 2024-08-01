#ifndef __PHONE_H__
#define __PHONE_H__

// 定义手机的基本操作
class Phone {
public:
    Phone();
    // 虚析构函数，确保派生类的正确清理
    virtual ~Phone() {}

    // call
    virtual void Call() = 0;
};

// 华为手机
class HuaweiPhone : public Phone
{
public:
    HuaweiPhone();
    virtual void Call() override;
};

// 华为手机
class XiaomiPhone : public Phone
{
public:
    XiaomiPhone();
    virtual void Call() override;
};

#endif // !__PHONE_H__
