#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;
/*
bool LeapYear(int year)
{
    bool res = false;
    if (year % 4 == 0)
        res = true;
    if (year % 100 == 0)
        res = false;
    if (year % 400 == 0)
        res = true;
    return res;
}
int Date(int d, int m, int y)
{
    int k = d;
    switch (m - 1)
    {
    case 12: k += 31;
    case 11: k += 30;
    case 10: k += 31;
    case  9: k += 30;
    case  8: k += 31;
    case  7: k += 31;
    case  6: k += 30;
    case  5: k += 31;
    case  4: k += 30;
    case  3: k += 31;
    case  2: if (LeapYear(y)) k += 29; else k += 28;
    case  1: k += 31;
    }
    k += (y - 1) * 365 + ((y - 1) / 4);
    return k;
}
int Difference(int d1, int d2, int m1, int m2, int y1, int y2)
{
    int k = Date(d1, m1, y1) - Date(d2, m2, y2);
    return k;
}
int main()
{
    SetConsoleOutputCP(1251);
    int d1, d2, m1, m2, y1, y2;
    cout << "Введите первый день: ";
    cin >> d2;
    cout << "Введите первый месяц: ";
    cin >> m2;
    cout << "Введите первый год: ";
    cin >> y2;
    cout << "Введите второй день: ";
    cin >> d1;
    cout << "Введите второй месяц: ";
    cin >> m1;
    cout << "Введите второй год: ";
    cin >> y1;
    cout << "Разность в днях между этими датами составляет " << Difference(d1, d2, m1, m2, y1, y2) << " дней.\n";
    system("PAUSE");
}
*/

/*
double arrMeanValue(double arr[], int n)// 2 задание
{
    double res = 0.0;
    for (int i = 0; i < n; i++) res += arr[i];
    return res / n;
}
int main()
{
    double arr[] = { 2.3,2,5,8,10.6 };
    int n = sizeof(arr) / sizeof(double);
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    cout << std::endl;
    double mean = arrMeanValue(arr, n);
    cout << "mean = " << mean;
    return 0;
}
*/

/*
//3 задание 

#define WINDOWS "russian"
#define LINUX "ru_RU.UTF-8"

void set_header(void);
void random_array(int[], size_t);
void printf_array(int[], size_t);
void counter_numbers(int[], size_t, int&, int&, int&);
const string ending(int, const string[]);

int main(void)
{
    setlocale(LC_ALL, WINDOWS);
    srand(static_cast<size_t>(time(NULL)));

    const string words[3][3] = {
        {"число", "числа", "чисел"},
        {"положительное", "положительных", "положительных"},
        {"отрицательное", "отрицательных", "отрицательных"}
    };
    const size_t size_array = 5;

    int* array_a = new int[size_array];
    int positive = 0;
    int negative = 0;
    int zero_num = 0;

    set_header();
    random_array(array_a, size_array);
    printf_array(array_a, size_array);
    counter_numbers(array_a, size_array, positive, negative, zero_num);

    cout << "\tВ массиве находится " << positive
        << " " << ending(positive, words[1])
        << " " << ending(positive, words[0])
        << "." << endl;
    cout << "\tВ массиве находится " << negative
        << " " << ending(negative, words[2])
        << " " << ending(negative, words[0])
        << "." << endl;
    cout << "\tВ массиве находится " << zero_num
        << " " << ending(zero_num, words[0])
        << " с нулевым значением." << endl
        << endl << endl << endl;

    system("pause");
    system("cls");
    delete[] array_a;
    return(0);
}
void set_header(void) {
    cout << "\n\n\n\tОсновы программирования на языке С++.\n"
        << "\tТема:  Функции. Передача массивов внутрь функции.\n\n"
        << "\tНаписать функцию, определяющую количество положительных,\n"
        << "\tотрицательных и нулевых элементов передаваемого ей массива.\n"
        << endl << endl << endl << endl;
}
void random_array(int array[], size_t size_array) {
    for (size_t i = 0; i < size_array; i++)
        array[i] = rand() % 21 - 10;
}
void printf_array(int array[], size_t size_array) {
    for (size_t i = 0; i < size_array; i++) {
        cout << "\t" << array[i];
        if ((i + 1) % 10 == 0)
            cout << "\n";
    }
    cout << endl << endl;
}
const string ending(int num, const string str[]) {
    if (num > 99) return ending(num % 100, str);
    else if (num > 19) return ending(num % 10, str);
    else if (num == 1) return str[0];
    else if (num > 1 && num < 5) return str[1];
    else return str[2];
}
void counter_numbers(int a[], size_t size, int& p, int& n, int& z) {
    for (size_t i = 0; i < size; ++i)
        if (a[i] < 0) n++;          
        else if (a[i] > 0) p++;     
        else z++;                   
}
*/