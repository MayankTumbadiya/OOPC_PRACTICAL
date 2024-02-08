#include <iostream>
using namespace std;
int main()
{
    char Student_id[10];
    char Student_name[20];
    int semester;
    char subject_name[3][10];
    int subject_credit[3];
    int Th[3], Pr[3];
    int Ci = 0;
    int Gt[3], Gp[3];     // Gt for Grade Theory and Gp for grade Practical
    int Tgt = 0, Tgp = 0; // Tgt for total grade theory and Tgp for Total grade practical
    float sgpa1, sgpa2;   // sgpa1 for theory and sgpa 2 for practical
    float sgpa;
    cout << "Student ID : ";
    cin.getline(Student_id, 10);
    cout << "Student name : ";
    cin.getline(Student_name, 20);
    cout << "Semester : ";
    cin >> semester;
    cout << "Enter Details" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> subject_name[i];
        cin >> Th[i];
        cin >> Pr[i];
        cout << "Enter Credit of Course :";
        cin >> subject_credit[i];
        Ci += subject_credit[i];
    }
    cout << "Display Details" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << subject_name[i] << endl;
        cout << Th[i] << endl;
        cout << Pr[i] << endl;
    }
    cout << "Total Credit :" << endl;
    cout << Ci << endl;
    cout << "Grades of Theory";
    for (int i = 0; i < 3; i++)
    {
        if (Th[i] < 45)
        {
            cout << "FF" << endl;
            Gt[i] = 0;
        }
        else if (Th[i] < 50 && Th[i] >= 45)
        {
            cout << "DD" << endl;
            Gt[i] = 4;
        }
        else if (Th[i] < 55 && Th[i] >= 50)
        {
            cout << "CD" << endl;
            Gt[i] = 5;
        }
        else if (Th[i] < 60 && Th[i] >= 55)
        {
            cout << "CC" << endl;
            Gt[i] = 6;
        }
        else if (Th[i] < 66 && Th[i] >= 60)
        {
            cout << "BC" << endl;
            Gt[i] = 7;
        }
        else if (Th[i] < 73 && Th[i] >= 66)
        {
            cout << "BB" << endl;
            Gt[i] = 8;
        }
        else if (Th[i] < 80 && Th[i] >= 73)
        {
            cout << "AB" << endl;
            Gt[i] = 9;
        }
        else if (Th[i] >= 80)
        {
            cout << "AA" << endl;
            Gt[i] = 10;
        }
    }
    cout << "Grades of Practical" << endl;
    for (int i = 0; i < 3; i++)
    {
        if (Pr[i] < 45)
        {
            cout << "FF" << endl;
            Gp[i] = 0;
        }
        else if (Pr[i] < 50 && Pr[i] >= 45)
        {
            cout << "DD" << endl;
            Gp[i] = 4;
        }
        else if (Pr[i] < 55 && Pr[i] >= 50)
        {
            cout << "CD" << endl;
            Gp[i] = 5;
        }
        else if (Pr[i] < 60 && Pr[i] >= 55)
        {
            cout << "CC" << endl;
            Gp[i] = 6;
        }
        else if (Pr[i] < 66 && Pr[i] >= 60)
        {
            cout << "BC" << endl;
            Gp[i] = 7;
        }
        else if (Pr[i] < 73 && Pr[i] >= 66)
        {
            cout << "BB" << endl;
            Gp[i] = 8;
        }
        else if (Pr[i] < 80 && Pr[i] >= 73)
        {
            cout << "AB" << endl;
            Gp[i] = 9;
        }
        else if (Pr[i] >= 80)
        {
            cout << "AA" << endl;
            Gp[i] = 10;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        Tgt = Tgt + (subject_credit[i] * Gt[i]);
        Tgp = Tgp + (subject_credit[i] * Gp[i]);
    }
    sgpa1 = Tgt / Ci;
    sgpa2 = Tgp / Ci;
    sgpa = ((sgpa1 + sgpa2) / 2);
    cout << "SGPA : " << endl;
    cout << sgpa << endl;
    return 0;
}