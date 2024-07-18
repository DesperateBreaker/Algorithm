// ������ģʽ
// ��ɫ: ��Ʒ��Builder(����)��Builder(����)��Director
// ����: ָ����ָ�Ӳ�ͬ�� builder ��������ͬ�� product����ͬ�� builder ӵ�в�ͬ�Ĺ�������

#ifndef __BUILDER_H__
#define __BUILDER_H__
#include <string>

// ��Ʒ
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
// ����� builder
class Builder
{
public:
	Builder();
	~Builder();

	virtual Computer* CreatComputer() = 0;

protected:
	Computer* m_pComputer;
};

// ���� builder
class TopBuilder : public Builder
{
public:
	virtual Computer* CreatComputer() override;
};

// ���� builder
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