#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << " hello pointers " << endl;

    // create a char array
    char myChars[3];
     char myCharToFillArray = 'a';
     // use a for loop to fill the array with a b c
     for (int i = 0; i < 3; i++){
        myChars[i] = myCharToFillArray;
        myCharToFillArray++;
     }
      for (int i = 0; i < 3; i++){
     cout << "  " << myChars[i] << endl;
      }
      char myChar = 'D';

      char* pMyCharPtr;

      pMyCharPtr = &myChar;

      cout << " i expect to see a D :" << *pMyCharPtr << endl;


      char* pMyArrayPtr;
      pMyArrayPtr = myChars;
      // output derefence
      cout << "\n should be the first char in the array: (a)" << *pMyArrayPtr << endl;

      // increment the array pointer
      pMyArrayPtr++;
 // output derefence
      cout << "\n should be the second char in the array: (b)" << *pMyArrayPtr << endl;
cout << &pMyArrayPtr;

// point to the array
pMyCharPtr = myChars;
cout << "\n\n";

// output the point's value
cout << " should be a andress " << pMyCharPtr;
cout << "\n\n";

// output the derefenced pointer
cout << " shiuld be the first character in the array :" << *pMyCharPtr;
cout << "\n\n";


// derefence the pointer and output
cout << " should be a z character :" << myChar;
cout << "\n\n\n\n";


    return 0;
}
