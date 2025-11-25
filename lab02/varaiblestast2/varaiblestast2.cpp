#include <iostream>
#include <string>
#include <iomanip> // สำหรับใช้ std::setw, std::left

// ใช้เพื่อให้ไม่ต้องพิมพ์ std:: นำหน้าทุกครั้ง (ตามในรูปตัวอย่าง)
using namespace std;

int main() {
    // 1. ประกาศตัวแปร
    string name;
    int age;
    double height;

    // 2. รับค่าจากผู้ใช้ (Input)

    // รับชื่อ
    cout << "Enter your name: ";
    cin >> name;

    // รับอายุ
    cout << "Enter your age: ";
    cin >> age;

    // รับส่วนสูง
    cout << "Enter your height (cm): ";
    cin >> height;

    // ----------------------------------------------------

    // 3. แสดงผล Student Profile (Output)

    // กำหนดความกว้างสำหรับการจัดแนวข้อความ (padding)
    const int label_width = 7;

    // ส่วนหัว
    cout << endl; // ขึ้นบรรทัดใหม่ก่อนแสดงผลลัพธ์
    cout << "===== Student Profile =====" << endl;

    // แสดงผลข้อมูลแต่ละบรรทัด โดยจัดให้เครื่องหมาย : อยู่ในแนวเดียวกัน
    // ใช้ std::left เพื่อจัดข้อความชิดซ้าย
    // ใช้ std::setw() เพื่อกำหนดความกว้างของฟิลด์

    cout << left << setw(label_width) << "Name" << " : " << name << endl;
    cout << left << setw(label_width) << "Age" << " : " << age << endl;

    // สำหรับ Height อาจจะแสดงเป็นทศนิยม 1 หรือ 2 ตำแหน่ง
    cout << left << setw(label_width) << "Height" << " : " << fixed << setprecision(0) << height << " cm" << endl;
    // หมายเหตุ: ใช้ setprecision(0) เพื่อให้ส่วนสูงแสดงเป็นจำนวนเต็มเหมือนในภาพตัวอย่าง

    // ส่วนท้าย
    cout << "===========================" << endl;

    return 0;
}