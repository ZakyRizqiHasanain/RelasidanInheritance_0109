#include<iostream>
#include<vector>
#include<string>
using namespace std;

#include "Anak.h"
#include "ibu.h"

int main() {
    ibu* varIbu = new ibu("dini");
    ibu* varIbu2 = new ibu ("novi");
    anak* varAnak1 = new anak ("tono");
    anak* varAnak2 = new anak ("rini");
    anak* varAnak3 = new anak ("dewi");

    varIbu->tambahanak(varAnak1);
    varIbu->tambahanak(varAnak2);
    varIbu2->tambahanak(varAnak3);
    varIbu2->tambahanak(varAnak1);
    

    varIbu->cetakanak();
    varIbu2->cetakanak();

    delete varIbu;
    delete varIbu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;

}