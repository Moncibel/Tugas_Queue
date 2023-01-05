#include "queue.h"

void createPlaylist_1301213343(playlistLagu &Q) {
    head(Q) = nil;
    tail(Q) = nil;
}

void createElement_1301213343(infotype laguBaru, adr &pLagu) {
    pLagu = new element;
    info(pLagu).artis = laguBaru.artis;
    info(pLagu).judul = laguBaru.judul;
    next(pLagu) = nil;
}

void enqueue_1301213343(playlistLagu &Q, adr pLagu) {
    if (head(Q) == nil) {
        head(Q) = pLagu;
        tail(Q) = pLagu;
    } else {
        next(tail(Q)) = pLagu;
        tail(Q) = pLagu;
    }
}

void dequeue_1301213343(playlistLagu &Q, adr &pLagu) {
    if (head(Q) == nil) {
        cout << "Queue Kosong";
    } else if (head(Q) == tail(Q)) {
        head(Q) = nil;
        tail(Q) = nil;
    } else {
        pLagu = head(Q);
        head(Q) = next(pLagu);
        next(pLagu) = nil;
    }

}

void showSemuaLagu_1301213343(playlistLagu Q) {
    adr pLagu;
    int i = 1;
    if (head(Q) == nil) {
        cout << "Playlist Lagu Kosong";
    } else {
        pLagu = head(Q);
        while(pLagu != nil) {
            cout << "Lagu ke-" << i << endl;
            cout << "Artis: " << info(pLagu).artis << endl;
            cout << "Judul: " << info(pLagu).judul << endl;
            pLagu = next(pLagu);
            cout << endl;
            i++;
        }
    }
}
