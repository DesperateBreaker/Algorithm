#include "BuilderModeWithoutDirector.h"
#include <iostream>

AComputer::AComputer()
{
	// 复杂的对象内部有默认的实现
	m_strCPU = "i5-12600";
	m_strGPU = "4060Ti";
	m_strMem = "32G";
}

AComputer::~AComputer()
{
}

void AComputer::SetCPU(std::string strCPU_)
{
	m_strCPU = strCPU_;
}

void AComputer::SetGPU(std::string strGPU_)
{
	m_strGPU = strGPU_;
}

void AComputer::SetMem(std::string strMem_)
{
	m_strMem = strMem_;
}

void AComputer::Run()
{
	std::cout << "CPU: " << m_strCPU
			  << " GPU: " << m_strGPU
			  << " Mem: " << m_strMem << std::endl;
}

ABuilder::ABuilder()
{
	m_pComputer = new AComputer();
}

ABuilder::~ABuilder()
{
}

ABuilder* ABuilder::SetCPU(std::string strCPU_)
{
	m_pComputer->SetCPU(strCPU_);
	return this;
}

ABuilder* ABuilder::SetGPU(std::string strGPU_)
{
	m_pComputer->SetGPU(strGPU_);
	return this;
}

ABuilder* ABuilder::SetMem(std::string strMem_)
{
	m_pComputer->SetMem(strMem_);
	return this;
}

AComputer* ATopBuilder::CreatComputer()
{
	m_pComputer->SetCPU("i5-13600");
	m_pComputer->SetGPU("4090");
	m_pComputer->SetMem("64G");
	return m_pComputer;
}

AComputer* AMediumBuilder::CreatComputer()
{
	m_pComputer->SetCPU("i5-12400");
	m_pComputer->SetGPU("4060");
	m_pComputer->SetMem("32G");
	return m_pComputer;
}

AComputer* ACustomBuilder::CreatComputer()
{
	return m_pComputer;
}
