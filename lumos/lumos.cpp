#include "klui/klui.hpp"

static int WIDTH = 512;
static int HEIGHT = WIDTH;

int main()
{
    klui::Manager manager("Lumos", WIDTH, HEIGHT);
    klui::Window & lumosWindow = manager.getMainWindow();
    manager.createPanel(lumosWindow, WIDTH, HEIGHT, "LumosPanel")
    manager.renderFrame();
    return 0;
}
