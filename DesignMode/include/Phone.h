#ifndef __PHONE_H__
#define __PHONE_H__

// �����ֻ��Ļ�������
class Phone {
public:
    Phone();
    // ������������ȷ�����������ȷ����
    virtual ~Phone() {}

    // call
    virtual void Call() = 0;
};

// ��Ϊ�ֻ�
class HuaweiPhone : public Phone
{
public:
    HuaweiPhone();
    virtual void Call() override;
};

// ��Ϊ�ֻ�
class XiaomiPhone : public Phone
{
public:
    XiaomiPhone();
    virtual void Call() override;
};

#endif // !__PHONE_H__
