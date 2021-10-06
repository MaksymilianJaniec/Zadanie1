#include <iostream>
using namespace std;


class Triangle
{
public:
int bok_a;
int bok_b;
int bok_c;
int h;
void obliczPole();
void obliczObwod();
};

void Triangle::obliczObwod()
{
cout<<"Obwod wynosi: "<<(bok_a + bok_b + bok_c) <<endl;
}

void Triangle::obliczPole()
{
cout<<"Pole wynosi: "<<((bok_a*h)/2)<<endl;

}

int main()
{
	
Triangle trojkat;
trojkat.bok_a=2;	
trojkat.bok_b=3;
trojkat.bok_c=3;
trojkat.h=3;

trojkat.obliczPole();
trojkat.obliczObwod();
	
	
}
