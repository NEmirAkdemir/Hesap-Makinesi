//Niyazi Emir AKDEMÝR
//231030010

#include <iostream>
#include <iomanip>
#include <cctype>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    double sayi1, sayi2;
    char islem;
    int sayac = 0;

    cout << "***************************" << endl;
    cout << "****                   ****" << endl;
    cout << "****  HESAP  MAKÝNESÝ  ****" << endl;
    cout << "****                   ****" << endl;
    cout << "****         By N.Emir ****" << endl;
    cout << "***************************" << endl;
    cout << endl;
    
    do
    {
        sayac++;
        cout << "***************************" << endl;
        cout << "*******     " << setw(3) << sayac << "     *******" << endl;
        cout << "***************************" << endl;
        cout << "Ýlk Sayýyý Giriniz: ";
        cin >> sayi1;
        cout << "Ýkinci Sayýyý Giriniz: ";
        cin >> sayi2;
        if (isalpha(sayi1)) {
            cout << "Geçersiz karakter lütfen sayýlarla iþlem yapýnýz!!!" << endl;    
        }

        cout << "Ýþlem Listesi: " << endl;
        cout << "Toplama :  + " << endl;
        cout << "Çýkarma :  - " << endl;
        cout << "Çarpma  :  * " << endl;
        cout << "Bölme   :  / " << endl;
        cout << "Mod Alma:  % " << endl;
        cout << "Çýkýþ   :  q " << endl;
        cout << "Yapýlacak iþlemi giriniz: ";

        cin >> islem;
        
        switch (islem)
        {
        case '+':
            cout << "Sonuç : " << sayi1 + sayi2 << endl;
            cout << endl;
            break;
        case '-':
            cout << "Sonuç : " << sayi1 - sayi2 << endl;
            cout << endl;
            break;
        case '*':
            cout << "Sonuç : " << sayi1 * sayi2 << endl;
            cout << endl;
            break;
        case '/':
            if (sayi2 == 0)
            {
                cout << "Payda 0 olamaz. " << endl;
                cout << endl;
            }
            else
                cout << "Sonuç : " << sayi1 / sayi2 << endl;
            cout << endl;
            break;
        case '%':
            if (sayi1 != (int)sayi1)
                cout << "Mod alma iþlemleri için tam sayý giriniz :  " << sayi1 << endl;
            else
                if (sayi2 != (int)sayi2)
                    cout << "Mod alma iþlemleri için tam sayý giriniz :  " << sayi2 << endl;
                else
                    cout << "Sonuç : " << (int)sayi1 % (int)sayi2 << endl;
            cout << endl;
            break;
        case 'q':
        case 'Q':
            islem = 'q';
            break;
        default:
            cout << "Geçersiz iþlem lütfen tekrar deneyiniz. " << endl;
            break;
        }
    } while (islem != 'q');

    cout << "Beni " << sayac << " kez kullandýnýz tekrar bekleriz. " << endl;
    return 0;
}

