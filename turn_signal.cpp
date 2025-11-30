#include <iostream>
#include <random>
#include <synchapi.h>
#include <cstdlib>


using namespace std;
int main(){
    random_device rndom;
    mt19937 gen(rndom());
    uniform_int_distribution<>COUT(10 , 12);
    int x = 1;
    while (true) {
        int start , start2 , start3 , d , i ,red = 0;
        start = COUT(rndom);
        start2 = COUT(rndom);
        start3 = COUT(rndom);
        d = start2;
        i = start3;
        if (x == 1) {
            for ( start ; start != 0; --start) {
                if (start >= 10 ){
                    cout << "1"<< "\t" << "2" << "\t" <<  "3" << endl 
                        << "Green"<< "\t" << "Red" << "\t" <<  "Red" << endl 
                         << start << "\t" << red+start << "\t" << start2+start << endl;
                        }else {
                            cout << "1"<< "\t" << "2" << "\t" <<  "3" << endl 
                            << "Yellow"<< "\t" << "Red" << "\t" <<  "Red" << endl 
                            << start << "\t" << red+start << "\t" << start+start2 << endl;
                            
                        }
                        Sleep(1000);
                        system("cls");
                        }x+=1;}
        else {
            for (start2 ; start2 != 0 ; --start2){
                if (start2 >= 10) {
                cout << "1"<< "\t" << "2" << "\t" <<  "3" << endl 
                     << "Red"<< "\t" << "Green" << "\t" <<  "Red" << endl 
                    << start2+start3 << "\t" << start2 << "\t" << start2 << endl;
                }else {
                cout << "1"<< "\t" << "2" << "\t" <<  "3" << endl 
                     << "Red"<< "\t" << "Yellow" << "\t" <<  "Red" << endl 
                    << start2+start3 << "\t" << start2 << "\t" << start2 << endl;
                }
                Sleep(1000);
                system("cls");
            }
            for (start3 ; start3 != 0 ; --start3){
                if (start3 >= 10) {
                cout << "1"<< "\t" << "2" << "\t" <<  "3" << endl 
                     << "Red"<< "\t" << "Red" << "\t" <<  "Green" << endl 
                    << start3 << "\t" << start3+start2+start << "\t" << start3 << endl;
                }else {
                cout << "1"<< "\t" << "2" << "\t" <<  "3" << endl 
                     << "Red"<< "\t" << "Red" << "\t" <<  "Yellow" << endl 
                    << start3 << "\t" << start3+start2+start << "\t" << start3 << endl;
                }
                Sleep(1000);
                system("cls");
            }
            start2 = d ;
            start3 = i ;
            for (start ; start != 0 ; --start,--start2){
                if (start >= 10) {
                cout << "1"<< "\t" << "2" << "\t" <<  "3" << endl 
                     << "Green"<< "\t" << "Red" << "\t" <<  "Red" << endl 
                    << start << "\t" << start << "\t" << start3+start2 << endl;
                }else {
                cout << "1"<< "\t" << "2" << "\t" <<  "3" << endl 
                     << "Yellow"<< "\t" << "Red" << "\t" <<  "Red" << endl 
                    << start << "\t" << start << "\t" << start3+start2 << endl;
                }
                Sleep(1000);
                system("cls");
            }}
        }}