#include <iostream>


 
namespace GUI
{

enum Status : std::uint8_t
{
    NOT_PRESSED = 0,
    PRESSED = 1
};

class Button
{
    public:
    Button()
    {

    }

    Status getStatus()
    {
        return status;
    }

    private:
    Status status;

};

class PressingWindow
{
    public:
    PressingWindow(Button *b) : button(b)
    {

    }
    
    void OnClick()
    {
        
        if(button->getStatus() == GUI::Status::PRESSED)
        {
            std::cout <<"do something\n";
        }
        else{
               std::cout <<"button is not pressed\n";
        }
    }
    private:
    Button *button; 
};

class Window
{
    public:
    Window(Button *b = new Button())
    {
    }

    void draw()
    {

    }

    private:
    Button *button;
}; 

}// namespace end

int main()
{
    GUI::Button *b = new GUI::Button();
    GUI::Window w(b);
    GUI::PressingWindow window(new GUI::Button());
    window.OnClick();
    return 0;
}
