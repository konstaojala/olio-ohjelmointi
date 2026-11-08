#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

void calcSum(int a, int b)
{
    int summa = a + b;
    cout << "Summa: " << summa << endl;
}

void calcDiv(int a, int b)
{
    if (b == 0)
    {
    cout << "Jakaja ei saa olla nolla" << endl;
    }
    else
    {
    float tulos = (float)a / b;
    cout << "Osamaara: " << fixed << setprecision(2) << tulos << endl;
    }
}

int retSum(int a, int b)
{
    int summa = a + b;
    return summa;
}

float retDiv(int a, int b)
{
    if (b == 0)
    {
    throw runtime_error("jakaja ei saa olla nolla");
    }

    float tulos = (float)a / b;
    return tulos;
}

int main()
{
    int a, b;

    cout << "Anna luku a: ";
    cin >> a;

    cout << "Anna luku b: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    int summa = retSum(a, b);
    cout << "Summa: " << summa << endl;

    try
    {
    float result = retDiv(a, b);
    cout << "Osamaara: " << result << endl;
    }
    catch (runtime_error& e)
    {
    cout << "Error " << e.what() << endl;
    }

    return 0;
}
