#ifndef IBU_H
#define IBU_H

class ibu{
    public:
        string nama;
        vector<anak*> daftar_anak;

        ibu(string pNama): nama(pNama){
            cout << "Ibu \"" << nama << "\" ada\n";
        }

        ~ibu() {
            cout << "Ibu \"" << nama << "\" tidak ada\n";
        }

        void tambahanak(anak*);
        void cetakanak();
};
void ibu::tambahanak(anak* pAnak) {
    daftar_anak.push_back (pAnak);
}
void ibu::cetakanak() {
    cout << "Daftar Anaka dari Ibu \"" <<
    this->nama << "\":\n";
    for (int i = 0; i < daftar_anak.size(); i++) {
        cout << daftar_anak[i]->nama << endl;
    }
    cout << endl;
}

#endif