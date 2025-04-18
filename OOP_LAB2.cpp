#include <iostream>
#include <string>

// ���������, ��� ����� ������������ ������������ ���� std (�����������)
using namespace std;

// ��������� �����, ������� ���������� Country (������)
class Country {

    // private: ��������, ��� ��� ���������� ����� ������������ ������ ������ ������
private:
    string capital;     // ������� ������
    int population;     // ���������� ������� � ������
    double area;          // ������� ������

    // public: ��������, ��� ��� ������� (������) ����� ������������ ������� ������
public:
    // ����������� (����������� �������, ������� ���������� ��� �������� �������)
    // ���� ����������� - ��� ���������� (��������� - ��� ��, ��� ���������� � �������)
    Country() {
        capital = "";         // �������������� ������� ������ �������
        population = 0;      // �������������� ��������� �����
        area = 0.0;            // �������������� ������� �����
        cout << "������� ������ (��� ����������)!" << endl;  // ��������, ��� ����������� ��������
    }

    // ����������� � ����������� (�����-�� �������� ���������� ��� �������� ������)
    Country(string cap, int pop, double ar) {
        capital = cap;      // ������� ����� ����, ��� �������� � cap
        population = pop;   // ��������� ����� ����, ��� �������� � pop
        area = ar;            // ������� ����� ����, ��� �������� � ar
        cout << "������� ������ (� �����������)!" << endl;   // ��������, ��� ����������� ��������
    }

    // ����������� ����������� (������� ����� ������, ������� ������ �� ������ ������)
    Country(const Country& other) {
        capital = other.capital;       // ������� ����� ������ = ������� ������ ������
        population = other.population; // ��������� ����� ������ = ��������� ������ ������
        area = other.area;             // ������� ����� ������ = ������� ������ ������
        cout << "������� ����� ������!" << endl;   // ��������, ��� ����������� ��������
    }

    // ���������� (����������� �������, ������� ����������, ����� ������ ���������)
    ~Country() {
        cout << "������ ����������!" << endl;   // ��������, ��� ���������� ��������
    }

    // ������� ��� ��������� �������� (�������) - ��������� ������ �������� ����������
    string getCapital() const {
        return capital;  // ���������� �������� �������
    }

    int getPopulation() const {
        return population;   // ���������� �������� ���������
    }

    double getArea() const {
        return area;       // ���������� �������� �������
    }

    // ������� ��� ��������� �������� (�������) - ��������� �������� �������� ����������
    void setCapital(string newCapital) {
        capital = newCapital;  // ������������� ������� � ����� ��������
    }

    void setPopulation(int newPopulation) {
        population = newPopulation;   // ������������� ��������� � ����� ��������
    }

    void setArea(double newArea) {
        area = newArea;        // ������������� ������� � ����� ��������
    }

    // ������� ��� ������ ���������� � ������ �� �����
    void printInfo() const {
        cout << "�������: " << capital << endl;         // ������� �������
        cout << "���������: " << population << endl;      // ������� ���������
        cout << "�������: " << area << endl;          // ������� �������
    }
};

// ������� ������� ��������� (� ��� ���������� ����������)
int main() {
    setlocale(LC_ALL, "ru");
    // ������� ������ Country (������) � ������� ������������ ��� ����������
    Country country1;
    cout << "���������� � ������ 1 (��� ����������):" << endl;
    country1.printInfo();  // ������� ���������� � ������

    // ������� ������ Country (������) � ������� ������������ � �����������
    Country country2("Moscow", 144000000, 17100000.0);
    cout << "\n���������� � ������ 2 (� �����������):" << endl;
    country2.printInfo();  // ������� ���������� � ������

    // ������� ������ Country (������) � ������� ������������ �����������
    Country country3 = country2;  // �������� ������ �� country2 � country3
    cout << "\n���������� � ������ 3 (����� ������ 2):" << endl;
    country3.printInfo();  // ������� ���������� � ������

    // �������� �������� ���������� � ������� country1 � ������� ��������
    country1.setCapital("Washington");
    country1.setPopulation(330000000);
    country1.setArea(9800000);
    cout << "\n���������� � ������ 1 (����� ���������):" << endl;
    country1.printInfo();  // ������� ���������� � ������

    // ���������� 0, ����� ��������, ��� ��������� ����������� �������
    return 0;
}
