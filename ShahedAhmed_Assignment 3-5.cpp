// Name:Shahed Ahmed
// Date : 2/26/2023
// Assignment 3

// library
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
// defines class
class  COP3014
{
private:
    // private variable declaration
    string first_name, last_name;
    char Final_grade;
    int z_number,Quiz1,Quiz2,Quiz3,Midterm,Final;
    double Total_grade;

// public to run function
public:
    //default constructor
    COP3014();
    //declaration constructor
    COP3014 (string new_F,string new_L,int new_Z);

    // declaration setter grades function;
    void setQuizGrades(int quiz1, int quiz2, int quiz3);
    void setmidterm (int new_midt);
    void setfinal (int new_Fnl);
    void setTotal_grade(double new_totg);
    void setFinal_grade(char new_fnlg);

    //declaration getter function
    string get_First_Name();
    string get_Last_Name();
    int get_Z_Number();
    int get_Quiz1();
    int get_Quiz2();
    int get_Quiz3();
    int get_Midterm();
    int get_final();
    double get_total();
    char get_letter_grade();
// declaration function calculate total grade
    void compute_total_grade();
// declaration function compute letter grade
    void compute_letter_grade();
// declaration function display all information and grades
    void output();
// check to see whether the student was absent on any exam. give f for absent
    void check();
};



int main()
{
//default constructor
COP3014 student1 ,student2;
//constructor
// initialize student name, z number, and default value
student1 = COP3014("Shahed","Ahmed",23696104);
// set grade for Quiz 1
// set Quiz 1,2,and 3 grades
student1.setQuizGrades(20,20,20);
// set Grade for midterm
student1.setmidterm(80);
// set Grade for final
student1.setfinal(95);
// set total grade
student1.setTotal_grade(90);
// set letter grade
student1.setFinal_grade('A');
// display
student1.output();

//constructor
// initialize student name, z number, and default value
student2 = COP3014 ("Samuel","Harvey",83125676);
// set Quiz 1,2,and 3 grades
student2.setQuizGrades(19,15,20);
// set Grade for midterm
student2.setmidterm(60);
// set Grade for final
student2.setfinal(100);
// compute total grade
student2.compute_total_grade();
// compute letter grade
student2.compute_letter_grade();
// display
student2.output();



// computer total, compute letter grade and display
// fix calculation
student1.compute_total_grade();
student1.compute_letter_grade();
student1.output();


    return 0;
}
//define set total grade
void COP3014 :: setTotal_grade(double new_totg)
{
      if (new_totg < 0)
    {
        cout << endl <<" invalid data"<< endl;
        exit(1);

    }
    else
    Total_grade = new_totg;
}
// define set letter grade
void COP3014 :: setFinal_grade(char new_fnlg)
{
    Final_grade = new_fnlg;
}


// define set private Quiz 1 ,2 3
void COP3014:: setQuizGrades(int quiz1, int quiz2, int quiz3)
{

         if (quiz1 < 0 || quiz2 < 0 || quiz3 < 0 )
    {
        cout << endl <<" invalid data"<< endl;
        exit(1);

    }
    else

    Quiz1 = quiz1;
    Quiz2 = quiz2;
    Quiz3 = quiz3;
}



// define set private midterm grade
void COP3014 :: setmidterm (int new_midt)
    {
         if (new_midt < 0 )
    {
        cout << endl <<" invalid data"<< endl;
        exit(1);

    }
    else

    Midterm = new_midt;
    }
// define set private final grade
void COP3014 :: setfinal (int new_Fnl)
    {
         if (new_Fnl < 0)
    {
        cout << endl <<" invalid data"<< endl;
        exit(1);

    }
    else
    Final = new_Fnl;
    }


//define total grade function
// calculate all grades
void COP3014 :: compute_total_grade()
{
 Total_grade = (Quiz1+Quiz2+Quiz3)/3.0 +Midterm *0.3 + Final * 0.5 ;
}
// define letter grade function
// compute letter grades
 void COP3014 :: compute_letter_grade()
 {
 if (Total_grade >= 90)
    Final_grade = 'A';
 else if (Total_grade >= 80 && Total_grade < 90)
    Final_grade = 'B';
 else if (Total_grade >= 70 && Total_grade < 80)
    Final_grade = 'C';
 else if (Total_grade >=60 && Total_grade < 70)
    Final_grade = 'D';
  else
  Final_grade = 'F';
// call for check to see whether the student was absent on any exam. give f if they are
  check();
 }

 // define output function compute display all information
void COP3014 :: output()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
// display all info ,grade,total,final
    cout <<endl<< first_name <<" " << last_name <<"-" << "Z" <<z_number <<endl;
    cout << setw(20)<< "QUIZ 1: " << Quiz1 <<endl;
    cout <<setw(20)<< "QUIZ 2: " << Quiz2 <<endl;
    cout <<setw(20)<< "QUIZ 3: " << Quiz3<<endl;
    cout <<setw(20)<< "Midterm: "<< Midterm <<endl;
    cout <<setw(20)<< "Final:  " << Final <<endl;
    cout <<setw(20)<< "Total grade: " << Total_grade <<endl;
    cout <<setw(20)<< "Final grade: " << Final_grade <<endl;
}
// define check to see whether the student was absent on any exam. give f if they are

void COP3014 :: check()
{
    if (Midterm == 0 || Final == 0)
        Final_grade = 'F';
}

// default constructor
COP3014::COP3014() {
    first_name = "";
    last_name = "";
    z_number = 0;
    Quiz1 = 100;
    Quiz2 = 100;
    Quiz3 = 100;
  Midterm = 100;
   Final =  100;
  Total_grade = 100;
   Final_grade = 'A';
}



// constructor
COP3014 :: COP3014(string new_F,string new_L,int new_Z)
    {
    if (z_number < 0 || z_number < 0)
    {
        cout << endl <<" invalid data"<< endl;
        exit(1);
    }
    first_name = new_F;
    last_name = new_L;
    z_number = new_Z;
    Quiz1 = 100;
    Quiz2 = 100;
    Quiz3 = 100;
    Midterm = 100;
    Final = 100;
    Total_grade = 100.00;
    Final_grade = 'A';
    }

//  define the getter function for First name
string COP3014:: get_First_Name()
{
  return first_name;
}

//  define the getter function for Last name
string COP3014:: get_Last_Name()
{
      return last_name;
}
//  define the getter function for Z number
int COP3014:: get_Z_Number() {
      return z_number;
}
//  define the getter function for Quiz1
int COP3014:: get_Quiz1() {
      return Quiz1;
}
//  define the getter function for Quiz2
int COP3014:: get_Quiz2() {
      return Quiz2;
}
//  define the getter function for Quiz3
int COP3014:: get_Quiz3() {
      return Quiz3;
}
//  define the getter function for midterm
int COP3014:: get_Midterm() {
      return Midterm;
}
//  define the getter function for final
int COP3014:: get_final() {
      return Final;
}
//  define the getter function for total grade
double COP3014:: get_total() {
      return Total_grade;
}
//  define the getter function for letter grade
char COP3014:: get_letter_grade() {
      return Final_grade;
}















