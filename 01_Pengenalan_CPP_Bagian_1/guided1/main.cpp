/*#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Saya lagi belajar c++ nih" << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main () {
    int inp;
    cin >> inp;
    cout << "nilai = " << inp;
    return 0;
}

#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int W, X, Y; float Z;
    X = 7; Y = 3; W = 1;
    Z = (X+Y)/(Y+W);
    cout<< "Nilai z = " << Z << endl;
    return 0;
}

/contoh penggunaan if else'/
#include <iostream>

using namespace std;
int main(){
    double tot_pembelian, diskon;
    cout<<"total pembelian: Rp = ";
    cin>>tot_pembelian;
    diskon = 0;
    if(tot_pembelian >= 100000)
        diskon = 0.05*tot_pembelian;
    else
        diskon = 0;
    cout<<"besar diskon = Rp" <<diskon;
}

#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int i = 1;
    int jum;
    cin>>jum;
    do{
        cout<<"baris ke-"<<i+1<<endl;
        i++;hdgghsagdhagdjahuyhaahg
    } while(i<jum);
    getch();
    return 0;
}
