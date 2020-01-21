//status = "ONE-NIGHT-STAND";
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string status;
    int age,h,money;
    cout<<"How old are you :) ?? : ";
    cin>>age;

    if(age<=20)
    {
        cout<<"Your hight(centimetre): ";
        cin>>h;
        if(h<=160){
            status = "UNFRIEND";
        }
        else if(h<=175){
            status = "FRIEND";
        }
        cout<<"How much money have you had?? (million) : ";
        cin>>money;
        if(money>=69){
            status = "MARRIED";
        }
        else{
            status = "ONE-NIGHT-STAND";
        }
    }
    else if(age<30){
        cout<<"How much money have you had?? (million) : ";
        cin>>money;
        if(money>10){
            status = "BEST FRIEND";
        }
        else{
            status = "UNFRIEND";
        }
    }
    else status = "UNFRIEND";

    cout<<status;
}