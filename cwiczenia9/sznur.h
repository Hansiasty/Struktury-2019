//
// Created by Bartłomiej Jóźwiak on 2019-04-15.
//

#ifndef CWICZENIA9_SZNUR_H
#define CWICZENIA9_SZNUR_H
struct Sznur
{
private:
    struct Node {
        int dane;
        Node *nast;

        Node(int _dane, Node *_nast) {
            dane = _dane;
            nast = _nast;
        }
    };
    Node*pocz;
    Node*ogon;
    int ileJest;
public:
    Sznur();
    ~Sznur();
    void wypisz();
    void wstaw(int _dane);
    void usunFragmenty(int N);

};
#endif //CWICZENIA9_SZNUR_H
