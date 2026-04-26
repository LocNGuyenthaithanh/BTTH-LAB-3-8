#include "cNhanVienSX.h"
#include <vector>
#include <algorithm>

int main() {
    int n;
    cout << "Nhap so nhan vien: ";
    cin >> n;

    vector<cNhanVienSX> ds(n);

    // Nhập
    for (int i = 0; i < n; i++) {
        cout << "\nNhap NV thu " << i + 1 << endl;
        ds[i].nhap();
    }

    // Xuất danh sách
    cout << "\nDanh sach nhan vien:\n";
    for (auto &nv : ds) {
        nv.xuat();
    }

    // Lương thấp nhất
    double minLuong = ds[0].tinhLuong();
    for (auto &nv : ds) {
        if (nv.tinhLuong() < minLuong)
            minLuong = nv.tinhLuong();
    }

    cout << "\nNhan vien co luong thap nhat:\n";
    for (auto &nv : ds) {
        if (nv.tinhLuong() == minLuong)
            nv.xuat();
    }

    // Tổng lương
    double tongLuong = 0;
    for (auto &nv : ds) {
        tongLuong += nv.tinhLuong();
    }
    cout << "\nTong luong cong ty phai tra: " << tongLuong << endl;

    // Nhân viên lớn tuổi nhất (so sánh chuỗi đơn giản)
    string maxTuoi = ds[0].getNgaySinh();
    for (auto &nv : ds) {
        if (nv.getNgaySinh() < maxTuoi) // ngày sinh nhỏ hơn => lớn tuổi hơn
            maxTuoi = nv.getNgaySinh();
    }

    cout << "\nNhan vien lon tuoi nhat:\n";
    for (auto &nv : ds) {
        if (nv.getNgaySinh() == maxTuoi)
            nv.xuat();
    }

    // Sắp xếp tăng dần theo lương
    sort(ds.begin(), ds.end(), [](cNhanVienSX a, cNhanVienSX b) {
        return a.tinhLuong() < b.tinhLuong();
    });

    cout << "\nDanh sach sau khi sap xep tang dan theo luong:\n";
    for (auto &nv : ds) {
        nv.xuat();
    }

    return 0;
}
