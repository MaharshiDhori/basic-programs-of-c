#include<iostream>

using namespace std;

class Fruit
{
    public:
        virtual void cost() = 0;
};

class Apple : public Fruit
{
    private :
        int pricePerApple;
        int quantity;

    public: 
        Apple(int price, int qty) : pricePerApple(price), quantity(qty) {}
            void cost() override
            {
                cout << "Apple cost " << (pricePerApple * quantity) << endl;
            }

        
};

class Mango : public Fruit 
{
    private :
        int pricePerMango;
        int quantity;

    public: 
        Mango(int price, int qty) : pricePerMango(price), quantity(qty) {}
            void cost() override 
            {
                cout << "Mango cost " << (pricePerMango * quantity) << endl;
            }
};

class FruitDemo
{
    public:
        static void main()
        {
            Apple apple(120, 5);
            apple.cost();

            Mango mango(50, 10);
            mango.cost();
        }
};

int main()
{
    FruitDemo::main();
    return 0;
}