// HomeWork_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// ================================ Task 1==============================

//struct MyCalc
//{
//private:
//    double num_1;
//    double num_2;
//
//public:
//    MyCalc(){}
//
//    MyCalc(double num_1, double num_2) {
//        this->num_1 = num_1;
//        this->num_2 = num_2;
//    }
//
//    double getSum() {
//        return (num_1 + num_2);
//    }
//
//    double getSubtract() {
//        return (num_1 - num_2);
//    }
//
//    double getMultiplic() {
//        return (num_1 * num_2);
//    }
//
//    double getDivision() {
//        if (num_2 == 0) {
//            cout << "Divition by zero!" << endl;
//        }
//        else { return (num_1 / num_2); }
//    }
//};

// ========================= Task 2 =======================

struct Car
{
private:

    int lenght, hight, volume, maxVol, diametr;
    string color, type;

public:

    Car() {}

    Car(int lenght) {
        this->lenght = lenght;      
    }

    Car(int lenght, int hight) {
        this->lenght = lenght;
        this->hight = hight;    
    }

    Car(int lenght, int hight, int volume) {
        this->lenght = lenght;
        this->hight = hight;
        this->volume = volume;        
    }

    Car(int lenght, int hight, int volume, int maxVol) {
        this->lenght = lenght;
        this->hight = hight;
        this->volume = volume;
        this->maxVol = maxVol;       
    }

    Car(int lenght, int hight, int volume, int maxVol, int diametr) {
        this->lenght = lenght;
        this->hight = hight;
        this->volume = volume;
        this->maxVol = maxVol;
        this->diametr = diametr;
       
    }

    Car(int lenght, int hight, int volume, int maxVol, int diametr, string color) {
        this->lenght = lenght;
        this->hight = hight;
        this->volume = volume;
        this->maxVol = maxVol;
        this->diametr = diametr;
        this->color = color;        
    }

    Car(int lenght, int hight, int volume, int maxVol, int diametr, string color, string type) {
        this->lenght = lenght;
        this->hight = hight;
        this->volume = volume;
        this->maxVol = maxVol;
        this->diametr = diametr;
        this->color = color;
        this->type = type;
    }

    int getLenght() {
        return lenght;
    }

    int getHight() {
        return hight;
    }

    int getVolume() {
        return volume;
    }

    int getMaxVol() {
        return maxVol;
    }

    int getDiametr() {
        return diametr;
    }

    string getColor() {
        return color;
    }

    string getType() {
        return type;
    }

    void setLenght(int lenght) {
        this->lenght = lenght;
    }

    void setHight(int hight) {
        this->hight = hight;
    }

    void setVolume(int volume) {
        this->volume = volume;
    }

    void setMaxVol(int maxVol) {
        this->maxVol = maxVol;
    }

    void setDiametr(int diametr) {
        this->diametr = diametr;
    }

    void setColor(string color) {
        this->color = color;
    }

    void setType(string type) {
        this->type = type;
    }
};

int main()
{
    // =================== Task 1 =====================

    /*MyCalc obj;

    MyCalc obj_1(3, 4);
    cout << obj_1.getSum() << endl;
    cout << obj_1.getSubtract() << endl;
    cout << obj_1.getMultiplic() << endl;
    cout << obj_1.getDivision() << endl;

    MyCalc obj_2(3, 0);
    cout << obj_2.getSum() << endl;
    cout << obj_2.getSubtract() << endl;
    cout << obj_2.getMultiplic() << endl;
    cout << obj_2.getDivision() << endl;*/

    // ====================== Task 2 =======================

    Car obj_1;

    obj_1.setLenght(3);
    obj_1.setHight(2);
    obj_1.setVolume(2);
    obj_1.setMaxVol(200);
    obj_1.setColor("Red");
    obj_1.setType("automat");

    cout << obj_1.getLenght() << endl;
    cout << obj_1.getHight() << endl;
    cout << obj_1.getVolume() << endl;
    cout << obj_1.getMaxVol() << endl;
    cout << obj_1.getColor() << endl;
    cout << obj_1.getType() << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
