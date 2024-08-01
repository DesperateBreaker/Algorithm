#include "stdafx.h"
#include "SimpleCarFactory.h"
#include "FactoryMethod.h"
#include "AbstractFactory.h"
#include "BuilderMode.h"
#include "BuilderModeWithoutDirector.h"

int main() {
    // 简单工厂模式测试
    std::unique_ptr<Car> pCar = SimpleCarFactory::createCar(CarType::HUAWEI);
    pCar->Backward();

    // 工厂方法模式测试
    CarFactory* pFactory = new HuaweiCarFactory();
    std::unique_ptr<Car> pCar2 = pFactory->createCar();
    pCar2->Backward();

    // 抽象工厂测试
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

    // 建造者模式
    Builder* pBuilder = new TopBuilder();
    Director* pDirector = new Director();
    Computer* pComputer = pDirector->GetComputer(pBuilder);
    pComputer->Run();

    Builder* pBuilder2 = new MediumBuilder();
    Computer* pComputer2 = pDirector->GetComputer(pBuilder2);
    pComputer2->Run();

    // 建造者模式(自定义)
    ABuilder* pBuilder3 = new ACustomBuilder();
    AComputer* pComputer3 = pBuilder3->CreatComputer();     // 默认装配
    pComputer3->Run();

    // 利用链式调用，自定义装配，Client 就充当了原有指挥者的角色
    AComputer* pComputer4 = pBuilder3->SetCPU("i7-12700")->SetGPU("4080")->CreatComputer();
    pComputer4->Run();

    system("pause");

    return 0;
}