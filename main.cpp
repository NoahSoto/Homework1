#include <iostream>
#include <string>


using namespace std;

//Function declarations
double sumFunction(double x,double y, double z);
double averageFunction(double x, double y, double z);

int main()
{
    double x,y,z;

    double sum,avg;

    cout<<"Enter #1: "<<endl;
    cin>>x;
    cout<<"Enter #2: "<<endl;
    cin>>y;
    cout<<"Enter #3: "<<endl;
    cin>>z;
    cout<<"Calculating the sum and average now:"<<endl;

    sum=sumFunction(x,y,z);
    avg=averageFunction(x,y,z);
    cout<<"Sum: "<<sum<<endl<<"Average: "<<avg<<endl;


    return 0;
}

//Function definitions



//Calculates the sum of 3 doubles passed in
double sumFunction(double x ,double y, double z){

    return x+y+z;
}
//Calculates the average of 3 doubles passed in
double averageFunction(double x, double y, double z){
    int sum;
    sum=sumFunction(x,y,z);
    return sum/3;
}
