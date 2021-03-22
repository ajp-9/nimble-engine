#include "Application.hpp"

#include <SDL2/SDL.h>
#include <iostream>

#include "../Renderer/Renderer.hpp"

namespace nim
{
    Application::Application(glm::ivec2 dimensions)
        : m_Window(glm::ivec2(dimensions.x, dimensions.y))
    {}

    void Application::update()
    {
        Renderer::clear();

        m_Window.update();
        m_LayerManager.sendEvents();
    }
}
