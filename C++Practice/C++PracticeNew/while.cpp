/*while loop: aka la sentencia while

while(expresión lógica){
    conjunto de instrucciones;
}
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}