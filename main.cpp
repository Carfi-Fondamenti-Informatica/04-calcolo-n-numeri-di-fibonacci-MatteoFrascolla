#include <iostream>
using namespace std;

int main() {
   int a=1, b=1, c=0, n=0;
    cin >> n;
    if (n>=2){
        cout << a << endl;
        cout << b << endl;
        for (int i=0; i+2<n; i++){
            c=a+b;
            cout << c << endl;
            a=b;
            b=c;
        }
    }else{
        cout << "errore" << endl;
    }
   return 0;
}
