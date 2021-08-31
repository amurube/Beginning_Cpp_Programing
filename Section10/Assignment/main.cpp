/*
Write a C++ program that displays a Letter Pyramid from a user-provided std::string.
Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows:
It's much easier to understand the Letter Pyramid given examples.
If the user enters the string "ABC", then your program should display:
  A                                                                                                                    
 ABA                                                                                                                   
ABCBA 

If the user enters the string, "12345", then your program should display:
 
    1                                                                                                                  
   121                                                                                                                 
  12321                                                                                                                
 1234321                                                                                                               
123454321
 
If the user enters 'ABCDEFG', then your program should display:
 
      A                                                                                                                
     ABA                                                                                                               
    ABCBA                                                                                                              
   ABCDCBA                                                                                                             
  ABCDEDCBA                                                                                                            
 ABCDEFEDCBA                                                                                                           
ABCDEFGFEDCBA
If the user enters 'ABCDEFGHIJKLMNOPQRSTUVWXYZ', then your program should display:
                         A
                        ABA
                       ABCBA
                      ABCDCBA
                     ABCDEDCBA
                    ABCDEFEDCBA
                   ABCDEFGFEDCBA
                  ABCDEFGHGFEDCBA
                 ABCDEFGHIHGFEDCBA
                ABCDEFGHIJIHGFEDCBA
               ABCDEFGHIJKJIHGFEDCBA
              ABCDEFGHIJKLKJIHGFEDCBA
             ABCDEFGHIJKLMLKJIHGFEDCBA
            ABCDEFGHIJKLMNMLKJIHGFEDCBA
           ABCDEFGHIJKLMNONMLKJIHGFEDCBA
          ABCDEFGHIJKLMNOPONMLKJIHGFEDCBA
         ABCDEFGHIJKLMNOPQPONMLKJIHGFEDCBA
        ABCDEFGHIJKLMNOPQRQPONMLKJIHGFEDCBA
       ABCDEFGHIJKLMNOPQRSRQPONMLKJIHGFEDCBA
      ABCDEFGHIJKLMNOPQRSTSRQPONMLKJIHGFEDCBA
     ABCDEFGHIJKLMNOPQRSTUTSRQPONMLKJIHGFEDCBA
    ABCDEFGHIJKLMNOPQRSTUVUTSRQPONMLKJIHGFEDCBA
   ABCDEFGHIJKLMNOPQRSTUVWVUTSRQPONMLKJIHGFEDCBA
  ABCDEFGHIJKLMNOPQRSTUVWXWVUTSRQPONMLKJIHGFEDCBA
 ABCDEFGHIJKLMNOPQRSTUVWXYXWVUTSRQPONMLKJIHGFEDCBA
ABCDEFGHIJKLMNOPQRSTUVWXYZYXWVUTSRQPONMLKJIHGFEDCBA
If the user enters "C++isFun!", then your program should display:
 
        C                                                                                                              
       C+C                                                                                                             
      C+++C                                                                                                            
     C++i++C                                                                                                           
    C++isi++C                                                                                                          
   C++isFsi++C                                                                                                         
  C++isFuFsi++C                                                                                                        
 C++isFunuFsi++C                                                                                                       
C++isFun!nuFsi++C

Think about the problem before you begin and break it down into steps.
This can be a very challenging problem to solve!
*****  Don't forget to paste your code solution when you submit.******
Have fun!


*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user_string {}; 
    

    cout << "Enter a string of characters to display the piramid: ";
    cin >> user_string;

    for (int i{0}; i<user_string.length(); i++)
    {
        string helper {};
        for (int j {0}; j <user_string.length() - i -1; j++)
        {
            helper+=" ";
            cout << " ";
        }
        int c {-1};
        while( c < i)
        {
            c++;
            helper+=user_string.at(c);
            cout << user_string.at(c);
        }
        c--;
        while (c >= 0)
        {
            helper += user_string.at(c);
            cout << user_string.at(c);
            c--;
        }

    cout << endl;
    }  

    return 0;
}