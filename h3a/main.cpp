#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    // Kantaluokka Chef
    {
        Chef kokki("Gordon Ramsay");
        kokki.makeSalad();
        kokki.makeSoup();
    }

    cout << endl;

    // Aliluokka ItalianChef
    {
        ItalianChef kokki("Anthony Bourdain");
        kokki.makeSalad();
        kokki.makeSoup();
        kokki.makePasta();
        cout << "name of the Italian Chef is "
        << kokki.getName() << endl;
    }
    return 0;
}