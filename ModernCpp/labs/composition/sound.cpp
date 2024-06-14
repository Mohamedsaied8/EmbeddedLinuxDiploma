#include <iostream>
#include <vector>

class ISound
{
    public:

    virtual void MakeSound() = 0;

};

class HumanSound : public ISound
{
    public:

    void MakeSound() override
    {
        std::cout << "Human sound\n";
    }

    void useMic()
    {
        std::cout << "Human sound with microphone\n";
    }
    
};

class CatSound : public ISound
{
    public: 
    void MakeSound() override
    {
        std::cout <<"Meow\n";
    }

};

class Amplification 
{
    public:
    Amplification(std::vector<ISound*> &sounds) : m_sounds(sounds)
    {
        amplfiySound();
    }

    virtual void amplfiySound() final
    {
        for(auto sound : m_sounds)
        {
            sound->MakeSound();
            HumanSound* human = dynamic_cast<HumanSound*>(sound); //RTTI
            if(human != nullptr)
            {
            human->useMic();
            }
        }
    }

    private:
    std::vector<ISound*> &m_sounds;
};


int main()
{
    std::vector<ISound*> sounds;
    ISound *s = new HumanSound();
    sounds.push_back(s);
    sounds.push_back(new HumanSound());
    sounds.push_back(new CatSound());

    Amplification amplification(sounds);

    return 0;
}
