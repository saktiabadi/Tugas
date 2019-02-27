#include <iostream>

using namespace std;
int main()
{
    int a,n, X[20];
    cout<<"Masukkan batas deret = ";
    cin>>n;
    for (a=0; a<=n; a++)
    {
        if (a<2)
        X[a]=a ;
        else
        X[a] =X[a-1]+X[a-2];
    }
    for (a=1; a<=n; a++)
    {
        cout<<X[a]<<" ";
    }
    cout<<endl<<endl;
    cout<<"Deret ke-"<<n<<" "<<" = "<<X[n];
	return 0;
}
