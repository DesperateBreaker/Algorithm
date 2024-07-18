// 建造者模式
// 角色: 产品、Builder(抽象)、Builder(具体)、Director
// 核心: 指挥者指挥不同的 builder 来构建不同的 product，不同的 builder 拥有不同的构建方法

#ifndef __BUILDER_H__
#define __BUILDER_H__
#include <string>

// 产品
class Computer
{
public:
	Computer();
	~Computer();

	void SetCPU(std::string strCPU_);
	void SetGPU(std::string strGPU_);
	void SetMem(std::string strMem_);

	void Run();

private:
	std::string m_strCPU;
	std::string m_strGPU;
	std::string m_strMem;
};
// 抽象的 builder
class Builder
{
public:
	Builder();
	~Builder();

	virtual Computer* CreatComputer() = 0;

protected:
	Computer* m_pComputer;
};

// 高配 builder
class TopBuilder : public Builder
{
public:
	virtual Computer* CreatComputer() override;
};

// 中配 builder
class MediumBuilder : public Builder
{
public:
	virtual Computer* CreatComputer() override;
};

// Director
class Director
{
public:
	Director();
	Computer* GetComputer(Builder* pBuilder_);
};

#endif // !__BUILDER_H__