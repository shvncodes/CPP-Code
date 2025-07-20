#include<iostream>
using namespace std;

int rollNo = 9;   //Global variable - Decalre outside the function

int sum()
{
   int rollNo = 58;   //Local variable - Decalre inside the function
  cout<<rollNo; 
}

int main(){

       int rollNo = 29;   //Local variable - Decalre inside the function
       int classNumber = 12;
       cout<<"I'm studying in class "<<classNumber<<" and my roll number is "<<rollNo<<endl;
       
       sum();

 //int- It stores integer      
    // int num1 = 9953;
    // int num2 = 98;
    // int sum = num1 + num2;
    // cout<<"The sum of "<<num1<<" and "<<num2<<" is: "<<sum;



 //float- It stores low precision decimal number 
    // float marks1 = 95.45;
    // float marks2 = 87.3;
    // float totalMarks = 100;
    // cout<<"You got "<<marks1<<" in maths out of "<<totalMarks<<"."<<endl;
    // cout<<"You got the "<<marks2<<" in science out of "<<totalMarks;



 //char- It stores character in it
    // char section1 ='B';
    // char section2 = 'C';
    // char grade = 'A';
    // cout<<"Section "<<section1<<" students get "<<grade<<" grade.\nSection "
    // <<section2<<" is the best section of your class.";


// boolean- True or False
    // int data1 = 6;
    // int data2 = 300;
    // bool isData1IsLarger = data1 > data2;
    // cout<<"Kya data1 bada hai data2 se? "<<isData1IsLarger;

    // float num1 = 42.7;
    // float num2 = 65;
    // float mul = num1*num2;
    // int num = 1000;
    // bool isMulLargerThanNum = mul > num;
    // cout<<"Is multiplication of "<<num1<<" and "<<num2<<" is greater than 1000: "<<isMulLargerThanNum;



    return 0;
   
}
