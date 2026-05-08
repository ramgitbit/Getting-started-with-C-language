#include <iostream>
using namespace std;
class Rectangle{
    int l;
    int b;
    public:
    void input(int l1 , int b1){
        l =l1;
        b = b1;
    }
    int p(){
        return 2*(l+b);
        
    }
    int area(){
        return l*b;
    }
};
int main()
{
    Rectangle R;
R.input(4,6);
    cout<<"perimeter: "<<R.p()<<endl;
    cout<<"area: "<<R.area()<<endl;

    return 0;
}