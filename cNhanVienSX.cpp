#include "cNhanVienSX.h"

// Constructor
cNhanVienSX::cNhanVienSX() {
    maNV = "";
    hoTen = "";
    ngaySinh = "";
    soSP = 0;
    donGia = 0;
}

cNhanVienSX::cNhanVienSX(string ma, string ten, string ns, int sp, double dg) {
    maNV = ma;
    hoTen = ten;
    ngaySinh = ns;
    soSP = sp;
    donGia = dg;
}

// Destructor
cNhanVienSX::~cNhanVienSX() {}

// Getter
string cNhanVienSX::getMaNV() { return maNV; }
string cNhanVienSX::getHoTen() { return hoTen; }
string cNhanVienSX::getNgaySinh() { return ngaySinh; }
int cNhanVienSX::getSoSP() { return soSP; }
double cNhanVienSX::getDonGia() { return donGia; }

// Setter
void cNhanVienSX::setMaNV(string ma) { maNV = ma; }
void cNhanVienSX::setHoTen(string ten) { hoTen = ten; }
void cNhanVienSX::setNgaySinh(string ns) { ngaySinh = ns; }
void cNhanVienSX::setSoSP(int sp) { soSP = sp; }
void cNhanVienSX::setDonGia(double dg) { donGia = dg; }

// Nhập
void cNhanVienSX::nhap() {
    cin.ignore();
    cout << "Ma NV: "; getline(cin, maNV);
    cout << "Ho ten: "; getline(cin, hoTen);
    cout << "Ngay sinh: "; getline(cin, ngaySinh);
    cout << "So san pham: "; cin >> soSP;
    cout << "Don gia: "; cin >> donGia;
}

// Xuất
void cNhanVienSX::xuat() {
    cout << maNV << " | " << hoTen << " | " << ngaySinh
         << " | SP: " << soSP
         << " | Don gia: " << donGia
         << " | Luong: " << tinhLuong() << endl;
}

// Tính lương
double cNhanVienSX::tinhLuong() {
    return soSP * donGia;
}
