#include <iostream>
using namespace std;

int main() {
    
    int f,c,suma = 0;
    cin >> f >> c;
    
    for (int j=0; j<f; ++j) {        
        bool blanc = (j%2 == 0);
        for (int i=0; i<c; ++i) {
            char n;
            cin >> n;
            
            if (blanc) suma += n - '0'; 
            blanc = not blanc;
        }        
    }
    cout << suma << endl;
}
