#include <vector> 
#include <iostream> 

using namespace std;

int main()
{
    system("chcp 1251");

    int count;
    vector<int> arr;
    int temp;

    cout << "������ ������� �������� �� ������ ������" << endl;
    cin >> count;

    cout << "������ ���� �����" << endl;
    for (int i = 0; i < count; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "\nB��� �����" << endl;
    for (int i = 0; i < count; i++)
        cout << arr[i] << endl;

    int sum = 0;

    for (int i = 0; i < count; i++)
    {
        while (arr[i] != 0)
        {
            if (arr[i] % 2 == 1)
                sum += 1;
            arr[i] /= 2;
        }
    }
    cout << "\n���� ��������� ������� � ��������� ��������� �������� ������ " << sum << endl;

    system("pause");
    return 0;
}