#include <iostream>
using namespace std;
class complex2{
double re,img;
public:
complex2(double r, double i) :re{r}, img{i} {}
complex2(double r) :re{r}, img{0} {}
complex2() : re{0}, img{0} {}

double real() const { return re; }
void real(double d) { re=d;}
double imag() const { return img;}
void imag(double d) { img=d; }

complex2& operator+=(complex2 z) { re+=z.re, img+=z.img; return *this;}
complex2& operator-=(complex2 z) { re-=z.re, img-=z.img; return *this;}


};

complex2 operator+(complex2 a, complex2 b) {return a+=b;}
complex2 operator-(complex2 a, complex2 b) {return a-=b;}

int main (){
complex2 c = complex2(1.2,3.3);
complex2 d = complex2(1,1);
cout << "The real part of c is " << c.real() << "\n";
cout << "The real part of d is " << d.real() << "\n";
c = c+d;
cout << "Once we add d to c, the real part of c is " << c.real() << "\n";
return 0;
}
