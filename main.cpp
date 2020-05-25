#include <bits/stdc++.h>
using namespace std;

int main() {
	cout << "ContentType:application/json;charset=UTF-8" << (char)13 << (char)10 << "\n";
	fstream plik;
	queue <int> Q;
        plik.open("F:\\Program\\Kolejeczka\\a.txt", ios::in);
        if(plik.good())
        {
            while(!plik.eof())
            {
                int dane; plik >> dane;
                Q.push(dane);
            }
        }
        plik.close();
        if(!Q.empty())
        {
            cout << "[\n";
            char x = '#'-1;
            while(!Q.empty())
            {
                cout << " {\n" << "   " << x << "numer" << x << ": " << x << Q.front() << x << "\n }";
                if(Q.size() != 1)
                    cout << ",";
                cout << "\n";
                Q.pop();
            }
            cout << "]";
        }

    return 0;
}
