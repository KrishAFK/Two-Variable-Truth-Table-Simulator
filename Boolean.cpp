#include "Boolean.h"

#include <string>
using namespace std;

//Constructor
Boolean::Boolean(string exp)
{
   this->exp=exp; 
}

void Boolean::eval()
{
    string s;
    string t;
    int A,B;
    cout << "Enter operation : " ;
    getline(cin,s);
    t=s.substr(2,4);
    cout << "The string is : " << s[0] << endl;
    cout << "The string is : " << s[s.length() - 1] << endl;
    cout << "The string is : " << t << endl;


    if (s.find("NOT")!= std::string::npos)
    {
        char x = s[(s.length()-1)];
        cout << "| "<< x << " | NOT " << x << " |" << endl;
        for (A=0;A<2;A++) 
        {
            cout << "| " << A << " |   " << (!(A)) << "   |" << endl;
        }
    }
    
    if (s.find("NAND")!= std::string::npos)
    {
        cout << "| A | B | A NAND B |" << endl;
        for (A=0;A<2;A++) 
        {
            for (B=0;B<2;B++)
            {
                cout << "| " << A << " | " << B << " | " << "   " << (!(A && B)) << "     |" << endl;
            }
        }
    }

    else if (s.find("AND")!= std::string::npos)
    {

        cout << "| A | B | A AND B|" << endl;
        for (A=0;A<2;A++) 
        {
            for (B=0;B<2;B++)
            {
                cout << "| " << A << " | " << B << " | " << "   " << (A && B) << "    |" << endl;  
            }
        }
    }

    if (s.find("NOR")!= std::string::npos)
    {
        cout << "| A | B | A NOR B |" << endl;
        for (A=0;A<2;A++) 
        {
            for (B=0;B<2;B++)
            {
                cout << "| " << A << " | " << B << " | " << "   " << (!(A||B)) << "    |" << endl; 
            }
        }
    }

    else if (s.find("XOR")!= std::string::npos)
    {
        cout << "| A | B | A XOR B |" << endl;
        for (A=0;A<2;A++) 
        {
            for (B=0;B<2;B++)
            {
                cout << "| " << A << " | " << B << " | " << "   " << (A^B) << "    |" << endl;
            }
        }
    }

    else if (s.find("OR")!= std::string::npos)
    {
        cout << "| A | B | A OR B |" << endl;
        for (A=0;A<2;A++) 
        {
            for (B=0;B<2;B++)
            {
                cout << "| " << A << " | " << B << " | " << "   " << (A||B) << "   |" << endl;           
            }
        }
    }

    

    

}