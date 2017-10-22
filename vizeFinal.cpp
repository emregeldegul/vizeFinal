#include <iostream>

using namespace std;

int main(){
	int vizePuan, finalPuan;
	float vizeOrtalama, finalOrtalama, gerekenFinalPuan, gerekenFinalPuanOrtalamasi, hamPuan;
    
    cout << "Lutfen Vize Notu Giriniz: ";
    cin >> vizePuan;
    
    vizeOrtalama = (vizePuan*40)/100;
    gerekenFinalPuanOrtalamasi = 50-vizeOrtalama;
    gerekenFinalPuan = (gerekenFinalPuanOrtalamasi*100)/60;

    cout << "Vize Ortalamaniz " << vizeOrtalama << ", Final Icin Gereken Min Puan: " << gerekenFinalPuan << "(%" << gerekenFinalPuanOrtalamasi << ")\n";
    
	cout << "Lutfen Final Notu Giriniz: ";
    cin >> finalPuan;
    
    finalOrtalama = (finalPuan*60)/100;
    hamPuan = vizeOrtalama+finalOrtalama;
    
	cout << "Final Ortalamaniz " << finalOrtalama << ", Son Puaniniz " << hamPuan << "\n";
	
    if(hamPuan >= 50 and finalPuan >= 50){
        cout << "Gectiniz" << endl;
    }else{
        cout << "Kaldiniz" << endl;
    }
    
    system("pause");
    return 0;
    
}
