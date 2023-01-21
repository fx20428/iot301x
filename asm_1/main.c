/**
 * This program is created by Dzung Nguyen
 * Date of creation: January 21st, 2023
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define E 0.01 // Sai số cho phép khi so sánh góc của tam giác

double thong_so_tam_giac[6]; // Các số đo cơ bản của tam giác {do_dai_AB, do_dai_BC, do_dai_AC, goc_A, goc_B, goc_C}
double duong_cao[3];         // Các đường cao của tam giác {hA, hB, hC}
double trung_tuyen[3];       // Các đường trung tuyến của tam giác {tA, tB, tC}
double trong_tam[2];         // Tọa độ trọng tâm của tam giác {Gx, Gy}

/**
 * Yêu cầu người dùng nhập tọa độ của 3 điểm A, B, C trên hệ trục Oxy
 */
void nhap_toa_do_cac_dinh(double input[]);

/**
 * Nhận vào tọa độ các điểm trên trục Oxy,
 * kiểm tra xem các điểm đó có thể tạo thành 1 tam giác hay không.
 * Trả về giá trị true hoặc false
 */
bool kiemtra_tamgiac(double Ax, double Ay, double Bx, double By, double Cx, double Cy);

/**
 * Nhận vào tọa độ của 2 điểm trên trục Oxy, tính
 * khoảng cách giữa hai điểm
 */
double tinh_khoang_cach_hai_diem(double Ax, double Ay, double Bx, double By);

/**
 * Nhận vào tọa độ của các đỉnh, tính độ dài các cạnh
 * của tam giác, lưu kết quả vào biến toàn cục (thong_so_tam_giac[])
 */
void tinh_do_dai_cac_canh(double Ax, double Ay, double Bx, double By, double Cx, double Cy);

/**
 * Nhận vào độ dài các cạnh, tính các góc của tam giác
 * lưu kết quả vào biến toàn cục (thong_so_tam_giac[])
 */
void tinh_goc_tam_giac(double AB, double BC, double AC);

/**
 * Tính các góc và độ dài các cạnh của tam giác
 */
void goccanh_tamgiac(double Ax, double Ay, double Bx, double By, double Cx, double Cy);

/**
 * Kiểm tra và in ra màn hình các đặc điểm của tam giác
 * (cân, vuông, tù...)
 */
void xet_tamgiac(double canh_AB, double canh_BC, double canh_AC, double goc_A, double goc_B, double goc_C);

/**
 * Nhận vào chiều dài các cạnh, tính diện tích tam giác
 */
double dientich_tamgiac(double canh_AB, double canh_BC, double canh_AC);

/**
 * Nhận vào độ dài các cạnh, tính độ dài các chiều cao của tam giác
 * lưu kết quả vào biến toàn cục (duong_cao[])
 */
void duongcao_tamgiac(double canh_AB, double canh_BC, double canh_AC);

/**
 * Nhận vào độ dài các cạnh, tính độ dài các
 * đường trung tuyến của tam giác, lưu lại trong biến toàn cục (trung_tuyen[])
 */
void trungtuyen_tamgiac(double canh_AB, double canh_BC, double canh_AC);

/**
 * Nhận vào tọa độ các dỉnh của tam giác,
 * tính tọa độ trọng tâm, lưu kết quả vào biến toàn cục (trong_tam[])
 */
void tam_tamgiac(double Ax, double Ay, double Bx, double By, double Cx, double Cy);

/**
 * Yêu cầu người dùng nhập tọa độ các đỉnh của tam giác
 * Kiểm tra các đỉnh đã được nhập có thể tạo thành 1 tam giác hay không
 * Tính toán các thông số của tam giác và in ra màn hình
 */
void giaima_tamgiac(double input[]);

int main(void)
{
    double toa_do_tam_giac[6]; // Mảng chứa tọa độ các đỉnh của tam giác {Ax, Ay, Bx, By, Cx, Cy}
    giaima_tamgiac(toa_do_tam_giac);
}

void nhap_toa_do_cac_dinh(double input[])
{
    puts("Nhap vao toa do diem A:");
    printf("Ax: ");
    scanf("%lf", &input[0]);
    printf("Ay: ");
    scanf("%lf", &input[1]);

    puts("\nNhap vao toa do diem B:");
    printf("Bx: ");
    scanf("%lf", &input[2]);
    printf("By: ");
    scanf("%lf", &input[3]);

    puts("\nNhap vao toa do diem C:");
    printf("Cx: ");
    scanf("%lf", &input[4]);
    printf("Cy: ");
    scanf("%lf", &input[5]);
}

bool kiemtra_tamgiac(double Ax, double Ay, double Bx, double By, double Cx, double Cy)
{
    double AB = tinh_khoang_cach_hai_diem(Ax, Ay, Bx, By);
    double BC = tinh_khoang_cach_hai_diem(Bx, By, Cx, Cy);
    double AC = tinh_khoang_cach_hai_diem(Ax, Ay, Cx, Cy);
    return (AB + AC > BC) && (AB + BC > AC) && (BC + AC > AB);
}

double tinh_khoang_cach_hai_diem(double Ax, double Ay, double Bx, double By)
{
    return sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));
}

void tinh_goc_tam_giac(double AB, double BC, double AC)
{
    double cosA = (pow(AB, 2) + pow(AC, 2) - pow(BC, 2)) / (2 * AB * AC);
    double cosB = (pow(AB, 2) + pow(BC, 2) - pow(AC, 2)) / (2 * AB * BC);
    double cosC = (pow(AC, 2) + pow(BC, 2) - pow(AB, 2)) / (2 * AC * BC);
    thong_so_tam_giac[3] = acos(cosA) * 180 / M_PI;
    thong_so_tam_giac[4] = acos(cosB) * 180 / M_PI;
    thong_so_tam_giac[5] = acos(cosC) * 180 / M_PI;
}

void tinh_do_dai_cac_canh(double Ax, double Ay, double Bx, double By, double Cx, double Cy)
{
    thong_so_tam_giac[0] = tinh_khoang_cach_hai_diem(Ax, Ay, Bx, By);
    thong_so_tam_giac[1] = tinh_khoang_cach_hai_diem(Bx, By, Cx, Cy);
    thong_so_tam_giac[2] = tinh_khoang_cach_hai_diem(Ax, Ay, Cx, Cy);
}

void goccanh_tamgiac(double Ax, double Ay, double Bx, double By, double Cx, double Cy)
{
    tinh_do_dai_cac_canh(Ax, Ay, Bx, By, Cx, Cy);
    tinh_goc_tam_giac(thong_so_tam_giac[0], thong_so_tam_giac[1], thong_so_tam_giac[2]);
}

void xet_tamgiac(double canh_AB, double canh_BC, double canh_AC, double goc_A, double goc_B, double goc_C)
{
    // Xét tam giác đều
    if (canh_AB == canh_BC && canh_BC == canh_AC)
    {
        puts("Tam giac ABC la tam giac deu");
        return;
    }
    // Xét góc A
    if (fabs(goc_A - 90) <= E)
    {
        if (canh_AB == canh_AC)
        {
            puts("Tam giac ABC la tam giac vuong can tai A");
            return;
        }
        else
        {
            puts("Tam giac ABC la tam giac vuong tai A");
            return;
        }
    }
    else if (goc_A - 90 < 0)
    {
        if (canh_AB == canh_AC)
        {
            puts("Tam giac ABC la tam giac can tai A");
            return;
        }
    }
    else
    {
        if (canh_AB == canh_AC)
        {
            puts("Tam giac ABC la tam giac tu can tai A");
            return;
        }
        else
        {
            puts("Tam giac ABC la tam giac tu tai A");
            return;
        }
    }
    // Xét góc B
    if (fabs(goc_B - 90) <= E)
    {
        if (canh_AB == canh_BC)
        {
            puts("Tam giac ABC la tam giac vuong can tai B");
            return;
        }
        else
        {
            puts("Tam giac ABC la tam giac vuong tai B");
            return;
        }
    }
    else if (goc_B - 90 < 0)
    {
        if (canh_AB == canh_BC)
        {
            puts("Tam giac ABC la tam giac can tai B");
            return;
        }
    }
    else
    {
        if (canh_AB == canh_BC)
        {
            puts("Tam giac ABC la tam giac tu can tai B");
            return;
        }
        else
        {
            puts("Tam giac ABC la tam giac tu tai B");
            return;
        }
    }
    // Xét góc C
    if (fabs(goc_C - 90) <= E)
    {
        if (canh_BC == canh_AC)
        {
            puts("Tam giac ABC la tam giac vuong can tai C");
            return;
        }
        else
        {
            puts("Tam giac ABC la tam giac vuong tai C");
            return;
        }
    }
    else if (goc_C - 90 < 0)
    {
        if (canh_BC == canh_AC)
        {
            puts("Tam giac ABC la tam giac can tai C");
            return;
        }
    }
    else
    {
        if (canh_BC == canh_AC)
        {
            puts("Tam giac ABC la tam giac tu can tai C");
            return;
        }
        else
        {
            puts("Tam giac ABC la tam giac tu tai C");
            return;
        }
    }
    puts("Tam giac ABC la tam giac binh thuong");
}

double dientich_tamgiac(double canh_AB, double canh_BC, double canh_AC)
{
    double chu_vi = canh_AB + canh_BC + canh_AC;
    return sqrt((chu_vi / 2) * (chu_vi / 2 - canh_AB) * (chu_vi / 2 - canh_BC) * (chu_vi / 2 - canh_AC));
}

void duongcao_tamgiac(double canh_AB, double canh_BC, double canh_AC)
{
    double dien_tich = dientich_tamgiac(canh_AB, canh_BC, canh_AC);
    duong_cao[0] = 2 * dien_tich / canh_BC;
    duong_cao[1] = 2 * dien_tich / canh_AC;
    duong_cao[2] = 2 * dien_tich / canh_AB;
}

void trungtuyen_tamgiac(double canh_AB, double canh_BC, double canh_AC)
{
    trung_tuyen[0] = sqrt(2 * pow(canh_AB, 2) + 2 * pow(canh_AC, 2) - pow(canh_BC, 2)) / 2;
    trung_tuyen[1] = sqrt(2 * pow(canh_AB, 2) + 2 * pow(canh_BC, 2) - pow(canh_AC, 2)) / 2;
    trung_tuyen[2] = sqrt(2 * pow(canh_BC, 2) + 2 * pow(canh_AC, 2) - pow(canh_AB, 2)) / 2;
}

void tam_tamgiac(double Ax, double Ay, double Bx, double By, double Cx, double Cy)
{
    trong_tam[0] = (Ax + Bx + Cx) / 3;
    trong_tam[1] = (Ay + By + Cy) / 3;
}

void giaima_tamgiac(double input[])
{
    bool laTamGiac;
    double Ax, Ay, Bx, By, Cx, Cy, canh_AB, canh_BC, canh_AC, goc_A, goc_B, goc_C;

    do
    {
        nhap_toa_do_cac_dinh(input);
        Ax = input[0];
        Ay = input[1];
        Bx = input[2];
        By = input[3];
        Cx = input[4];
        Cy = input[5];
        laTamGiac = kiemtra_tamgiac(Ax, Ay, Bx, By, Cx, Cy);
        if (!laTamGiac)
        {
            printf("\n");
            puts("Toa do 3 diem nhap vao khong tao thanh mot tam giac.");
        }
    } while (!laTamGiac);

    goccanh_tamgiac(Ax, Ay, Bx, By, Cx, Cy);

    canh_AB = thong_so_tam_giac[0];
    canh_BC = thong_so_tam_giac[1];
    canh_AC = thong_so_tam_giac[2];
    goc_A = thong_so_tam_giac[3];
    goc_B = thong_so_tam_giac[4];
    goc_C = thong_so_tam_giac[5];

    printf("\n");
    printf("Toa do diem A da nhap: A(%.2lf, %.2lf)\n", Ax, Ay);
    printf("Toa do diem B da nhap: B(%.2lf, %.2lf)\n", Bx, By);
    printf("Toa do diem C da nhap: C(%.2lf, %.2lf)\n", Cx, Cy);
    puts("----------------------------------------------");
    puts("Toa do 3 diem nhap vao tao thanh mot tam giac.");

    printf("\n1. So do co ban cua tam giac:\n");
    printf("%3cChieu dai canh AB: %.2lf\n", ' ', canh_AB);
    printf("%3cChieu dai canh BC: %.2lf\n", ' ', canh_BC);
    printf("%3cChieu dai canh CA: %.2lf\n", ' ', canh_AC);
    printf("%3cGoc A: %.2lf\n", ' ', goc_A);
    printf("%3cGoc B: %.2lf\n", ' ', goc_B);
    printf("%3cGoc C: %.2lf\n", ' ', goc_C);

    printf("\n");
    xet_tamgiac(canh_AB, canh_BC, canh_AC, goc_A, goc_B, goc_C);

    printf("\n2. Dien tich tam giac ABC la: %.2lf\n", dientich_tamgiac(canh_AB, canh_BC, canh_AC));
    printf("\n3. So do nang cao cua tam giac:\n");
    duongcao_tamgiac(canh_AB, canh_BC, canh_AC);
    for (char c = 'A'; c <= 'C'; c++)
    {
        printf("%3cDo dai duong cao tu dinh %c: %.2lf\n", ' ', c, duong_cao[c - 'A']);
    }
    trungtuyen_tamgiac(canh_AB, canh_BC, canh_AC);
    for (char c = 'A'; c <= 'C'; c++)
    {
        printf("%3cDo dai trung tuyen tu dinh %c: %.2lf\n", ' ', c, trung_tuyen[c - 'A']);
    }
    printf("\n4. Toa do diem dac biet cua tam giac:\n");
    tam_tamgiac(Ax, Ay, Bx, By, Cx, Cy);
    printf("%3cToa do trong tam: [%.2lf, %.2lf]\n", ' ', trong_tam[0], trong_tam[1]);
}