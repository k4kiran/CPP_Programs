//add header
#ifndef INPUTVALIDATIONS2_H_INCLUDED
#define INPUTVALIDATIONS2_H_INCLUDED

#include <iostream>
#include <string>
#include <limits.h>
#include <float.h>

using namespace std;

class CValidateInput()
{
    public:
	
	//add comment
        int ValidateInt( int nMinimum = INT_MIN , int nMaximum = INT_MAX )
		{
			string szInput;
			int nTemp;
			string szTemp;
			repeat:
			getline(cin,szInput);
			szTemp=szInput;
			nTemp=atoi(szInput.c_str());
			szTemp = to_string(nTemp);

			if(szTemp == szInput && nTemp > nMinimum && nTemp< nMaximum )
			{
				cout << "Valid";
				return nTemp;
			}
			else
			{
				cout << "invalid input!! Try again :";
				goto repeat;
			}
		}

		


};


#endif // INPUTVALIDATIONS2_H_INCLUDED
