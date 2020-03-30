#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv) {
        int a, b, c;
        cin >> a >> b >> c;
        assert( 1 <= a && a <= 100 );
        assert( 1 <= b && b <= 100 );
        assert( 1 <= c && c <= 100 );
        if( a + b <= c || b + c <= a || c + a <= b ) {
                cout << "No\n";
        }
        else if( a == b && b == c ) {
                cout << "Equilateral\n";
        }
        else if( ( a == b && b != c ) || ( a == c && b != c ) || ( b == c && b != a ) ) {
                cout << "Isosceles\n";
        }
        else if( a != b && b != c && c != a ) {
                cout << "Scalene\n";
        }
        else {
                assert( false );
        }
        return 0;
}