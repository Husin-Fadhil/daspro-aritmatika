//judul ARITMATIKA
//Husin Fadhil A
//25 sept 2022

#include <iostream>
using namespace std;

//kamus
      int angka1, angka2, hasil, pilih;


//deskripsi
 main(){
      cout << " 1. Aritmatik Penjumlahan " << endl;
      cout << " 2. Aritmatik Pengurangan " << endl;
      cout << " 3. Aritmatik Perkalian "   << endl;
      cout << " 4. Aritmatik Pembagian "   << endl;


      cout << "Menu yang anda pilih adalah no : ";
      cin >> pilih;
      cout << "===========================================================================" << endl;
         if(pilih==1)
      {
            penjumlahan :
            cout << " Aritmatik Penjumlahan " << endl;
            cout << " Masukan Angka pertama : ";
            cin >> angka1;

            cout << " Masukan Angka kedua   : ";
            cin >> angka2;

            hasil = angka1 + angka2;
            cout << "Maka Hasilnya          : " << angka1 << " + " << angka2 << " = " << hasil << endl;
                  cout << "===========================================================================" << endl;

            }


             else if(pilih==2)
      {
            pengurangan :
            cout << " Aritmatik Pengurangan " << endl;
            cout << " Masukan Angka pertama : ";
            cin >> angka1;

            cout << " Masukan Angka kedua   : ";
            cin >> angka2;

            hasil = angka1 - angka2;
            cout << "Maka Hasilnya          : " << angka1 << " - " << angka2 << " = " << hasil << endl;
                  cout << "===========================================================================" << endl;

      }

             else if(pilih==3)
      {
            perkalian :
            cout << " Aritmatik Perkalian " << endl;
            cout << " Masukan Angka pertama : ";
            cin >> angka1;

            cout << " Masukan Angka kedua   : ";
            cin >> angka2;

            hasil = angka1 * angka2;
            cout << "Maka Hasilnya          : " << angka1 << " x " << angka2 << " = " << hasil << endl;
                  cout << "===========================================================================" << endl;

      }

             else if(pilih==4)
      {
            pembagian :
            cout << " Aritmatik Pembagian " << endl;
            cout << " Masukan Angka pertama : ";
            cin >> angka1;

            cout << " Masukan Angka kedua   : ";
            cin >> angka2;

            hasil = angka1 / angka2;
            cout << "Maka Hasilnya          : " << angka1 << " / " << angka2 << " = " << hasil << endl;
                  cout << "===========================================================================" << endl;

      }

            if(hasil%2==0)
                {cout << "bilangan merupakan bilangan GENAP" << endl;
                }
            else{
                cout << "bilangan merupakan bilangan GANJIL" << endl;
            }

            cout << "===========================================================================" << endl;
 return 0;


 }
