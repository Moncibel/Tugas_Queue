#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>

using namespace std;
#define info(Q) (Q)->info
#define next(Q) (Q)->next
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)
#define nil NULL
struct infotype {
    string artis;
    string judul;
};

typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct playlistLagu {
    adr head;
    adr tail;
};

void createPlaylist_1301213343(playlistLagu &Q);
void createElement_1301213343(infotype laguBaru, adr &pLagu);
void enqueue_1301213343(playlistLagu &Q, adr pLagu);
void dequeue_1301213343(playlistLagu &Q, adr &pLagu);
void showSemuaLagu_1301213343(playlistLagu Q);

#endif // QUEUE_H_INCLUDED
