#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv) {
        char str[15] = "input";
        strcat( str, argv[1] );
        strcat( str, ".txt" );
        freopen( str, "w+", stdout );
        unsigned int a, b, c;
        srand( atoi( argv[1] ) );
        a = 1 + ( rand() % 100 );
        b = 1 + ( rand() % 100 );
        c = 1 + ( rand() % 100 );
        cout << a << " " << b << " " << c << "\n";
        return 0;
}