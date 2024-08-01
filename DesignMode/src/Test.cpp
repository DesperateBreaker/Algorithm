#include "stdafx.h"
#include "SimpleCarFactory.h"
#include "FactoryMethod.h"
#include "AbstractFactory.h"
#include "BuilderMode.h"
#include "BuilderModeWithoutDirector.h"

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

    // ������ģʽ
    Builder* pBuilder = new TopBuilder();
    Director* pDirector = new Director();
    Computer* pComputer = pDirector->GetComputer(pBuilder);
    pComputer->Run();

    Builder* pBuilder2 = new MediumBuilder();
    Computer* pComputer2 = pDirector->GetComputer(pBuilder2);
    pComputer2->Run();

    // ������ģʽ(�Զ���)
    ABuilder* pBuilder3 = new ACustomBuilder();
    AComputer* pComputer3 = pBuilder3->CreatComputer();     // Ĭ��װ��
    pComputer3->Run();

    // ������ʽ���ã��Զ���װ�䣬Client �ͳ䵱��ԭ��ָ���ߵĽ�ɫ
    AComputer* pComputer4 = pBuilder3->SetCPU("i7-12700")->SetGPU("4080")->CreatComputer();
    pComputer4->Run();

    system("pause");

    return 0;
}