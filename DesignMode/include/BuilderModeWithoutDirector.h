// ������ģʽ(����ָ����)
// ��ɫ: ��Ʒ��Builder(����)��Builder(����)
// ����: 

#ifndef __BUILDER_WITHOUT_DIRECTOR_H__
#define __BUILDER_WITHOUT_DIRECTOR_H__
#include <string>

// ��Ʒ
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

// // ����� builder
class ABuilder
{
public:
	ABuilder();
	~ABuilder();

	// builder �ṩ����װ�䣬����������Խ�����ʽ����
	virtual ABuilder* SetCPU(std::string strCPU_);
	virtual ABuilder* SetGPU(std::string strGPU_);
	virtual ABuilder* SetMem(std::string strMem_);

	virtual AComputer* CreatComputer() = 0;

protected:
	AComputer* m_pComputer;
};

// �Զ���� builder, ����ʵ��ѡ��
class ACustomBuilder : public ABuilder
{
public:
	virtual AComputer* CreatComputer() override;
};


// ���� builder
class ATopBuilder : public ABuilder
{
public:
	virtual AComputer* CreatComputer() override;
};

// ���� builder
class AMediumBuilder : public ABuilder
{
public:
	virtual AComputer* CreatComputer() override;
};

#endif // !__BUILDER_WITHOUT_DIRECTOR_H__