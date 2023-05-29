#ifndef _BAI1_H_
#define _BAI1_H_
struct sinhVien {
	int MSSV;
	char hoVaTen;
	int year;
	char lopHoc;
	double DTB;
};
struct Node {
	int data;
	Node* next;
};
struct List {
	Node* head;
};
void insert(List& ls, int data);
void lapDuLieuSV(sinhVien& sinhvien);
void xuatDuLieuSV(sinhVien& sinhvien);
void init(List& ls);
void insert(List& ls, int data);
void diemTrungBinh(List& ls);

#endif