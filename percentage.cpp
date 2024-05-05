#include<iostream>

using namespace std;


int main(){
    int attended,held,percentage;
     

    cout<<"Number of classes attended\n";
    cin>>attended;
    
    cout<<"Number of classes held\n";
    cin>>held;
     
    percentage = (attended / held)*100;
    
    cout<<"your attendace is\n"<<percentage<<"%"<<endl;

    if(percentage>=75){
        cout<<"you are allowed to sit in exams\n";
    }else {
        cout<<"you are not alowed to sit in exams";
    }
}
