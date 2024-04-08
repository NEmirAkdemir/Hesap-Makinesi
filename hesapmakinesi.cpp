//Niyazi Emir AKDEM�R
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
    cout << "****  HESAP  MAK�NES�  ****" << endl;
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
        cout << "�lk Say�y� Giriniz: ";
        cin >> sayi1;
        cout << "�kinci Say�y� Giriniz: ";
        cin >> sayi2;
        if (isalpha(sayi1)) {
            cout << "Ge�ersiz karakter l�tfen say�larla i�lem yap�n�z!!!" << endl;    
        }

        cout << "��lem Listesi: " << endl;
        cout << "Toplama :  + " << endl;
        cout << "��karma :  - " << endl;
        cout << "�arpma  :  * " << endl;
        cout << "B�lme   :  / " << endl;
        cout << "Mod Alma:  % " << endl;
        cout << "��k��   :  q " << endl;
        cout << "Yap�lacak i�lemi giriniz: ";

        cin >> islem;
        
        switch (islem)
        {
        case '+':
            cout << "Sonu� : " << sayi1 + sayi2 << endl;
            cout << endl;
            break;
        case '-':
            cout << "Sonu� : " << sayi1 - sayi2 << endl;
            cout << endl;
            break;
        case '*':
            cout << "Sonu� : " << sayi1 * sayi2 << endl;
            cout << endl;
            break;
        case '/':
            if (sayi2 == 0)
            {
                cout << "Payda 0 olamaz. " << endl;
                cout << endl;
            }
            else
                cout << "Sonu� : " << sayi1 / sayi2 << endl;
            cout << endl;
            break;
        case '%':
            if (sayi1 != (int)sayi1)
                cout << "Mod alma i�lemleri i�in tam say� giriniz :  " << sayi1 << endl;
            else
                if (sayi2 != (int)sayi2)
                    cout << "Mod alma i�lemleri i�in tam say� giriniz :  " << sayi2 << endl;
                else
                    cout << "Sonu� : " << (int)sayi1 % (int)sayi2 << endl;
            cout << endl;
            break;
        case 'q':
        case 'Q':
            islem = 'q';
            break;
        default:
            cout << "Ge�ersiz i�lem l�tfen tekrar deneyiniz. " << endl;
            break;
        }
    } while (islem != 'q');

    cout << "Beni " << sayac << " kez kulland�n�z tekrar bekleriz. " << endl;
    return 0;
}

