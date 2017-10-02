#include <iostream>

using namespace std;

int main(int argc,char*argv[])
{
    int liczba;
    cout << "Podaj liczbe wierszy" << endl;
    cin >> liczba;
    for (int i=1; i<=liczba; i++)
    {
        for(int j=1; j<=(liczba-i)+20 ; j++)
        {
            cout << " ";
        }
        for(int k=1; k<=(2*i)-1 ; k++)
        {
             if (k%2==0)
                cout<<" ";
             else
            cout << "*";
        }
        cout<< " " << endl;
    }

    return 0;
}
