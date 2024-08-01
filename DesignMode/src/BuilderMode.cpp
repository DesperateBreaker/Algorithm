#include "BuilderMode.h"
#include <iostream>

Computer::Computer()
{
}

Computer::~Computer()
{
}

void Computer::SetCPU(std::string strCPU_)
{
	m_strCPU = strCPU_;
}

void Computer::SetGPU(std::string strGPU_)
{
	m_strGPU = m_strGPU;
}

void Computer::SetMem(std::string strMem_)
{
	m_strMem = strMem_;
}

void Computer::Run()
{
	std::cout << "CPU: " << m_strCPU
			  << " GPU: " << m_strGPU
			  << " Mem: " << m_strMem << std::endl;
}

Builder::Builder()
{
	m_pComputer = new Computer();
}

Builder::~Builder()
{
}

Computer* TopBuilder::CreatComputer()
{
	m_pComputer->SetCPU("i5-13600");
	m_pComputer->SetGPU("4090");
	m_pComputer->SetMem("64G");
	return m_pComputer;
}

Computer* MediumBuilder::CreatComputer()
{
	m_pComputer->SetCPU("i5-12400");
	m_pComputer->SetGPU("4060");
	m_pComputer->SetMem("32G");
	return m_pComputer;
}

Director::Director()
{
}

Computer* Director::GetComputer(Builder* pBuilder_)
{
	return pBuilder_->CreatComputer();
}
