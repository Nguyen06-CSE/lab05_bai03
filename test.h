void leDauChanCuoi(DaySo a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Nếu a[j] là số lẻ và a[i] là số chẵn, hoán vị chúng
            if (a[j] % 2 != 0 && a[i] % 2 == 0) {
                hoanVi(a[i], a[j]);
            }
        }
    }

    // Xuất mảng đã sắp xếp
    xuatMang(a, n);
}
