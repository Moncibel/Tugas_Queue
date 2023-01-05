#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    cout << "Nama: Alya Nabila Muliani" << endl;
    cout << "Kelas: IF-45-09" << endl;
    cout << "NIM: 1301213343" << endl;
    cout << "9 + 3 = 12 lagu" << endl;
    cout << endl;

    playlistLagu Q;
    adr pLagu;
    infotype laguBaru;
    int i;
    int n;

    createPlaylist_1301213343(Q);
    cout << "===Masukan Playlist Lagu===" << endl;
    cout << "Jumlah lagu yang ditambahkan: ";
    cin >> n;
    i = 0;
    cout << endl;

    while (i < n) {
        cout << "Artis: ";
        //cin >> laguBaru.artis;
        cin.ignore();
        getline(cin,laguBaru.artis);
        cout << "Judul: ";
        //cin >> laguBaru.judul;
        getline(cin,laguBaru.judul);
        createElement_1301213343(laguBaru,pLagu);
        enqueue_1301213343(Q,pLagu);
        i++;
        cout << endl;
    }
    cout << "===Playlist Lagu===" << endl;
    showSemuaLagu_1301213343(Q);

    cout << "===Penghapusan lagu===" << endl;
    dequeue_1301213343(Q,pLagu);
    showSemuaLagu_1301213343(Q);

    return 0;
}
