#include <iostream>
#include <cstring>

struct Washing_machine
{
    char* brand;
    char* color;
    unsigned int width;
    unsigned int length;
    unsigned int height;
    unsigned int power;
    unsigned int spin_speed;
    unsigned int heating_temperature;
};

void fill_washing_machine(Washing_machine* machine)
{
    const int N = 100;
    char brand[N];
    std::cout << "Enter brand name:\n";
    std::cin >> brand;
    int size_brand = strlen(brand);
    machine->brand = new char[size_brand+1];
    std::strcpy(machine->brand, brand);


    char color[N];
    std::cout << "Enter color name:\n";
    std::cin >> color;
    int size_color = strlen(color);
    machine->color = new char[size_color+1];
    std::strcpy(machine->color, color);

    std::cout << "Enter width\n";
    std::cin >> machine->width;


    std::cout << "Enter length\n";
    std::cin >> machine->length;


    std::cout << "Enter height\n";
    std::cin >> machine->height;


    std::cout << "Enter power\n";
    std::cin >> machine->power;


    std::cout << "Enter spin_speed\n";
    std::cin >> machine->spin_speed;


    std::cout << "Enter heating_temperature\n";
    std::cin >> machine->heating_temperature;
};

void print_machine(Washing_machine* machine)
{
    std::cout << "width: " <<machine->width << " length " << machine->length << " height: " << machine->height <<
       " power: " << machine->power << " spin speed: " << machine->spin_speed << " heating_temperature: " << machine->heating_temperature << std::endl; 
}

int main()
{
    Washing_machine* m1 = new Washing_machine();
    fill_washing_machine(m1); 
    print_machine(m1);
}
