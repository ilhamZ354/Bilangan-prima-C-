#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int a;
    string ekspresi = "";
    int oprtr = 1;
    int hasil;
    string bil;
    cout << "Masukkan Nilai N : ";
    cin >> a;
    for( int i = 2; i <= a; i++){
        for(int j = 2; j <= i; j++){
        	
        	int k=i;
        	stringstream temp;
    		temp<<k;
    		
    		temp>>bil;
            if(i == 2){
                ekspresi = ekspresi + bil;
                hasil = i;
                break;
            }
            if(i == j){
                if(oprtr == 1){
                    ekspresi = ekspresi + " + " + bil;
                    hasil = hasil + i;
                    oprtr = 2;
                }else{
                    ekspresi = ekspresi + " - " + bil;
                    hasil = hasil - i;
                    oprtr = 1;
                }
            }
            
            if(i % j == 0){
                break;
            }
        }
    }
    
    cout << ekspresi << " = " << hasil;

    return 0;
}
