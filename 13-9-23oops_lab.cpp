// #include<iostream>
// using namespace std;
// int main(){
// int grade;
// cin>>grade;
// if(grade>=80 && grade<=100){
//     cout<<"Distinction";   
// }
// else if(grade>=60 && grade<=79){
//     cout<<"Grade A";
// }
// else if(grade>=40 && grade<=59){
//     cout<<"Grade B";
// }
// else{
//     cout<<"Fail";
// }
// switch(grade){
//     case 0:
//     return true;
//     default:
//     return false;
// }
// return 0;
// }
// #include <iostream>
// using namespace std;
// class Circle {
// public:
//     Circle(int r) : radius(r) {}
//     int calculateArea() {
//         return 3.14 * radius * radius;
//     }
// private:
//     int radius;
// };
// int main() {
//     Circle myCircle(5.0);
//     double area = myCircle.calculateArea();
//     cout << "The area of the circle is: " << area << endl;
//     return 0;
// }
#include <iostream>
using namespace std;
int main() {
    class Rectangle {
    public:
        Rectangle(int w, int h) : width(w), height(h) {}
        int calculateArea() {
        return width * height;
        }
        private:
        int width;
        int height;
        };
    Rectangle myRectangle(4,6);
    double area = myRectangle.calculateArea();
    cout << "The area of the rectangle is: " << area << endl;
    return 0;
}