#include <iostream>

class Singleton
{
public:
    static Singleton& instance()
    {
        static Singleton instance;
        return instance;
    }

    void print( std::string_view msg )
    {
        std::cout << msg << std::endl;
    }

private:
    Singleton() {}
    ~Singleton() {}
    Singleton( const Singleton& ) = delete;
    Singleton& operator=( const Singleton& ) = delete;
};


int main()
{
    Singleton::instance().print( "Hello World" );

    return 0;
}
