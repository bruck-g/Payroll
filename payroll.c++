
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// user-defined function prototypes
/* the function instructions describes the
program usage to the user */
void instructions();
/* the function reportTitle displays the
payroll report titles in columnar format */
void reportTitle();
int main()
{
// call the function instructions
instructions();
// call the function reportTitle
reportTitle();
system("pause");
return 0;
}
/* the function instructions describes the
program usage to the user */
void instructions()
{
// display program instructions
cout << "This payroll program calculates an individual "
<< "employee pay and\ncompany totals "
<< "using data from a data file payroll.txt.\n"
<< "\n\nA payroll report showing payroll information "
<< " is displayed.\n\n";
}
/* the function reportTitle displays the
payroll report titles in columnar format */
void reportTitle()
{
// set program formatting
cout << setprecision(2) << fixed << showpoint << left;
// display report titles
cout << setw(20) << "Employee" << setw(10) << "Hourly" <<
setw(10) << "Hours"
<< setw(10) << "Tax" << setw(10) << "Gross" << setw(10) <<
"Net" << endl;
cout << setw(20) << "Name" << setw(10) << "Rate" << setw(10) <<
"Worked"
<< setw(10) << "Rate" << setw(10) << "Amount" << setw(10)
<<"Amount" << endl << endl;
}
