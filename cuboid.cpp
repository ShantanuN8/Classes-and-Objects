/*
Find volume of cuboid
*/
#include<iostream>
using namespace std;
class cuboid
{
public:
double height=2.0;
double width=3.0;
double length=5.0;
};
int main()
{
    cuboid c1;
    double vol=c1.height*c1.width*c1.length;
    cout<<"Volume:"<<vol<<endl;

    
}
/*OUTPUT
Volume:30
*/

/*
Take input from user
*/
#include<iostream>
using namespace std;
class cuboid
{
public:
float calculate(float a,float b,float c){
    float vol=a*b*c;
    return vol;
}
float display(float a){
    cout<<"Volume of cuboid="<<a;
    }
};
int main(){
    cuboid c1;
    float h,b,l;
    cout<<"enter the length,breath and height:";
    cin>>l>>b>>h;
    float vol=c1.calculate(l,b,h);
    c1.display(vol);

}
