//Filip Bosheski INKI892, zadacha 34 sah konj
#include <iostream>
#include <vector>

using namespace std;
int main(){
 vector<char> alinija = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    char pozicija1;
    int pozicija2 = 0;
    int pozicija3 = 0;

    //Prikaz na tablata
    for(int i = 0; i<8; i++){
        cout<<" "<<alinija.at(i);
    }
    cout<<endl;

    for(int i = 8; i>0; i--){
        cout<<i<<endl;
    }

    //Pocetok na programa
    do{
    cout<<"Vnesete nova kolona i nov red:"<<endl;
    cin>>pozicija1>>pozicija2;
    //Proverka na kolona
    switch(pozicija1){
                case 'a':
                case 'A': pozicija3 = 1; break;
                case 'b':
                case 'B': pozicija3 = 2; break;
                case 'c':
                case 'C': pozicija3 = 3; break;
                case 'd':
                case 'D': pozicija3 = 4; break;
                case 'e':
                case 'E': pozicija3 = 5; break;
                case 'f':
                case 'F': pozicija3 = 6; break;
                case 'g':
                case 'G': pozicija3 = 7; break;
                case 'h':
                case 'H': pozicija3 = 8; break;
                default: pozicija3 = 9; cout<<"Kolonata "<<pozicija1<<" e nadvor od sahovskata tabla"<<endl;
            }

            //Proverka na red
        if(pozicija2 > 0 && pozicija2 <9){
          if(pozicija3 > 0 && pozicija3 < 9){
        cout<<"Mozni polinja se: ";

        //Pecatenje na moznite polinja
        //i = red
        for(int i = 1; i < 9; i++){
            //j = kolona
            for(int j = 1; j<9; j++){

                if(i + 2 == pozicija2 || i - 2 == pozicija2){
                    if(j + 1 == pozicija3){
                        cout<<alinija.at(j - 1)<<i<<", ";
                    }else if(j - 1 == pozicija3){
                        cout<<alinija.at(j-1)<<i<<", ";
                    }
                }else if(i + 1 == pozicija2 || i - 1 == pozicija2){
                    if(j + 2 == pozicija3){
                        cout<<alinija.at(j - 1)<<i<<", ";
                    }else if(j - 2 == pozicija3){
                        cout<<alinija.at(j - 1)<<i<<", ";
                    }
                }
            }
        }
                        }
        }else{
            cout<<"Kolonata" <<pozicija2<<" e nadvor od sahovskata tabla"<<endl;
        }
    cout<<endl;
    }while(true);
}
