// int demSoLe(DaySo a, int n);
// void demVaXuatSoChiaHet3KhongChiaHet4(DaySo a, int n);
// int demSoCo3ChuSo(DaySo a, int n); 
// int demXTaiVTLe(DaySo a, int n, int x);
// int demSoCo3ChuSo(DaySo a, int n);
// int demSoNamNgoaiPhanVi(DaySo a, int n, int min, int max);
// int demSoChinhPhuong(DaySo a, int n);
// void demVaXuatItNhat(DaySo a, int n, int k);
// int demSoLanXuatHienTuVT(DaySo a, int n, int x, int vt);


// case 2:


//             cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
//             cin >> TD;
//             if (TD == 1) {
//                 cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
//                 cin >> dau;
//                 int phanTu;
//                  if (dau == 1) {
//                     phanTu = randNumPo(a);
                    
//                 } else {
//                     randNumPoAndNe(a);
//                 }
//                 demVaXuatSoChiaHet3KhongChiaHet4(a, phanTu);
//             }
//             else{
//                 cout << "nguoi dung hay nhap so n: ";
//                 cin >> n;
//                 nhapMang(a, n);
//                 demVaXuatSoChiaHet3KhongChiaHet4(a, n);
//             }
            
           
//         break;
        
//     case 3:
//             cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
//             cin >> TD;

//             if (TD == 1) {
//                 cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong (am nhan 2, duong nhan 1): ";
//                 cin >> dau;
                
//                 int phanTu;
//                 if (dau == 1) {
//                     phanTu = randNumPo(a);
//                 } else {
//                     phanTu = randNumPoAndNe(a);
//                 }
                
//                 cout << "hay nhap x ma ban muon tim kiem: ";
//                 int x;
//                 cin >> x;
//                 cout << "so phan tu x xuat hien trong mang a tai vi tri le la: " << demXTaiVTLe(a, phanTu, x) << endl;
//             } else {
//                 cout << "nguoi dung hay nhap so n: ";
//                 cin >> n;
//                 nhapMang(a, n);
                
//                 cout << "hay nhap x ma ban muon tim kiem: ";
//                 int x;
//                 cin >> x;
//                 cout << "so phan tu x xuat hien trong mang a tai vi tri le la: " << demXTaiVTLe(a, n, x) << endl;
//             }
            
              
              

//             break;
//         case 4:
          
//             cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
//             cin >> TD;
//             if (TD == 1) {
//                 cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
//                 cin >> dau;
//                 int phanTu;
//                  if (dau == 1) {
//                     phanTu = randNumPo(a);
                    
//                 } else {
//                     randNumPoAndNe(a);
//                 }
//                  cout << "so luong so co 3 chu so trong mang tren la: " << demSoCo3ChuSo(a, phanTu) << endl;
//             }
//             else{
//                 cout << "nguoi dung hay nhap so n: ";
//                 cin >> n;
//                 nhapMang(a, n);
//                 demVaXuatSoChiaHet3KhongChiaHet4(a, n);
//             }
            
           
//         break;

//         case 5:

//             int min, max;
//             cout << "Hay nhap pham vi cua ban [min ... max]: ";
//             cin >> min >> max;
//             cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
//             cin >> TD;

//             if (TD == 1) {
//                 cout << "So ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong (am va duong nhan 2, duy nhat duong nhan 1): ";
//                 cin >> dau;
//                 int phanTu;
                
//                 if (dau == 1) {
//                     phanTu = randNumPo(a); // Generate positive numbers only
//                 } else {
//                     phanTu = randNumPoAndNe(a); // Generate both positive and negative numbers
//                 }
                
//                 cout << "\nSo phan tu nam ngoai pham vi ban da nhap la: " << demSoNamNgoaiPhanVi(a, phanTu, min, max) << endl;
//             } else {
//                 cout << "Nguoi dung hay nhap so n: ";
//                 cin >> n;
//                 nhapMang(a, n); // User inputs the array elements
//                 int dem = demSoNamNgoaiPhanVi(a, n, min, max);
//                 cout << "\nSo phan tu nam ngoai pham vi ban da nhap la: " << dem << endl;
//             }
           
//         break;
            
//         case 6:

//             cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
//             cin >> TD;
//             if (TD == 1) {
//                 cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am nham 2, duong nhan 1): ";
//                 cin >> dau;
//                 int phanTu;
//                 if(dau = 1){
//                     phanTu = randNumPo(a);
//                 }
//                 else {
//                     phanTu = randNumPoAndNe(a);
//                 }
//                 cout << "\nso chinh phuong trong mang la: " << demSoChinhPhuong(a, phanTu) << endl;
                
//             }
//             else{
//                 cout << "nguoi dung hay nhap so n: ";
//                 cin >> n;
//                 nhapMang(a, n);
//                 cout << "\nso chinh phuong trong mang la: " << demSoChinhPhuong(a, n) << endl;
//             }

//             break;  
//         case 7:
//             cout << "hay nhap so k(so lan xuat hien it nhat cua phan tu): ";
//             int k; cin >> k;
            
//             cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
//             cin >> TD;
//             if (TD == 1) {
//                 cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am nham 2, duong nhan 1): ";
//                 cin >> dau;
//                 int phanTu;
//                 if(dau = 1){
//                     phanTu = randNumPo(a);
//                 }
//                 else {
//                     phanTu = randNumPoAndNe(a);
//                 }
//                 demVaXuatItNhat(a, phanTu, k);
                
//             }
//             else{
//                 cout << "nguoi dung hay nhap so n: ";
//                 cin >> n;
//                 nhapMang(a, n);
//                 demVaXuatItNhat(a, n, k);
//             }
            
//             break;
//         case 8:
//             cout << "hay nhap vi tri man muon dem x den cuoi mang: ";
//             int vt; cin >> vt;
//             cout << "nhap so x ban muon tim kiem: ";
//             int x; cin >> x;

            
//             cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
//             cin >> TD;
//             if (TD == 1) {
//                 cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am nham 2, duong nhan 1): ";
//                 cin >> dau;
//                 int phanTu;
//                 if(dau = 1){
//                     phanTu = randNumPo(a);
//                 }
//                 else {
//                     phanTu = randNumPoAndNe(a);
//                 }
//                 cout << "so lan xuat hien cua " << x << " ke tu vi tri " << vt << "den cuoi mang la " << demSoLanXuatHienTuVT(a, phanTu, x, vt) << endl;
//             }
//             else{
//                 cout << "nguoi dung hay nhap so n: ";
//                 cin >> n;
//                 nhapMang(a, n);
//                 cout << "so lan xuat hien cua " << x << " ke tu vi tri " << vt << " den cuoi mang la " << demSoLanXuatHienTuVT(a, n, x, vt) << endl;
//             }
            
            


//         break;
//     }
// }