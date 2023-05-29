#include <iostream>
#include <cstring>
#include <iomanip>
#include "bai1.h"
#include <random>
#include <map>
#include <vector>
using namespace std;


void lapDuLieuSV(sinhVien& sinhvien) {
    cout << "Nhap MSSV: " << endl;
    cin >> sinhVien.MSSV;
    cin.ignore(1);
    cout << "Nhap ho va ten sinh vien: " << endl;
    cin.getline(sinhVien.hoVaTen, 50);
    cout << "Nhap ngay thang nam sinh cua sinh vien: " << endl;
    cin >> sinhVien.year;
    cout << "Nhap lop hoc cua sinh vien: " << endl;
    cin.getline(sinhVien.lopHoc, 20);
    cout << "Nhap diem trung binh cua sinh vien: " << endl;
    cin >> sinhVien.DTB;
}
void xuatDuLieuSV(sinhVien& sinhvien) {

}
Node* createNode(int data) {
	Node* pNewNode = new Node;
	pNewNode->sinhVien = data;
	pNewNode->next = nullptr;
	return pNewNode;
}
void sort(List& ls) {
    Node* a = ls.head;
    Node* b = ls.head->next;
}

void init(List& ls) {
    ls.head = nullptr;
}
Node* createNode(int data) {
    Node* p = new Node;
    p->data = data;
    p->next = nullptr;
    return p;
}
void insert(List& ls, int data) {
    Node* p = createNode(data);
    if (ls.head == nullptr) {
        ls.head = p;
    }
    else {
        p->next = ls.head;
        ls.head = p;
    }
}
void diemTrungBinh(List& ls) {
    Node* p = ls.head;
    int maximum = p->sinhVien.DTB;
    while (p != nullptr) {
        if (p->sinhVien.DTB == maximum) {
            printData(p->sinhVien);
        }
        p = p->next;
    }
}