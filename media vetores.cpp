/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
      float notas[5] = {10.0,5.5,6.6,4.5,0.0};
    float alturas[3];
    alturas[0] = 1.85;
    alturas[1] = 1.70;
    alturas[2] = 1.61;
    float media = 0;
    for(int i =0; i<5; i++){
        
        media=media+notas[i];
    }

    media=media/5;
    cout << "a media de notas é: " << media;
}
