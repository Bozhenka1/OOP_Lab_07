#include <vector> 
#include <iostream> 

using namespace std;

int main()
{
    system("chcp 1251");

    int count;
    vector<int> arr;
    int temp;

    cout << "¬вед≥ть к≥льк≥сть елемент≥в €к≥ хочете ввести" << endl;
    cin >> count;

    cout << "¬вод≥ть ваш≥ числа" << endl;
    for (int i = 0; i < count; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "\nBаш≥ числа" << endl;
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
    cout << "\n—ума к≥лькостей одиниць у машинному зображенн≥ елемент≥в масиву " << sum << endl;

    system("pause");
    return 0;
}