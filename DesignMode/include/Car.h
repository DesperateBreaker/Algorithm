#ifndef __CAR_H__
#define __CAR_H__

// ������
enum CarType
{
    NONE = -1,
    HUAWEI,
    XIAOMI,
    TESLA,
};

// �����ӿڶ����˳���Ӧ��֧�ֵĻ�������
class Car {
public:
    // ������������ȷ�����������ȷ����
    virtual ~Car() {}

    // ǰ��
    virtual void Forward() = 0;

    // ����
    virtual void Backward() = 0;

protected:
    int m_nBattery;         // ���
};

#endif // CAR_H
