
#include <iomanip>
#include <iostream>
#include <clocale>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    
    char operation;
    float n1, n2;
    
    cout << "Lütfen bir işlem seçiniz" << endl;  cout << "(+, -, *, /)"<< endl;
    cin >> operation;

    cout << "iki sayı giriniz"<< endl;
    cin >> n1 >> n2;

    switch (operation)
    {
    case '+':
        cout << n1 << "+" << n2 << "=" << n1 + n2;
            break;
    case '-' :
        cout << n1 << "-" << n2 << "=" << n1 - n2;
        break;
    case  '*':
        cout << n1 << "*" << n2 << "=" << n1 * n2;
        break;
    case '/':
        cout << n1 << "/" << n2 << "=" << n1 / n2;
        break;
    default:	
        cout << "ERROR!..." << endl;
        break;
    }
    */




    /*
    int mid, fin;
   cout << "Lütfen bir sayi giriniz" << endl;
    cin >> mid >> fin;
    
    float avrg = (mid * 0.4 + fin * 0.6);
    cout << "Tour total avarage is =" << avrg << endl;
 
    if ((avrg >= 90))
        cout << "A";
    else if (avrg >= 80)
        cout << "B";
    else if (avrg >= 70)
        cout << "C";
    else if (avrg >= 60)
        cout << "D";
    else if (avrg >= 50)
        cout << "E";
    else
        cout << "F";
    return 0;
    */


    /* int number = 27;
    number = 10;

    cout << "Number =" << number << endl;		// 10
    cout << "Number =" << ++number << endl;		// 11 (pre-increment)
    cout << "Number =" << number<< endl;		// 11
    cout << "Number =" << number++ << endl;		// 11 (post-increment)
    cout << "Number =" << number << endl;		// 12

    system("pause");  							// display answer

    return 0;;*/

   /*float C, F;
    cout << "Fahrenaytan dereceye çeviri"<< endl;
    
    cin >> F;
    C = (F - 32) * 5 / 9;
    cout << F << "Fahrenheit =" << C << "Celcius" << endl;

    system("pause");
    return 0;
*/ 

    /*int a;
    int b;
    cout << "Lutfen bir sayi giriniz" << endl;
    cin >> a;
    cout << "Lutfen bir 2. sayi giriniz" << endl;
    cin >> b;
    int Toplam;
    Toplam = a + b;

    cout << Toplam << endl;
    return 0*/
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
