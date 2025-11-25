#include <iostream>
#include <iomanip> // สำหรับใช้ std::fixed และ std::setprecision

int main() {
    // กำหนดข้อมูลนักเรียน
    std::string name = "Sutit Ongart";
    int age = 20;
    std::string student_id = "66000001";
    double gpa = 3.85;

    // ความกว้างสำหรับการจัดแนวข้อความ (padding)
    const int label_width = 12;

    // แสดงผลส่วนหัว
    std::cout << "========== Student Info ==========" << std::endl;

    // แสดงผลข้อมูลแต่ละบรรทัด
    // ใช้ std::left เพื่อจัดข้อความชิดซ้าย
    // ใช้ std::setw() เพื่อกำหนดความกว้างของฟิลด์

    std::cout << std::left << std::setw(label_width) << "Name" << " : " << name << std::endl;
    std::cout << std::left << std::setw(label_width) << "Age" << " : " << age << std::endl;
    std::cout << std::left << std::setw(label_width) << "Student ID" << " : " << student_id << std::endl;

    // สำหรับ GPA ต้องใช้ std::fixed และ std::setprecision เพื่อกำหนดให้แสดงผลเป็นทศนิยม 2 ตำแหน่ง
    std::cout << std::left << std::setw(label_width) << "GPA" << " : " << std::fixed << std::setprecision(2) << gpa << std::endl;

    // แสดงผลส่วนท้าย
    std::cout << "==================================" << std::endl;
    // หมายเหตุ: ใช้ '==' 34 ตัวเพื่อให้มีความยาวใกล้เคียงกับภาพมากที่สุด หรือปรับตามความเหมาะสม

    return 0;
}