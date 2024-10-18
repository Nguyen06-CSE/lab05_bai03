#include<iostream>
#include<math.h>
#include<cmath>
#include<ctime>
#include <algorithm>




#define MAX 1000


using namespace std;

typedef int DaySo[MAX];

int randNumPo(DaySo a);
int randNumPoAndNe(DaySo a);
void nhapMang(DaySo a, int n);
void xuatMang(DaySo a, int n);
void tangHoacGiam(DaySo a,  int n, int thuTu);
void soDuongTang(DaySo a, int n);
void so0Cuoi(DaySo a, int n);
void so0_AmGiam_DuongTang(DaySo a, int n);
void leDauChanCuoi(DaySo a, int n);
void leGiamDuongTang(DaySo a, int n);
void xaoTronNgauNhien(DaySo a, int n);
void NTDauTang_ConLaiGiam(DaySo a, int n);
















void choiseMenu(DaySo a,int choise, int n){
        int TD, dau;

    switch(choise){
        
        case 1: 
        int  thuTu;
            cout << "neu ban muon day tang chon 1, muon giam chon 2: ";
            cin >> thuTu;
            cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
            cin >> TD;
           
            if (TD == 1) {
                cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
                cin >> dau;
                int phanTu, dem;
                 if (dau == 1) {
                    phanTu = randNumPo(a);
                    
                } else {
                    phanTu = randNumPoAndNe(a);

                }
                tangHoacGiam(a, phanTu, thuTu);

            }
            else{
                cout << "nguoi dung hay nhap so n: ";
                cin >> n;
                nhapMang(a, n);
                 tangHoacGiam(a, n, thuTu);
            }


            break;
        case 2:
            
            
            cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
            cin >> TD;
           
            if (TD == 1) {
                cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
                cin >> dau;
                int phanTu, dem;
                 if (dau == 1) {
                    phanTu = randNumPo(a);
                    
                } else {
                    phanTu = randNumPoAndNe(a);

                }
                soDuongTang(a, phanTu);

            }
            else{
                cout << "nguoi dung hay nhap so n: ";
                cin >> n;
                nhapMang(a, n);
                soDuongTang(a, n);
            }

            break;
        case 3:
            
            cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
            cin >> TD;
           
            if (TD == 1) {
                cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong(am va duong nham 2, duy nhat duong nhan 1): ";
                cin >> dau;
                int phanTu, dem;
                 if (dau == 1) {
                    phanTu = randNumPo(a);
                    
                } else {
                    phanTu = randNumPoAndNe(a);

                }
                so0Cuoi(a, phanTu);

            }
            else{
                cout << "nguoi dung hay nhap so n: ";
                cin >> n;
                nhapMang(a, n);
                so0Cuoi(a, n);
            }

            break;
            case 4:
            
            cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
            cin >> TD;
           
            if (TD == 1) {
                cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong( duy nhat duong nhan 1, am va duong nham 2): ";
                cin >> dau;
                int phanTu, dem;
                 if (dau == 1) {
                    phanTu = randNumPo(a);
                    
                } else {
                    phanTu = randNumPoAndNe(a);

                }
                so0_AmGiam_DuongTang(a, phanTu);

            }
            else{
                cout << "nguoi dung hay nhap so n: ";
                cin >> n;
                nhapMang(a, n);
                so0_AmGiam_DuongTang(a, n);
            }

            break;
            
            case 5:
            
            cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
            cin >> TD;
           
            if (TD == 1) {
                cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong( duy nhat duong nhan 1, am va duong nham 2): ";
                cin >> dau;
                int phanTu, dem;
                 if (dau == 1) {
                    phanTu = randNumPo(a);
                    
                } else {
                    phanTu = randNumPoAndNe(a);

                }
                leDauChanCuoi(a, phanTu);

            }
            else{
                cout << "nguoi dung hay nhap so n: ";
                cin >> n;
                nhapMang(a, n);
                leDauChanCuoi(a, n);
            }

            break;
            
            case 6:
            
            cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
            cin >> TD;
           
            if (TD == 1) {
                cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong( duy nhat duong nhan 1, am va duong nham 2): ";
                cin >> dau;
                int phanTu, dem;
                 if (dau == 1) {
                    phanTu = randNumPo(a);
                    
                } else {
                    phanTu = randNumPoAndNe(a);

                }
                leGiamDuongTang(a, phanTu);

            }
            else{
                cout << "nguoi dung hay nhap so n: ";
                cin >> n;
                nhapMang(a, n);
                leGiamDuongTang(a, n);
            }

            break;
            
            case 7:
            
            cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
            cin >> TD;
           
            if (TD == 1) {
                cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong( duy nhat duong nhan 1, am va duong nham 2): ";
                cin >> dau;
                int phanTu, dem;
                 if (dau == 1) {
                    phanTu = randNumPo(a);
                    
                } else {
                    phanTu = randNumPoAndNe(a);

                }
                xaoTronNgauNhien(a, phanTu);

            }
            else{
                cout << "nguoi dung hay nhap so n: ";
                cin >> n;
                nhapMang(a, n);
                xaoTronNgauNhien(a, n);
            }

            break;
            
            case 8:
            
            cout << "Ban co muon tao mang tu dong khong? (Neu co bam 1, neu khong bam 0 de tiep tuc): ";
            cin >> TD;
           
            if (TD == 1) {
                cout << "so ngau nhien cua ban muon co so am va duong hay chi duy nhat so duong( duy nhat duong nhan 1, am va duong nham 2): ";
                cin >> dau;
                int phanTu, dem;
                 if (dau == 1) {
                    phanTu = randNumPo(a);
                    
                } else {
                    phanTu = randNumPoAndNe(a);

                }
                NTDauTang_ConLaiGiam(a, phanTu);

            }
            else{
                cout << "nguoi dung hay nhap so n: ";
                cin >> n;
                nhapMang(a, n);
                NTDauTang_ConLaiGiam(a, n);
            }

            break;
            

    }
}
        


int randNumPo(DaySo a) {
    int dem = 0;
    srand(time(0));
    int n = 0;
    cout << "Hay nhap pham vi SO LUONG chu so ma ban muon (min max): ";
    int minDigits, maxDigits;
    cin >> minDigits >> maxDigits;

    if (minDigits < 0 || maxDigits < 0) {
        cout << "Ban nhap sai pham vi (Pham vi phai > 0)! " << endl;
        return 0;
    } else {
        cout << "Hay nhap so luong so ban muon: ";
        int quantity;
        cin >> quantity;

        cout << "So duoc tao ngau nhien la: \n";
        for (int i = 0; i < quantity; i++) {
            int digitCount = rand() % (maxDigits - minDigits + 1) + minDigits;
            int randomNumber = 0;
            int multiplier = 1;

            for (int j = 0; j < digitCount; j++) {
                // if (j == 0) {
                //     randomNumber += (rand() % 9 + 1) * multiplier;
                // } else {
                    randomNumber += (rand() % 10) * multiplier;
                // }
                multiplier *= 10;
            }

            a[i] = randomNumber;
            ++n;
            cout << randomNumber << TAB;
            ++dem;
            if (dem == 15) {
                cout << endl;
                dem = 0;
            }
        }
        cout << endl;
    }
    return n;
}

// Generates an array of random numbers that can be positive or negative
int randNumPoAndNe(DaySo a) {
    int dem = 0;
    srand(time(0));
    int n = 0;
    cout << "ban vua chon so am va duong \n";
    cout << "Hay nhap pham vi SO LUONG CHU SO ma ban muon (min max): ";
    int minDigits, maxDigits;
    cin >> minDigits >> maxDigits;

    if (minDigits < 0 || maxDigits < 0) {
        cout << "Ban nhap sai pham vi (Pham vi phai > 0)! " << endl;
        return 0;
    } else {
        cout << "Hay nhap so luong so ban muon: ";
        int quantity;
        cin >> quantity;

        cout << "So duoc tao ngau nhien la: \n";
        for (int i = 0; i < quantity; i++) {
            int digitCount = rand() % (maxDigits - minDigits + 1) + minDigits;
            int randomNumber = 0;
            int multiplier = 1;

            for (int j = 0; j < digitCount; j++) {
                // if (j == 0) {
                //     randomNumber += (rand() % 9 + 1) * multiplier;
                // } else {
                    randomNumber += (rand() % 10) * multiplier;
                // }
                multiplier *= 10;
            }

            if (rand() % 2 == 0) {
                randomNumber = -randomNumber;
            }

            a[i] = randomNumber;
            ++n;
            cout << randomNumber << TAB;
            ++dem;

            if (dem == 15) {
                cout << endl;
                dem = 0;
            }
        }
        cout << endl;
    }
    return n;
}


void nhapMang(DaySo a, int n){
        
        
        cout << "nguoi dung hay nhap mang \n";
        for(int i = 0; i < n; i++){
            cout << "a[" << i <<"]=";
            cin >> a[i];
            cout << endl;
        }
}

void xuatMang(DaySo a, int n){
    int dem = 0;
    for(int i = 0; i < n; i++){
        cout << a[i] << TAB;
        ++dem;
        if(dem == 15){
            cout << endl;
            dem *= 0;
        }
    }
    cout << endl;
}

void hoanVi(int &a, int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}


void tangHoacGiam(DaySo a,  int n, int thuTu){
    cout << "mang sau khi sap xep la \n";
    for(int i = 0; i < n - 1; i++){
        if(thuTu == 1){
            for(int j = i+ 1; j < n; j++){
                if(a[i] > a[j]){
                    
                    hoanVi(a[i], a[j]);
                }
            }
        }
        else if(thuTu == 2){
            for(int j = i+ 1; j < n; j++){
                if(a[i] < a[j]){
                    hoanVi(a[i], a[j]);
                }
            }
        }
    }
    xuatMang(a, n);
}


void soDuongTang(DaySo a, int n){
    cout << "cac so duong tang dan va cac so khac giu nguyen vi tri la: \n";
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > 0 && a[j] > 0 && a[i] > a[j]){
                hoanVi(a[i], a[j]);
            }
        }
    }
    xuatMang(a,n);
    cout << endl;
}



void so0Cuoi(DaySo a, int n){
    cout << endl;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1 ; j < n; j++){
            if((a[j] != 0 && a[i] == 0) || (a[i] > a[j] && a[i] != 0 && a[j] != 0) ){
                hoanVi(a[j], a[i]);
            }
        }
    }
    xuatMang(a, n);
}

int sort(int a, int b){
    return a > b;
}


void so0_AmGiam_DuongTang(DaySo a, int n){
    cout << endl;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1 ; j < n; j++){
            if(sort(a[i], a[j])){
                hoanVi(a[j], a[i]);
            }
        }
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1 ; j < n; j++){
            if((a[i] != 0 && a[j] == 0) 
            || (a[i] < a[j] && a[i] < 0 && a[j] < 0)  
            ||  (a[i] > 0 && a[j] > 0 && a[j] < a[i])){
                hoanVi(a[j], a[i]);
            }
        }
    }
    
    xuatMang(a, n);
}









void leDauChanCuoi(DaySo a, int n){
    cout << endl;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1 ; j < n; j++){
            if((a[j] % 2 != 0 && a[i] % 2== 0) || (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] < a[j]) || (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] > a[j])  ){
                hoanVi(a[j], a[i]);
            }
        }
    }



    xuatMang(a, n);
}


void leGiamDuongTang(DaySo a, int n){
    cout << endl;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1 ; j < n; j++){
            if( (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j]) || (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] < a[j])  ){
                hoanVi(a[j], a[i]);
            }
        }
    }




    xuatMang(a, n);
}



void xaoTronNgauNhien(DaySo a, int n){
    cout << endl;
    srand(time(0));
    for(int i = 0; i < n; i++){
        int j = rand() % (n - i) + i;
        hoanVi(a[i], a[j]);
    }

    xuatMang(a,n);
}

bool soNT(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void NTDauTang_ConLaiGiam(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((soNT(a[j]) && !soNT(a[i])) || 
                (!soNT(a[i]) && !soNT(a[j]) && a[i] < a[j]) || 
                (soNT(a[i]) && soNT(a[j]) && a[i] > a[j])) {
                hoanVi(a[i], a[j]);
            }
        }
    }

    xuatMang(a, n);
}



