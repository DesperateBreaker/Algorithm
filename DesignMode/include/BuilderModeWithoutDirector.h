// 建造者模式(无需指挥者)
// 角色: 产品、Builder(抽象)、Builder(具体)
// 核心: 

#ifndef __BUILDER_WITHOUT_DIRECTOR_H__
#define __BUILDER_WITHOUT_DIRECTOR_H__
#include <string>

// 产品
class AComputer
{
public:
	AComputer();
	~AComputer();

	void SetCPU(std::string strCPU_);
	void SetGPU(std::string strGPU_);
	void SetMem(std::string strMem_);

	void Run();

private:
	std::string m_strCPU;
	std::string m_strGPU;
	std::string m_strMem;
};

// // 抽象的 builder
class ABuilder
{
public:
	ABuilder();
	~ABuilder();

	// builder 提供无序装配，返回自身可以进行链式调用
	virtual ABuilder* SetCPU(std::string strCPU_);
	virtual ABuilder* SetGPU(std::string strGPU_);
	virtual ABuilder* SetMem(std::string strMem_);

	virtual AComputer* CreatComputer() = 0;

protected:
	AComputer* m_pComputer;
};

// 自定义的 builder, 可以实现选配
class ACustomBuilder : public ABuilder
{
public:
	virtual AComputer* CreatComputer() override;
};


// 高配 builder
class ATopBuilder : public ABuilder
{
public:
	virtual AComputer* CreatComputer() override;
};

// 中配 builder
class AMediumBuilder : public ABuilder
{
public:
	virtual AComputer* CreatComputer() override;
};

#endif // !__BUILDER_WITHOUT_DIRECTOR_H__