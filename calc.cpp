#include <iostream>

using namespace std;

int main() {

    int a, b, op;   double result;

    cout << "������ ����� �����\n";   cin >> a;

    cout << "������ ��������\n1\t+\n2\t-\n3\t*\n4\t/\n\n";  cin >> op;

    cout << "������ ����� �����\n";     cin >> b;

    switch (op) {

    case 1:    
        resault = a + b

        break;

    case 2:     result = a - b;

        break;

    case 3:        result = a * b;
        break;

    case 4:     result = (double)a / b;
	case 5: result = pow(a, b); break;

        break;

    }

    cout << "��������� = " << result;

}