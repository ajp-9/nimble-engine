#include "SandBox.hpp"

#include "TestLayer.hpp"
#include "SecondLayer.hpp"

void SandBox::begin()
{
	m_EngineHandle->getLayerManager().pushLayer(std::make_shared<TestLayer>());
	m_EngineHandle->getLayerManager().pushLayer(std::make_shared<SecondLayer>());
}

void SandBox::end()
{
}

void SandBox::update()
{
}

void SandBox::render()
{
}
