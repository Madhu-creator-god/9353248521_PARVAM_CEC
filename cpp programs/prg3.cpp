/*c++ program to add 5 subject marks and find total,average and grade.grade should be 'A' if above 90,'B' if above 70 and less than 90 and so on.*/
#include<iostream>
using namespace std;

int main()
{
    int marks1,marks2,marks3,marks4,marks5;
    float total,average;
    char grade;
    cout<<"madhu sudhan\n";
    cout<<"branch::information science and engineering\n";
    cout<<"year of study::2024-2029\n";
    cout<<"sem of study::2024-2025\n";
    cout<<"college::city engineering college\n";
    cout<<"father name::gokul\n";
    cout<<"mother name::suman\n";
    cout<<"enter 5 subject marks \n";
    cin>>marks1>>marks2>>marks3>>marks4>>marks5;
    total=marks1+marks2+marks3+marks4+marks5;
    average=total/5;
    cout<<"total="<<total<<endl;
    cout<<"average="<<average<<endl;
    if(average>90)
        grade='A';
    else if(average>80)
        grade='B';
    else if(average>70)
        grade='C';
    else if(average>60)
        grade='D';
    else
        grade='F';
    cout<<"grade="<<grade<<endl;
}