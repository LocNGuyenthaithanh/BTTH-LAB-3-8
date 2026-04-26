#ifndef CNHANVIENSX_H
#define CNHANVIENSX_H

#include <iostream>
#include <string>
using namespace std;

class cNhanVienSX {
private:
    string maNV;
    string hoTen;
    string ngaySinh;
    int soSP;
    double donGia;

public:
    // Constructor
    cNhanVienSX();
    cNhanVienSX(string, string, string, int, double);

    // Destructor
    ~cNhanVienSX();

    // Getter
    string getMaNV();
    string getHoTen();
    string getNgaySinh();
    int getSoSP();
    double getDonGia();

    // Setter
    void setMaNV(string);
    void setHoTen(string);
    void setNgaySinh(string);
    void setSoSP(int);
    void setDonGia(double);

    // Method
    void nhap();
    void xuat();
    double tinhLuong();
};

#endif
