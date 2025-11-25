#include <iostream>
#include <string>
#include <iomanip> // สำหรับใช้ std::setw, std::left

// ใช้เพื่อให้ไม่ต้องพิมพ์ std:: นำหน้าทุกครั้ง
using namespace std;

int main() {
    // 1. ประกาศตัวแปร
    string item_name;
    double price;
    int quantity;
    double total;

    // 2. รับค่าจากผู้ใช้ (Input)

    cout << "Enter item name: ";
    // ใช้ getline() เพื่อให้สามารถรับชื่อสินค้าที่มีช่องว่างได้ (เช่น "blue pen")
    getline(cin, item_name);

    cout << "Enter price: ";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantity;

    // 3. คำนวณราคารวม
    total = price * quantity;

    // ----------------------------------------------------

    // 4. แสดงผลใบเสร็จ (Output)

    // กำหนดความกว้างสำหรับการจัดแนวข้อความ (padding)
    const int label_width = 8;

    // ส่วนหัวของใบเสร็จ
    cout << endl; // ขึ้นบรรทัดใหม่ก่อนแสดงผลลัพธ์
    cout << "------ Receipt ------" << endl;

    // แสดงผลข้อมูลแต่ละบรรทัด
    // ใช้ std::left เพื่อจัดข้อความชิดซ้าย
    // ใช้ std::setw() เพื่อกำหนดความกว้างของฟิลด์

    cout << left << setw(label_width) << "Item" << " : " << item_name << endl;

    // แสดงราคาเป็นทศนิยม 0 ตำแหน่ง (หรือจะใช้ setprecision(2) ถ้าต้องการทศนิยม 2 ตำแหน่ง)
    cout << left << setw(label_width) << "Price" << ": " << fixed << setprecision(0) << price << endl;

    cout << left << setw(label_width) << "Qty" << " : " << quantity << endl;

    // แสดงราคารวม (Total)
    cout << left << setw(label_width) << "Total" << ": " << total << endl;

    // ส่วนท้าย
    cout << "---------------------" << endl;

    return 0;
}