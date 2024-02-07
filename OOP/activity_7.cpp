#include<iostream>

using namespace std;

class Book
{
    public :
        int bNo;
        string bName;
        int price;

    Book(int id, string name, int cost)
    {
        bNo = id;
        bName = name;
        price = cost;
    }

    void display()
    {
        cout <<  "Book Id: " << bNo << endl;
        cout << "Book name: " << bName << endl;
        cout << "Book Price : "  << price << endl;
    }

};

class SpecialEditionBook : public Book
{
    public : 
        int discount;

    void display()
    {
        cout <<  "Book Id: " << bNo << endl;
        cout << "Book name: " << bName << endl;
        cout << "Book Price : "  << price << endl;
        cout << "Discount : " << discount << endl;
    }
    
    SpecialEditionBook(int id ,string name , int cost , int dis) : Book(id, name, cost)
    {
        discount = dis;
    }
};

class BookTest : SpecialEditionBook{

    public:
        static void main()
        {
            SpecialEditionBook b1(1, "C++", 500, 100);
            b1.display();
        }

};

int main()
{
    BookTest::main();
    
    return 0;
}