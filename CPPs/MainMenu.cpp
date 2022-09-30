// Adnan T. Hassan
// BSIT 1-1

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <windows.h>
#include <algorithm>
#include <fstream>
#include<stdlib.h>
#include<string.h>
#include <climits>
#include <string>


using namespace std;
float total1, total2;

typedef char sign;


// Sequence Programs
#include "Quadra.h"
#include "SandC.h"
#include "AandP.h"
#include "Swap.h"
#include "Gross.h"
#include "Sdpq.h"  // without argu does not
#include "Area.h"
#include "CandF.h"
#include "Total.h"
#include "Change.h"

// Selection Programs
#include "PNN.h"
#include "OandE.h"
#include "Largest.h"        // with argu not return
#include "Largesttwo.h"
#include "Prime.h"
#include "Commision.h"
#include "Grades.h"
#include "VandC.h"

// Loop Programs
#include "Fonetoten.h"
#include "Feven.h"
#include "FFibo.h"
#include "Frev.h"
#include "Fpalin.h"
#include "FSueven.h" // without argu does not return
#include "FSuofSq.h"
#include "Ffact.h"
#include "Falpha.h"
#include "FBinary.h"

// While loop Programs
#include "Wonetoten.h"
#include "Weven.h"
#include "Wfact.h"
#include "WFibo.h"
#include "Wrev.h" // without argu does not return
#include "WPalin.h"
#include "WBinary.h"
#include "WSueven.h"
#include "WSuofSq.h"
#include "Walpha.h"

// Do While Loop Programs
#include "Donetoten.h"
#include "Deven.h"
#include "Dfact.h"
#include "DFibo.h"
#include "Drev.h"
#include "Dpalin.h"  
#include "DBinary.h"
#include "DSueven.h"
#include "DSuofSq.h"
#include "Dalpha.h"

// 1 Dimensional Array Programs
#include "Bsearch.h"    // with argu and return 
#include "Erase.h"      // with argu and return 
#include "Indexl.h"         // with argu and not return 
#include "Indexs.h"         // with argu and not return 
#include "Isort.h"          // with argu and not return 
#include "Isortdes.h"       // with argu and not return 
#include "Lsearch.h"        // with argu and NOT return 
#include "SumofEO.h"        // with argu and not return 
#include "Update.h"         // with argu and not return 
#include "copy.h"       // with argu and not return 
#include "display.h"        // with argu and not return 
#include "dprime.h"         // with argu and not return 
#include "even.h"       // with argu and not return 
#include "inputs.h"         // with argu and return 
#include "large.h"      // with argu and return 
#include "odd.h"        // with argu and return 
#include "sos.h"        // with argu and return 
#include "sum.h"        // with argu and return 
#include "small.h"      // with argu and return 

// 2 Dimensional Array Programs
#include "Ainsertion.h"         // with argu and not return 
#include "Bsearch_1.h"      // with argu and not return 
#include "Dinsertion.h"         // with argu and not return 
#include "Indexl_1.h"       // with argu and not return 
#include "Indexs_1.h"       // with argu and not return 
#include "Lsearch_1.h"      // with argu and not return 
#include "SumofEO_1.h"       // with argu and not return 
#include "copy_1.h"         // with argu and not return 
#include "delet.h"       // with argu and  return 
#include "dia.h"         // with argu and  return 
#include "display_1.h"      // with argu and not return 
#include "dprime_1.h"       // with argu and not return 
#include "equal.h"       // with argu and return 
#include "even_1.h"         // with argu and not return 
#include "input.h"       // with argu and not return 
#include "large_1.h"         // with argu and  return 
#include "odd_1.h"      // with argu and return 
#include "rowFind.h"        // with argu and not return 
#include "small_1.h"        // with argu and return 
#include "sos_1.h"      // with argu and  return 
#include "sum_1.h"      // with argu and return 
#include  "uped.h"      // with argu and not return 

// Recursive Programs
#include "Recur.h"


// Structure Programs
struct studentGrade {
    sign   lastname[20];
    sign   firstname[20];
    sign middlename[20];
    int quiz1score;
    double quiz1grade;
    int quiz2score;
    double quiz2grade;
    double  exercisesgrade;
    double projectgrade;
    double semestralGrade;
    double equiGrade;
    sign remarks[20];
};

void getdata(studentGrade info[20], int num) {
    for (int i = 0; i < num; i++) {
        cout << "Student " << i + 1 << "\n";
        cout << "Last name: ";
        cin.getline(info[i].lastname, 20);
        cout << "First name: ";
        cin.getline(info[i].firstname, 20);
        cout << "Middle name: ";
        cin.getline(info[i].middlename, 20);
        cout << "Quiz 1 score: ";
        cin >> info[i].quiz1score;
        cout << "Quiz 2 score: ";
        cin >> info[i].quiz2score;
        cout << "Exercises Grade: ";
        cin >> info[i].exercisesgrade;
        cout << "Project Grade: ";
        cin >> info[i].projectgrade;
        cout << endl;
        cin.ignore();
    }

}

void displaydata(studentGrade info[], int num) {
    cout << " ***** Students Information *****\n";
    cout << "-------------------------------------------------------------------------------------------------------------------------------------------\n";
    cout << "LAST NAME | FIRST NAME | MIDDLE NAME | QUIZ 1 | QUIZ 2 | EXERCISE | PROJECT | QUIZ 1GRADE | QUIZ 2 GRADE | EQUIVALENT | SEMESTRAL | REMARKS |\n";
    cout << "-------------------------------------------------------------------------------------------------------------------------------------------\n";
    for (int i = 0; i < num; i++) {
        cout << setw(5) << left << info[i].lastname << "\t";
        cout << setw(5) << left << info[i].firstname << "\t\t";
        cout << setw(5) << left << info[i].middlename << "\t";
        cout << setw(3) << left << info[i].quiz1score << "\t";
        cout << setw(3) << left << info[i].quiz2score << "\t";
        cout << setw(3) << left << info[i].exercisesgrade << "\t";
        cout << setw(3) << left << info[i].projectgrade << "\t";
        cout << setw(3) << left << info[i].quiz1grade << "\t\t";
        cout << setw(3) << left << info[i].quiz2grade << "\t\t";
        cout << setw(3) << left << info[i].equiGrade << "\t\t";
        cout << setw(3) << left << info[i].semestralGrade << "\t\t";
        cout << setw(6) << left << info[i].remarks << "\t";
        cout << endl;
    }
}

void computation(studentGrade info[20], int num) {
    cout << "Input the Total score for Quiz 1: ";
    cin >> total1;
    cout << "\nInput the Total score for Quiz 2: ";
    cin >> total2;

    //computing quiz1and 2 grade
    for (int i = 0; i < num; i++) {
        info[i].quiz1grade = (info[i].quiz1score / total1) * 100;
        info[i].quiz2grade = (info[i].quiz2score / total2) * 100;
    }
}

void equi(studentGrade info[20], int num) {

    for (int i = 0; i < num; i++) {
        info[i].equiGrade = info[i].quiz1grade + info[i].quiz2grade + info[i].exercisesgrade + info[i].projectgrade;
    }
    int ave = 0;
    for (int i = 0; i < num; i++)
    {
        ave = info[i].equiGrade / 4;
        info[i].equiGrade = ave;
    }
}

void semgrade(studentGrade info[20], int num) {
    for (int i = 0; i < num; i++) {
        if (info[i].equiGrade >= 97)
        {
            info[i].semestralGrade = 1.0;
        }
        else if (info[i].equiGrade >= 94 && info[i].equiGrade >= 96) {
            info[i].semestralGrade = 1.25;
        }
        else if (info[i].equiGrade >= 91 && info[i].equiGrade >= 93) {
            info[i].semestralGrade = 1.5;
        }
        else if (info[i].equiGrade >= 88 && info[i].equiGrade >= 90) {
            info[i].semestralGrade = 1.75;
        }
        else if (info[i].equiGrade >= 85 && info[i].equiGrade >= 87) {
            info[i].semestralGrade = 2.0;
        }
        else if (info[i].equiGrade >= 82 && info[i].equiGrade >= 84) {
            info[i].semestralGrade = 2.25;
        }
        else if (info[i].equiGrade >= 79 && info[i].equiGrade >= 81) {
            info[i].semestralGrade = 2.5;
        }
        else if (info[i].equiGrade >= 76 && info[i].equiGrade >= 78) {
            info[i].semestralGrade = 2.75;
        }
        else if (info[i].equiGrade == 75) {
            info[i].semestralGrade = 3.0;
        }
        else if (info[i].equiGrade >= 65 && info[i].equiGrade <= 74) {
            info[i].semestralGrade = 5.0;
        }
        else if (info[i].equiGrade < 65) {
            info[i].semestralGrade = 0;
        }
    }
}

void rem(studentGrade info[20], int num) {
    sign pass[] = "Passed";
    sign fail[] = "Failed";

    for (int i = 0; i < num; i++) {
        if (info[i].equiGrade >= 75) {
            strncpy_s(info[i].remarks, pass, 20);
        }
        else if (info[i].equiGrade < 75) {
            strncpy_s(info[i].remarks, fail, 20);
        }
    }
}

void search(studentGrade info[20], int num) {
    sign lname[20];
    sign fname[20];
    int found = 0;

    cout << "Last name: ";
    cin.getline(lname, 20);
    cout << "First name: ";
    cin.getline(fname, 20);

    for (int i = 0; i < num; i++) {
        if (strcmp(info[i].firstname, fname) == 0) {
            system("cls");
            cout << " ***** Student Found Information *****\n";
            cout << "-------------------------------------------------------------------------------------------------------------------------------------------\n";
            cout << "LAST NAME | FIRST NAME | MIDDLE NAME | QUIZ 1 | QUIZ 2 | EXERCISE | PROJECT | QUIZ 1GRADE | QUIZ 2 GRADE | EQUIVALENT | SEMESTRAL | REMARKS |\n";
            cout << "-------------------------------------------------------------------------------------------------------------------------------------------\n";
            cout << info[i].lastname << "\t";
            cout << info[i].firstname << "\t\t";
            cout << info[i].middlename << "\t";
            cout << info[i].quiz1score << "\t";
            cout << info[i].quiz2score << "\t";
            cout << info[i].exercisesgrade << "\t";
            cout << info[i].projectgrade << "\t";
            cout << info[i].quiz1grade << "\t\t";
            cout << info[i].quiz2grade << "\t\t";
            cout << info[i].equiGrade << "\t\t";
            cout << info[i].semestralGrade << "\t\t";
            cout << info[i].remarks << "\t";
            cout << endl;
            found = 1;
        }
    }
    if (found == 0)
        cout << "Student is not found in the list";
}


void sortStudent(studentGrade info[20], int num) {
    int srt = 0;
    studentGrade sorting;
    for (int a = 0; a < num - 1; a++) {
        for (int x = a + 1; x < num; x++) {
            if (info[a].equiGrade > info[x].equiGrade) {
                sorting = info[a];
                info[a] = info[x];
                info[x] = sorting;
            }
        }
    }
    cout << "Students Sorted in Descending Order: \n";
    for (int a = 0; a < num; a++) {
        cout << info[a].lastname << " || ";
        cout << "Semestral Grade: ";
        cout << info[a].semestralGrade << " || ";
        cout << "Equivalent Grade: ";
        cout << info[a].equiGrade << endl;
    }
}

//File Handling Programs
struct mail {
    sign un[50];             // user name
    sign pd[50];             // passsword
    void reg(int);
} obj[5];

void insert() {
    ofstream fout;
    sign fname[100];
    sign rec[100];

    //C:\\Users\\Wrathraiser\\Documents\\NetBeansProjects\\Project\\sample.txt


    cout << "Enter file name :: ";
    cin >> fname;

    fout.open(fname, ios::out);

    cout << "\nEnter any word to insert :: ";
    cin >> rec;

    fout << rec;
    cout << "\nData inserted successfully..!!\n";

    fout.close();

}

void disp() {
    ifstream ifile;
    sign s[100], fname[100];

    //C:\\Users\\Wrathraiser\\Documents\\NetBeansProjects\\Project\\sample.txt

    cout << "Enter file name to read :: ";
    cin >> fname;

    ifile.open(fname);

    if (!ifile)
    {
        cout << "\nError in opening file..!!\n";

        exit(0);
    }

    cout << "\n";

    while (ifile.eof() == 0)
    {
        ifile >> s;
        cout << s << " ";
    }

    cout << "\n";
    ifile.close();

}

void mail::reg(int k) {
    int i = k;
    cout << "\nEnter user name :: ";
    cin >> un;
    cout << "\nEnter password :: ";
    cin >> pd;

    ofstream filout;
    filout.open("C:\\Users\\Wrathraiser\\Documents\\NetBeansProjects\\Project\\registration.txt", ios::app | ios::binary);
    if (!filout)
    {
        cout << "\nCannot open file\n";
    }
    else
    {
        cout << "\n";
        filout.write((sign*)&obj[i], sizeof(mail));
        filout.close();
    }

    cout << "\n...........You are now registered.......... \n\n";

}
// end of sign up or register func

void regist() {
    int t;
    cout << "\nEnter Registration Details for User 1 :: \n";
    obj[0].reg(0);
    cout << "\nEnter Registration Details for User 2 :: \n";
    obj[1].reg(1);
    cout << "\nEnter Registration Details for User 3 :: \n";
    obj[2].reg(2);

    mail obj2;

    ifstream filein;
    filein.open("C:\\Users\\Wrathraiser\\Documents\\NetBeansProjects\\Project\\registration.txt", ios::in | ios::binary);
    if (!filein)
    {
        cout << "\nUnable to open file to read\n";
    }
    else
    {
        cout << "\nRegistered Details of All Users :: \n";
        filein.read((sign*)&obj2, sizeof(obj2));
        while (filein)
        {
            cout << "\nUsername :: " << obj2.un << "\nPasswword :: " << obj2.pd << "\n";
            filein.read((sign*)&obj2, sizeof(obj2));
        }
        //filein.close();
    }
}


void message() {
    cout << "\nPress any key to continue.";
    _getch();
}

int main() {

    int score[100];
    int score2[100];

    int array[100][100];
    int array1[100][100];
    int row, col;
    int m_menu;



    do {
    menu:
        system("cls");
        //Display Student Information
        cout << "\n\n\t Hassan, Adnan T. BSIT 1-1 Program Compilations";
        //Color of the text
        system("Color 0B");
        cout << "\n\n\t\t\t\t\t\tMAIN MENU\n";
        cout << "\n\t\t [1] - Sequence Menu";
        cout << "\n\t\t [2] - Selection Menu";
        cout << "\n\t\t [3] - Loop Menu";
        cout << "\n\t\t [4] - 1 Dimensional Array";
        cout << "\n\t\t [5] - 2 Dimensional Array";
        cout << "\n\t\t [6] - Recursive function";
        cout << "\n\t\t [7] - Structures";
        cout << "\n\t\t [8] - File handling, classes and object (at least 3 problems from the given exercise)";
        cout << "\n\t\t [9] - Exit\n";
        cout << "\n\t\t\tEnter your choice: ";
        cin >> m_menu;

        while (cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "\n\t\t\tInvalid Input\n";
            cout << "\n\t\t\tEnter your choice: ";
            cin >> m_menu;
        }

        switch (m_menu) {
        case 1:
            system("cls");
            int sq_menu;
            do {
            sqmenu:
                system("cls");
                cout << "\n\t\t\t\t\t\tSEQUENCE MENU\n";
                cout << "\n\t\t [1] - Roots of a quadratic equation";
                cout << "\n\t\t [2] - Compute for the square and cube of a number";
                cout << "\n\t\t [3] - Compute for the area and perimeter of a rectangle";
                cout << "\n\t\t [4] - Swap the values of two variables";
                cout << "\n\t\t [5] - Compute for the gross pay and net pay";
                cout << "\n\t\t [6] - Compute for the sum, difference, products and quotient";
                cout << "\n\t\t [7] - Compute for the area and circumference";
                cout << "\n\t\t [8] - Convert Celsius to degrees Fahrenheit";
                cout << "\n\t\t [9] - Compute for the total sales";
                cout << "\n\t\t [10] - Compute for the change";
                cout << "\n\t\t [11] -Go Back";
                cout << "\n\t\t\tEnter your choice: ";
                cin >> sq_menu;

                while (cin.fail()) {
                    cin.clear();
                    cin.ignore();
                    cout << "\n\t\t\tInvalid Input\n";
                    cout << "\n\t\t\tEnter your choice: ";
                    cin >> sq_menu;
                }

                switch (sq_menu)
                {
                case 1:
                    Quadra();
                    message();
                    break;
                case 2:
                    SandC();
                    message();
                    break;
                case 3:
                    AandP();
                    message();
                    break;
                case 4:
                    Swap();
                    message();
                    break;
                case 5:
                    Gross();
                    message();
                    break;
                case 6:
                    Sdpq();
                    message();
                    break;
                case 7:
                    Area();
                    message();
                    break;
                case 8:
                    CandF();
                    message();
                    break;
                case 9:
                    Total();
                    message();
                    break;
                case 10:
                    Change();
                    message();
                    break;
                case 11:
                    system("cls");
                    cout << "\n\n\t <- BACK TO MAIN MENU\n" << endl;
                    _getch();
                    goto menu;
                    break;
                default:
                    system("cls");
                    cout << "\n\n\tINVALID CHOICE!\n" << endl;
                    _getch();
                    goto sqmenu;
                    break;
                }
            } while (sq_menu <= 11);
            break;

        case 2:
            system("cls");
            int s_menu;
            do {
            smenu:
                system("cls");
                cout << "\n\t\t\t\t\t\tSELECTION MENU\n";
                cout << "\n\t\t [1] - Identify whether Positive, Negative or Neutral";
                cout << "\n\t\t [2] - Identify whether  Odd or Even";
                cout << "\n\t\t [3] - Identify the Largest among 3 Numbers";
                cout << "\n\t\t [4] - Identify the  Largest between the 2 Numbers";
                cout << "\n\t\t [5] - Identify whether Prime Number or not";
                cout << "\n\t\t [6] - Identify whether passed or failed";
                cout << "\n\t\t [7] - Identify the comission of salesman whether 10%, 15%, 20% or 30%";
                cout << "\n\t\t [8] - Identify if the inputted letter is a  Vowel or Consonant";
                cout << "\n\t\t [9] - Go Back";
                cout << "\n\t\t\tEnter your choice: ";
                cin >> s_menu;
                while (cin.fail()) {
                    cin.clear();
                    cin.ignore();
                    cout << "\n\t\t\tInvalid Input\n";
                    cout << "\n\t\t\tEnter your choice: ";
                    cin >> s_menu;
                }

                switch (s_menu) {
                case 1:
                    PNN();
                    break;
                case 2:
                    system("cls");
                    int n;
                    n = OandE();
                    if (n % 2 == 0)
                        cout << n << " is Even\n";
                    else
                        cout << n << " is Odd\n";
                    message();
                    _getch;
                    break;
                case 3:
                    system("cls");
                    int num1, num2, num3;
                    cout << "Input a 3 Numbers to Identify the largest among them\n";
                    cout << "First Number: ";
                    cin >> num1;
                    cout << "Second Number: ";
                    cin >> num2;
                    cout << "Third Number: ";
                    cin >> num3;
                    cout << "\nThe Largest is :  " << Largest(num1, num2, num3) << endl;
                    cout << endl << endl;
                    cout << "\nThe Largest is :  " << Largest(num1, num2, num3) << endl;
                    message();
                    _getch();
                    system("cls");
                    break;
                case 4:
                    Largesttwo();
                    message();
                    break;
                case 5:
                    Prime();
                    message();
                    break;
                case 6:
                    Grades();
                    message();
                    break;
                case 7:
                    Commision();
                    message();
                    break;
                case 8:
                    VandC();
                    message();
                    break;
                case 9:
                    system("cls");
                    cout << "\n\n\t <- BACK TO MAIN MENU\n" << endl;
                    _getch();
                    goto menu;
                    break;
                default:
                    system("cls");
                    cout << "\n\n\tINVALID CHOICE!\n" << endl;
                    _getch();
                    goto smenu;
                    break;
                }

            } while (s_menu <= 9);
            break;
        case 3:
            system("cls");
            int l_menu;
            do {
            lmenu:
                system("cls");
                cout << "\n\n\t\t\t\t\t\tLOOP MENU\n";
                cout << "\n\t\t [1] For Loop Menu";
                cout << "\n\t\t [2] While Loop Menu";
                cout << "\n\t\t [3] Do While Loop Menu";
                cout << "\n\t\t [4] Go Back";
                cout << "\n\t\t\tEnter your choice: ";
                cin >> l_menu;

                while (cin.fail()) {
                    cin.clear();
                    cin.ignore();
                    cout << "\n\t\t\tInvalid Input\n";
                    cout << "\n\t\t\tEnter your choice: ";
                    cin >> l_menu;
                }

                switch (l_menu)
                {
                case 1:
                    system("cls");
                    int f_menu;
                    do {
                    fmenu:
                        system("cls");
                        cout << "\n\t\t\t\t\t\tFOR LOOP MENU\n";
                        cout << "\n\t\t [1] - Print numbers from 1 to 10";
                        cout << "\n\t\t [2] - Print all even number numbers from 1 to N";
                        cout << "\n\t\t [3] - Compute and display its factorial";
                        cout << "\n\t\t [4] - Display the N Fibonacci series";
                        cout << "\n\t\t [5] - Display the reverse of the number";
                        cout << "\n\t\t [6] - Identify whether the word is a palindrome";
                        cout << "\n\t\t [7] - Convert a decimal number to binary number";
                        cout << "\n\t\t [8] - Get the sum of all even numbers from 1 to N";
                        cout << "\n\t\t [9] - Get the sum of the square of all even number from N to M";
                        cout << "\n\t\t [10] - print letters from A-Z";
                        cout << "\n\t\t [11] - Go Back\n";
                        cout << "\n\t\t\tEnter your choice: ";
                        cin >> f_menu;

                        while (cin.fail()) {
                            cin.clear();
                            cin.ignore();
                            cout << "\n\t\t\tInvalid Input\n";
                            cout << "\n\t\t\tEnter your choice: ";
                            cin >> f_menu;
                        }

                        switch (f_menu) {
                        case 1:
                            Fonetoten();
                            message();
                            break;
                        case 2:
                            Feven();
                            message();
                            break;
                        case 3:
                            Ffact();
                            message();
                            break;
                        case 4:
                            FFibo();
                            message();
                            break;
                        case 5:
                            Frev();
                            message();
                            break;
                        case 6:
                            Fpalin();
                            message();
                            break;
                        case 7:
                            FBinary();
                            message();
                            break;
                        case 8:
                            FSueven();
                            message();
                            break;
                        case 9:
                            FSuofSq();
                            message();
                            break;
                        case 10:
                            Falpha();
                            message();
                            break;
                        case 11:
                            system("cls");
                            cout << "\n\n\t <- BACK TO LOOP MENU\n" << endl;
                            _getch();
                            goto lmenu;
                            break;
                        default:
                            system("cls");
                            cout << "\n\n\tINVALID CHOICE!\n" << endl;
                            _getch();
                            goto fmenu;
                            break;
                        }
                    } while (f_menu <= 11);
                    break;
                case 2:
                    system("cls");
                    int w_menu;
                    do {
                    wmenu:
                        system("cls");
                        cout << "\n\t\t\t\t\t\tWHILE LOOP MENU\n";
                        cout << "\n\t\t [1] - Print numbers from 1 to 10 \n";
                        cout << "\n\t\t [2] - Print all even number numbers from 1 to N \n";
                        cout << "\n\t\t [3] - Compute and display its factorial \n";
                        cout << "\n\t\t [4] - Display the N Fibonacci series \n";
                        cout << "\n\t\t [5] - Display the reverse of the number \n";
                        cout << "\n\t\t [6] - Identify whether the word is a palindrome \n";
                        cout << "\n\t\t [7] - Convert a decimal number to binary number \n";
                        cout << "\n\t\t [8] - Get the sum of all even numbers from 1 to N \n";
                        cout << "\n\t\t [9] - Get the sum of the square of all even number from N to M \n";
                        cout << "\n\t\t [10] - print letters from A-Z \n";
                        cout << "\n\t\t [11] - Go Back\n";
                        cout << "\n\t\t\tEnter your choice: ";
                        cin >> w_menu;

                        while (cin.fail()) {
                            cin.clear();
                            cin.ignore();
                            cout << "\n\t\t\tInvalid Input\n";
                            cout << "\n\t\t\tEnter your choice: ";
                            cin >> w_menu;
                        }

                        switch (w_menu) {
                        case 1:
                            Wonetoten();
                            break;
                        case 2:
                            Weven();
                            break;
                        case 3:
                            Wfact();
                            break;
                        case 4:
                            WFibo();
                            break;
                        case 5:
                            Wrev();
                            break;
                        case 6:
                            WPalin();
                            break;
                        case 7:
                            WBinary();
                            break;
                        case 8:
                            WSueven();
                            break;
                        case 9:
                            WSuofSq();
                            break;
                        case 10:
                            Walpha();
                            break;
                        case 11:
                            system("cls");
                            cout << "\n\n\t <- BACK TO LOOP MENU\n" << endl;
                            _getch();
                            goto lmenu;
                            break;
                        default:
                            system("cls");
                            cout << "\n\n\tINVALID CHOICE!\n" << endl;
                            _getch();
                            goto wmenu;
                            break;
                        }
                    } while (w_menu <= 11);
                    break;

                case 3:
                    int d_menu;
                    do {
                    dmenu:
                        system("cls");
                        cout << "\\n\t\t\t\t\t\tDO WHILE LOOP MENU\n";
                        cout << "\n\t\t [1] - Print numbers from 1 to 10 \n";
                        cout << "\n\t\t [2] - Print all even number numbers from 1 to N \n";
                        cout << "\n\t\t [3] - Compute and display its factorial \n";
                        cout << "\n\t\t [4] - Display the N Fibonacci series \n";
                        cout << "\n\t\t [5] - Display the reverse of the number \n";
                        cout << "\n\t\t [6] - Identify whether the word is a palindrome \n";
                        cout << "\n\t\t [7] - Convert a decimal number to binary number \n";
                        cout << "\n\t\t [8] - Get the sum of all even numbers from 1 to N \n";
                        cout << "\n\t\t [9] - Get the sum of the square of all even number from N to M \n";
                        cout << "\n\t\t [10] - print letters from A-Z \n";
                        cout << "\n\t\t [11] - Go Back\n";
                        cout << "\n\t\t\tEnter your choice: ";
                        cin >> d_menu;

                        while (cin.fail()) {
                            cin.clear();
                            cin.ignore();
                            cout << "\n\t\t\tInvalid Input\n";
                            cout << "\n\t\t\tEnter your choice: ";
                            cin >> d_menu;
                        }

                        switch (d_menu) {
                        case 1:
                            Donetoten();
                            message();
                            break;
                        case 2:
                            Deven();
                            message();
                            break;
                        case 3:
                            Dfact();
                            message();
                            break;
                        case 4:
                            DFibo();
                            message();
                            break;
                        case 5:
                            Drev();
                            message();
                            break;
                        case 6:
                            Dpalin();
                            message();
                            break;
                        case 7:
                            DBinary();
                            message();
                            break;
                        case 8:
                            DSueven();
                            message();
                            break;
                        case 9:
                            DSuofSq();
                            message();
                            break;
                        case 10:
                            Dalpha();
                            message();
                            break;
                        case 11:
                            system("cls");
                            cout << "\n\n\t <- BACK TO LOOP MENU\n" << endl;
                            _getch();
                            goto lmenu;
                            break;
                        default:
                            system("cls");
                            cout << "\n\n\tINVALID CHOICE!\n" << endl;
                            _getch();
                            goto wmenu;
                            break;
                        }
                    } while (d_menu <= 11);
                    break;
                case 4:
                    system("cls");
                    cout << "\n\n\t <- BACK TO MAIN MENU\n" << endl;
                    _getch();
                    goto menu;
                    break;
                default:
                    system("cls");
                    cout << "\n\n\tINVALID CHOICE!\n" << endl;
                    _getch();
                    goto lmenu;
                }
            } while (l_menu <= 4);
            break;
        case 4:
            int oneD, numofE;
            system("cls");
            cout << "How many Elements do you want to have for your arrays: ";
            cin >> numofE;
            do {

                cout << "\n\n\t Hassan, Adnan T. BSIT 1-1 Array Programs\n";
            OneDMain:// For the Goto
                cout << "\n\t\t\t\t\t\tMain Menu Array\n";
                cout << "\n\t\t  [1] - Input Array Elements";
                cout << "\n\t\t [2] - Display Elements of the array";
                cout << "\n\t\t [3] - Search elements from the array";
                cout << "\n\t\t [4] - Sort the elements of the array";
                cout << "\n\t\t [5] - Delete elements from the array";
                cout << "\n\t\t [6] - Update/Edit the element of the array";
                cout << "\n\t\t [7] - Display the sum of all elements of the array and the sum of all cube of the elements of the array";
                cout << "\n\t\t [8] - Largest element in the array";
                cout << "\n\t\t [9] - Smallest element in the array";
                cout << "\n\t\t [10] - Display all even numbers in the array and display the sum of even numbers.";
                cout << "\n\t\t [11] - Display all odd numbers in the array and the sum of the square of odd numbers.";
                cout << "\n\t\t [12] - Display even and odd numbers and its summations";
                cout << "\n\t\t [13] - Display the index of the smallest element of the array";
                cout << "\n\t\t [14] - Display the index of the Largest element of the array";
                cout << "\n\t\t [15] - Display the sum of all the squares of the array and display all prime numbers in array";
                cout << "\n\t\t [16] - Create a function that will copy the elements of the 1-D array to another 1-D";
                cout << "\n\t\t [17] - Using the binary search algorithm, create a program that will search for an element of a 1-D array";
                cout << "\n\t\t [18] -  Create a function that will sort the integer elements of a 1-D array in ascending order using the insertion algorithm";
                cout << "\n\t\t [19] - Go Back to Main Menu";
                cout << "\n\t\tEnter your choice: ";
                cin >> oneD;

                while (cin.fail()) {
                    cin.clear();
                    cin.ignore();
                    cout << "\n\t\t\tInvalid Input\n";
                    cout << "\n\t\t\tEnter your choice: ";
                    cin >> oneD;
                }

                switch (oneD) {
                case 1:
                    system("cls");
                    inputs(score, numofE);
                    system("cls");
                    break;
                case 2:
                    system("cls");
                    display(score, numofE);
                    system("cls");
                    break;
                case 3:
                    system("cls");
                    int cho;
                    do {
                        cout << "\n\tSearch\n";
                        cout << "1. Binary Search\n";
                        cout << "2. Linear Search\n";
                        cout << "3. Go back to Main Menu\n";
                        cout << "Enter your choice: ";
                        cin >> cho;

                        while (cin.fail()) {
                            cin.clear();
                            cin.ignore();
                            cout << "\n\t\t\tInvalid Input\n";
                            cout << "\n\t\t\tEnter your choice: ";
                            cin >> cho;
                        }

                        switch (cho) {
                        case 1:
                            system("cls");
                            int Uvalue, result;
                            cout << "Enter a number you want to search: ";
                            cin >> Uvalue;

                            result = Bsearch(score, numofE, Uvalue);

                            if (result >= 0)
                            {
                                cout << score[result] << "was found in the array" << endl;
                            }
                            else
                            {
                                cout << "The number you are searching for was not found in the array.";
                            }
                            _getch();
                            system("cls");
                            break;
                        case 2:
                            system("cls");
                            int Uvalue2, result2;

                            cout << "Enter a number you want to search: ";
                            cin >> Uvalue2;

                            result2 = Lsearch(score, numofE, Uvalue2);

                            if (result2 >= 0)
                            {
                                cout << score[result2] << "was found in the array" << endl;
                            }
                            else
                            {
                                cout << "The number you are searching for was not found in the array.";
                            }
                            _getch();
                            system("cls");
                            break;
                        case 3:
                            system("cls");
                            goto OneDMain;
                            break;
                        default:
                            system("cls");
                            cout << "Invalid Choice!";
                            break;
                        }
                    } while (cho <= 3);
                    break; // Case 3
                case 4:
                    system("cls");
                    int cho2;
                    do {
                        cout << "\n\tSort\n";
                        cout << "1. Ascending\n";
                        cout << "2. Descending\n";
                        cout << "3. Go back to Array Menu\n";
                        cout << "Enter your choice: ";
                        cin >> cho2;

                        while (cin.fail()) {
                            cin.clear();
                            cin.ignore();
                            cout << "\n\t\t\tInvalid Input\n";
                            cout << "\n\t\t\tEnter your choice: ";
                            cin >> cho2;
                        }

                        switch (cho2) {
                        case 1:
                            system("cls");
                            Isort(score, numofE);
                            _getch();
                            system("cls");
                            break;
                        case 2:
                            system("cls");
                            Isortdes(score, numofE);
                            _getch();
                            system("cls");
                            break;
                        case 3:
                            system("cls");
                            goto OneDMain;
                            break;
                        default:
                            system("cls");
                            cout << "Invalid Choice!";
                            break;
                        }
                    } while (cho2 <= 3);
                    break; // Case 4

                case 5:
                    system("cls");
                    int del;
                    del = Erase(score, numofE);
                    if (del == 1) {
                        cout << "\nThe number is delete successfully";
                        cout << "'\nThe new Elements in the array: ";
                        for (int x = 0; x < numofE; x++) {
                            cout << score[x] << " ";
                        }
                    }
                    else {
                        cout << "\n the number is not in the array.";
                    }
                    _getch();
                    system("cls");
                    break;
                case 6:
                    system("cls");
                    int i, j;
                    i = 0;
                    j = 0;
                    Update(score, i, j, numofE);
                    system("cls");
                    break;
                case 7:
                    system("cls");
                    cout << "\nThe sum of cube of the Arrays: " << sum(score, numofE, 0);
                    _getch();
                    system("cls");
                    break;
                case 8:
                    system("cls");
                    int n;
                    n = sizeof(score) / sizeof(score[0]);
                    cout << "Largest number in array is: " << large(score, numofE);
                    _getch();
                    system("cls");
                    break;
                case 9:
                    system("cls");
                    int x;
                    x = sizeof(score) / sizeof(score[0]);
                    cout << "\nSmallest number in array is: " << smalls(score, numofE);
                    _getch();
                    system("cls");
                    break;
                case 10:
                    even(score, numofE);
                    _getch();
                    system("cls");
                    break;
                case 11:
                    odd(score, numofE);
                    _getch();
                    system("cls");
                    break;
                case 12:
                    system("cls");
                    SumofEO(score, numofE);
                    system("cls");
                    break;
                case 13:
                    system("cls");
                    Indexs(score, numofE);
                    _getch();
                    system("cls");
                    break;
                case 14:
                    Indexl(score, numofE);
                    _getch();
                    system("cls");
                    break;
                case 15:
                    system("cls");
                    cout << sos(score, numofE);
                    dprime(score, numofE);
                    _getch();
                    system("cls");
                    break;
                case 16:
                    system("cls");
                    copy(score, score2, numofE);
                    _getch();
                    system("cls");
                    break;
                case 17:
                    system("cls");
                    int srch, rslt;
                    cout << "Enter a number you want to search: ";
                    cin >> srch;

                    rslt = Bsearch(score, numofE, srch);

                    if (rslt >= 0)
                    {
                        cout << score[rslt] << "was found in the array" << endl;
                    }
                    else
                    {
                        cout << "The number you are searching for was not found in the array.";
                    }
                    _getch();
                    system("cls");
                    break;
                case 18:
                    system("cls");
                    Isort(score, numofE);
                    _getch();
                    system("cls");
                    break;
                case 19:
                    cout << "Going back to Main Menu!";
                    system("cls");
                    _getch();
                    goto menu;
                    break;
                default:
                    system("cls");
                    cout << "Invalid Choice!";
                    break;
                }
            } while (oneD <= 19);
            break;
        case 5:
            int TwoD;
            system("cls");

            cout << "\n\t\tHow many Row: ";
            cin >> row;
            cout << "\n\t\tHow many Column: ";
            cin >> col;

            cout << endl << endl;

            do {
            TwoDMain:
                cout << "\n\n\t Hassan, Adnan T. BSIT 1-1 Array Program\n";
                cout << "\n\t\t\t\t\t\tMain Menu Array\n";
                cout << "\n\t\t [1] - Input Array Elements";
                cout << "\n\t\t [2] - Display Elements of the array";
                cout << "\n\t\t [3] - Search elements from the array";
                cout << "\n\t\t [4] - Sort the elements of the array";
                cout << "\n\t\t [5] - Delete elements from the array";
                cout << "\n\t\t [6] - Update/Edit the element of the array";
                cout << "\n\t\t [7] - Display the sum of all elements of the array and the sum of all cube of the elements of the array";
                cout << "\n\t\t [8] - Largest element in the array";
                cout << "\n\t\t [9] - Smallest element in the array";
                cout << "\n\t\t [10] -  Display all even numbers in the array and display the sum of even numbers.";
                cout << "\n\t\t [11] - Display all odd numbers in the array and the sum of the square of odd numbers.";
                cout << "\n\t\t [12] - Display even and odd numbers and its summations";
                cout << "\n\t\t [13] - Display the index of the smallest element of the array";
                cout << "\n\t\t [14] - Display the index of the Largest element of the array";
                cout << "\n\t\t [15] - Display the sum of all the squares of the array and display all prime numbers in array";
                cout << "\n\t\t [16] - Create a function that will copy the elements of the 2-D array to another 2-D";
                cout << "\n\t\t [17] - Using the binary search algorithm, create a program that will search for an element of a 2-D array";
                cout << "\n\t\t [18] - Create a function that will sort the integer elements of a 2-D array in ascending order using the insertion algorithm";
                cout << "\n\t\t [19] -  A function with argument that returns the sum of all diagonal in the matrix. Diagonal elements "
                    "\n\t\t\t\tare those elements whose row and columns are the same.";
                cout << "\n\t\t [20] -  A function with argument that accept two matrices and then returns true "
                    "\n\t\t\t\tif the two matrices are equal or false if the two matrices are not equal.";
                cout << "\n\t\t [21] -  Go Back";
                cout << "\n\t\tEnter your choice: ";
                cin >> TwoD;

                while (cin.fail()) {
                    cin.clear();
                    cin.ignore();
                    cout << "\n\t\t\tInvalid Input\n";
                    cout << "\n\t\t\tEnter your choice: ";
                    cin >> TwoD;
                }

                switch (TwoD) {
                case 1:
                    system("cls");
                    input(array, row, col);
                    _getch();
                    system("cls");
                    break;
                case 2:
                    system("cls");
                    display(array, row, col);
                    _getch();
                    system("cls");
                    break;
                case 3:
                    system("cls");
                    int cho;
                    do {
                        cout << "\n\t\tSearch\n";
                        cout << "\n\t\t [1] - Binary Search\n";
                        cout << "\n\t\t [2] -  Linear Search\n";
                        cout << "\n\t\t [3] -  Go back to Main Menu\n";
                        cout << "\n\t\tEnter your choice: ";
                        cin >> cho;

                        while (cin.fail()) {
                            cin.clear();
                            cin.ignore();
                            cout << "\n\t\t\tInvalid Input\n";
                            cout << "\n\t\t\tEnter your choice: ";
                            cin >> cho;
                        }

                        switch (cho)
                        {
                        case 1:
                            system("cls");
                            int value;
                            cout << "What number do you want to search: ";
                            cin >> value;
                            rowFind(array, row, col, value);
                            _getch();
                            system("cls");
                            break;
                        case 2:
                            system("cls");
                            Lsearch(array, row, col);
                            _getch();
                            system("cls");
                            break;
                        case 3:
                            system("cls");
                            goto TwoDMain;
                            system("cls");
                            break;
                        default:
                            system("cls");
                            cout << "Error Input!";
                            _getch();
                            system("cls");
                            break;
                        }
                    } while (cho <= 3);
                    break;

                case 4:
                    system("cls");
                    int cho2;
                    cout << "\n\t\tSort\n";
                    cout << "\n\t\t [1] - Ascending\n";
                    cout << "\n\t\t [2] -  Descending\n";
                    cout << "\n\t\t [3] -  Go back to Main Menu\n";
                    cout << "\n\t\tEnter your choice: ";
                    cin >> cho2;

                    while (cin.fail()) {
                        cin.clear();
                        cin.ignore();
                        cout << "\n\t\t\tInvalid Input\n";
                        cout << "\n\t\t\tEnter your choice: ";
                        cin >> cho2;
                    }

                    switch (cho2) {
                    case 1:
                        system("cls");
                        Ainsertion(array, row, col);
                        _getch();
                        system("cls");
                        break;
                    case 2:
                        system("cls");
                        Dinsertion(array, row, col);
                        _getch();
                        system("cls");
                        break;
                    case 3:
                        system("cls");
                        goto TwoDMain;
                        system("cls");
                        break;
                    default:
                        system("cls");
                        cout << "Error Input!";
                        _getch();
                        system("cls");
                        break;
                    }
                    break;
                case 5:
                    system("cls");
                    int del;
                    del = delet(array, row, col);
                    if (del == 1) {
                        cout << "\nThe number is deleted successfully";
                        cout << "\nThe New Elements in the array: ";
                        for (int x = 0; x < row; x++) {
                            for (int y = 0; y < col; y++) {
                                cout << array[x][y] << " ";
                            }
                        }
                    }
                    else {
                        cout << "\n The number is not in the array.";
                    }
                    _getch();
                    system("cls");
                    break;
                case 6:
                    system("cls");
                    uped(array, row, col);
                    _getch();
                    system("cls");
                    break;

                case 7:
                    system("cls");
                    int cube;
                    cube = sum(array, row, col, 0);
                    cout << "\nThe sum of Cube of the Arrays: " << cube;
                    _getch();
                    system("cls");
                    break;

                case 8:
                    system("cls");
                    int n;
                    n = sizeof(array) / sizeof(array[0][0]);
                    cout << "Largest number in array is: " << large(array, row, col);
                    _getch();
                    system("cls");
                    break;

                case 9:
                    system("cls");
                    int x;
                    x = sizeof(array) / sizeof(array[0][0]);
                    cout << "Smallest number in array is: " << smallss(array, row, col);
                    _getch();
                    system("cls");
                    break;

                case 10:
                    even(array, row, col);
                    break;
                case 11:
                    odd(array, row, col);
                    break;
                case 12:
                    SumofEO(array, row, col);
                    break;
                case 13:
                    system("cls");
                    Indexs(array, row, col);
                    _getch();
                    system("cls");
                    break;
                case 14:\
                    system("cls");
                    Indexl(array, row, col);
                    _getch();
                    system("cls");
                    break;
                case 15:
                    system("cls");
                    int sumofs;
                    sumofs = sos(array, row, col);
                    cout << "The sum of all square in the array: " << sumofs << endl;
                    dprime(array, row, col);
                    _getch();
                    system("cls");
                    break;
                case 16:
                    system("cls");
                    copy(array, array1, row, col);
                    _getch();
                    system("cls");
                    break;
                case 17:
                    system("cls");
                    int value;
                    cout << "What number do you want to search: ";
                    cin >> value;
                    rowFind(array, row, col, value);
                    _getch();
                    system("cls");
                    break;
                case 18:
                    system("cls");
                    Isort(score, numofE);
                    _getch();
                    system("cls");
                    break;
                case 19:
                    system("cls");
                    cout << "The sum of diagonal in array is " << dia(array, row, col);
                    _getch();
                    break;
                case 20:
                    system("cls");
                    if (equal(array, array1, row, col))
                        cout << "The Two Matrices is Equal";
                    else
                        cout << "The Two Matrices is Not Equal";
                    _getch();
                    break;
                case 21:
                    cout << "Going Back\n";
                    system("cls");
                    _getch();
                    goto menu;
                    break;
                default:
                    system("cls");
                    cout << "Error Input!";
                    _getch();
                    system("cls");
                    break;
                }
            } while (TwoD <= 21);
            break;
        case 6:
            system("cls");
            int recn, value;
            do {
            recmain:
                cout << "\n\n\t Hassan, Adnan T. BSIT 1-1 Recursive Program\n";
                cout << "\n\t\t\t\t\t\tMain Menu Recursive\n";
                cout << "\n\t\t [1] - Sum of 1 to Num";
                cout << "\n\t\t [2] - Fibonacci Series";
                cout << "\n\t\t [3] - Factorial";
                cout << "\n\t\t [4] - Go Back to Main Menu";
                cout << "\n\t\t Enter your Choice: ";
                cin >> recn;

                while (cin.fail()) {
                    cin.clear();
                    cin.ignore();
                    cout << "\n\t\t\tInvalid Input\n";
                    cout << "\n\t\t\tEnter your choice: ";
                    cin >> recn;
                }

                switch (recn) {
                case 1:
                    system("cls");
                    cout << "\n\t\tEnter a number: ";
                    cin >> value;
                    cout << "\n\t\tThe sum of 1 - " << value << " : " << recsum(1, value);
                    _getch();
                    break;
                case 2:
                    system("cls");
                    int xx, ii;
                    ii = 0;
                    cout << "Enter the number of terms of series : ";
                    cin >> xx;
                    cout << "\nFibonnaci Series : ";
                    while (ii < xx) {
                        cout << " " << fibonnaci(ii);
                        ii++;
                    }
                    _getch();
                    break;
                case 3:
                    system("cls");
                    int numf;
                    cout << "Enter a number: ";
                    cin >> numf;
                    cout << "Factorial of entered number: " << f(numf);
                    _getch();
                    break;
                case 4:
                    system("cls");
                    goto menu;
                    break;
                default:
                    system("cls");
                    cout << "Invalid input";
                    goto recmain;
                    system("cls");
                    break;
                }
            } while (recn >= 4);
            break;
        case 7:
            system("cls");
            sign choice;
            studentGrade info[20];
            int numofS;
            cout << "How many students would you like to enter informations: ";
            cin >> numofS;
            system("cls");
            do {
            Main:
                studentGrade sorting;
                cout << "\n\n\t Hassan, Adnan T. BSIT 1-1 Program Compilations\n";
                cout << "\n\t\t\tProgramming 2\n";
                cout << "\n\t\t\tStudent Grades\n";
                cout << "\n\t\t[A] - Add students info except quiz2grade,quiz1grade,semestralgrade,equigrade and remarks.\n";
                cout << "\n\t\t[B] - Display students info in horizontal manner \n";
                cout << "\n\t\t[C] - Input the total score for quiz1 and quiz2; these variables must be global variables then compute the "
                    "\n\t\t\tquiz1Grade,quiz2grade,semestralGrade,Equigrade and remarks.\n";
                cout << "\n\t\t[D] - Search Students\n";
                cout << "\n\t\t[E] - Sort Records in descending order based on equiGrade. \n";
                cout << "\n\t\t[F] - Go Back to Main Menu \n";
                cout << "\n\t\tEnter Choice: ";
                cin >> choice;
                cin.ignore();

                switch (choice) {
                case 'A':
                    system("cls");
                    getdata(info, numofS);
                    system("cls");
                    break;
                case 'B':
                    system("cls");
                    displaydata(info, numofS);
                    _getch();
                    system("cls");
                    break;
                case 'C':
                    system("cls");
                    computation(info, numofS);
                    equi(info, numofS);
                    semgrade(info, numofS);
                    rem(info, numofS);
                    _getch();
                    system("cls");
                    break;
                case 'D':
                    system("cls");
                    search(info, numofS);
                    _getch();
                    system("cls");
                    break;
                case 'E':
                    system("cls");
                    sortStudent(info, numofS);
                    _getch();
                    system("cls");
                    break;
                case 'F':
                    system("cls");
                    goto menu;
                    break;
                default:
                    system("cls");
                    goto Main;
                    break;
                }
            } while (choice <= 'E');
            break;
        case 8:
            system("cls");
            int filecho;
            do {
            filemain:
                cout << "\n\n\t Hassan, Adnan T. BSIT 1-1 Structure Program\n";
                cout << "\n\t\t\t\t\t\tMain Menu Structure\n";
                cout << "\n\t\t [1] - Enter or Insert Data into File";
                cout << "\n\t\t [2] - Display Contents of text file";
                cout << "\n\t\t [3] - Username and Password Registration System";
                cout << "\n\t\t [4] - Go Back to Main Menu";
                cout << "\n\t\t Enter your choice: ";
                cin >> filecho;
                while (cin.fail()) {
                    cin.clear();
                    cin.ignore();
                    cout << "\n\t\t\tInvalid Input\n";
                    cout << "\n\t\t\tEnter your choice: ";
                    cin >> filecho;
                }

                switch (filecho) {
                case 1:
                    system("cls");
                    insert();
                    system("cls");
                    _getch();
                    break;
                case 2:
                    system("cls");
                    disp();
                    _getch();
                    system("cls");
                    break;
                case 3:
                    system("cls");
                    regist();
                    _getch();
                    system("cls");
                    break;
                case 4:
                    system("cls");
                    goto menu;
                    _getch();
                    break;
                default:
                    system("cls");
                    cout << "Invalid Input";
                    _getch();
                    break;
                }
            } while (filecho <= 4);
            break;
        case 9:
            system("cls");
            cout << "\n\t\tThe Program is Exiting" << endl;
            cout << "\n\t\tThank you <3" << endl;
            exit(0);
            _getch();
            break;
        default:
            system("cls");
            cout << "Invalid choice\n";
            _getch();
            goto menu;
            break;
        }

    }while (m_menu != 9);
}
