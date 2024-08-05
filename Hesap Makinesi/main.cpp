#include <iostream>

using namespace std;

int usalma(){
    int sayi,us,sonuc=1;
    cout<<"Sayi gir:";
    cin>>sayi;
    cout<<"Us gir:";
    cin>>us;
    for(int i=1; i<=us; i++){
        sonuc=sonuc*sayi;
    }
    cout<< "Sonuc: "<<sonuc<<endl;
    return 0;
}

int ebobekok(){
    int sayi1,sayi2,buyukSayi;
    cout<<"Iki sayi girin:";
    cin>>sayi1>>sayi2;
    for(int i=1; i<=sayi1*sayi2; i++) {
		if( (i%sayi1==0) && (i%sayi2==0) ){
			cout << "EKOK: " << i;
			break;
		}
	}
    cout << endl;

	// Ýki sayýnýn EBOB'u bulunurken EBOB en fazla büyük sayý olabilir.
	if(sayi1>sayi2) {
		buyukSayi = sayi1;
	} else {
		buyukSayi = sayi2;
	}

	for(buyukSayi; buyukSayi>0; buyukSayi--) {
		if( (sayi1%buyukSayi==0) && (sayi2%buyukSayi==0) ) {
			cout << "EBOB: " << buyukSayi;
			break;
		}
	}
}

int main()
{
    int secim;
    float sayi1,sayi2;
    cout<<"\t\t\tHESAP MAKINESI\n";
    cout<<"\n\t1.Toplama\n";
    cout<<"\t2.Cikarma\n";
    cout<<"\t3.Carpma\n";
    cout<<"\t4.Bolme\n";
    cout<<"\t5.Us Alma\n";
    cout<<"\t6.Ebob-Ekok\n";
    cout<<"\nYapmak istediginiz islemi secin:";
    cin>>secim;


    switch(secim){
    case 1:
        cout<<"Iki sayi girin:";
    cin>>sayi1>>sayi2;
        cout<<sayi1<<" + "<<sayi2<<" = "<<sayi1+sayi2;
        break;
    case 2:
        cout<<"Iki sayi girin:";
    cin>>sayi1>>sayi2;
        cout<<sayi1<<" - "<<sayi2<<" = "<<sayi1-sayi2;
        break;
    case 3:
        cout<<"Iki sayi girin:";
    cin>>sayi1>>sayi2;
        cout<<sayi1<<" * "<<sayi2<<" = "<<sayi1*sayi2;
        break;
    case 4:
        cout<<"Iki sayi girin:";
    cin>>sayi1>>sayi2;
        cout<<sayi1<<" / "<<sayi2<<" = "<<sayi1/sayi2;
        break;
    case 5:
        usalma();
        break;
    case 6:
        ebobekok();
        break;



    }
    return 0;
}
