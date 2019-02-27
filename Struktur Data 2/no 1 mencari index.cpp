#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int A[10];
    int index [10];
    int b,c,d,n;

    cout<<"masukkan jumlah pengulangan data : ";
    cin>>n;
    cout<<endl;

    for(b=1;b<=n;b++)
      {
            cout << "\Angka ke -" << b << " : ";
            cin >> A[b];
      }
      cout<<endl;
      cout << "\tCari angka : ";
      cin >> d;

      c=0;
      for (b=0;b<10;b++)
      {
            if(A[b]==d)
            {
                  index[c]=b;
                  c++;
            }
      }
      if (c>0)
      {
            cout << "\n";
            cout << "\t angka " << d << " yang dicari ada " << c << " buah\n";
            cout << "\t angka tersebut terdapat dalam index ke ";

            for(b=0;b<c;b++)
            {
                  cout << index[b] << " ";
            }
            cout << "\n";
      }
      else
      {
            cout << "\n";
            cout << "\t Tidak ditemukan\n";
      }

      return 0;
}
