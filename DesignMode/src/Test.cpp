#include "stdafx.h"
#include "SimpleCarFactory.h"
#include "FactoryMethod.h"
#include "AbstractFactory.h"

int main() {
    // �򵥹���ģʽ����
    std::unique_ptr<Car> pCar = SimpleCarFactory::createCar(CarType::HUAWEI);
    pCar->Backward();

    // ��������ģʽ����
    CarFactory* pFactory = new HuaweiCarFactory();
    std::unique_ptr<Car> pCar2 = pFactory->createCar();
    pCar2->Backward();

    // ���󹤳�����
    Factory* pHuaWeiFactory = new HuaweiFactory();
    std::unique_ptr<Car> pCar3 = pHuaWeiFactory->createCar();
    std::unique_ptr<Phone> pPhone3 = pHuaWeiFactory->createPhone();
    pCar3->Backward();
    pPhone3->Call();

    Factory* pXiaoMiFactory = new XiaomiFactory();
    std::unique_ptr<Car> pCar4 = pXiaoMiFactory->createCar();
    std::unique_ptr<Phone> pPhone4 = pXiaoMiFactory->createPhone();
    pCar4->Backward();
    pPhone4->Call();


    
    system("pause");

    return 0;
}