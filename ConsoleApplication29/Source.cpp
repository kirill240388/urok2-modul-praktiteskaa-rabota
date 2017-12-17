#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int task;
	cout << "insert task" << "\n";
	cin >> task;
	if (task == 1)
	{
		//4.	Даны два неотрицательных числа a и b. Найти их среднее геометрическое.
		int a, b, s;
		cout << "insert a" << "\n";
		cin >> a;
		cout << "insert b" << "\n";
		cin >> b;
		s = pow((a*b), (0.5));
		cout << "srednee geometricheskoe= " << s << "\n";
	}

	if (task == 2)
		/*/ 5.	Задание: составить структурную схему алгоритма и проект программы вычисления функции,
		один параметр ввести с клавиатуры, а другой задать как константу, все вычисляемые значения вывести на экран*/

	{
		//1a
		const double b = 0.4;
		double x, y;
		cout << "insert x" << "\n";
		cin >> x;
		//1.
		double c;
		cout << "insert c" << "\n";
		cin >> c;
		y = exp(2 * x) + pow(9.7, c);
		cout << y << "\n";
	}
	//b
	if (task == 3)
	{
		double c, a, x;
		const double b = 0.4;
		cout << "insert a""\n";
		cin >> a;
		cout << "insert x""\n";
		cin >> x;
		c = a*a + pow(b*x, 0.5);
		cout << c << "\n";
	}
	if (task == 4)
	{
		//c
		const double x = 3.5;
		double a;
		a = log(x);
		cout << a << "\n";
	}

	if (task == 5)
		//2a
	{
		double a, y, x;
		const int b = 0.4;
		cout << "insert x""\n";
		cin >> x;
		cout << "insert a""\n";
		cin >> a;
		y = x*pow(a, 3);
		cout << y << "\n";
	}
	if (task == 6)
		//2b
	{
		const double x = 3.5;
		double a;
		a = log10(x);
		cout << a << "\n";
	}
	if (task == 7)
	{
		//2c
		const double a = 0.4;
		double x, b;
		cout << "insert b" << "\n";
		cin >> b;
		cout << "insert x""\n";
		cin >> x;
		b = exp(2 * x) + 2 * a*x;
		cout << b << "\n";

	}
	if (task == 8)
	{
		//3a
		double y, a, b;
		cin >> a;
		cin >> b;
		y = pow(a, 3) + b*b;
		cout << y << "\n";
	}
	if (task == 9)
	{
		//3b
		const double x = 1.3;
		double a;
		a = exp(pow(abs(x), 0.5));
		cout << a << "\n";
	}

	if (task == 10)
	{
		//3c
		const double x = 1.3;
		double b, a;
		cin >> a;
		b = exp(2 * x) + a*x;
		cout << b << "\n";
	}
	if (task == 11)
	{
		//4a
		const double x = 2.7;
		double y, b, a;
		cin >> a;
		cin >> b;
		y = pow(abs((a - b*x)), 0.2);
		cout << y << "\n";

	}
	if (task == 12)
		//4b
	{
		const double x = 2.7;
		double a;
		a = log(x);
		cout << a << "\n";
	}
	if (task == 13)
	{
		//4c
		const double t = -6;
		double b, x;
		cin >> x;
		b = pow((pow(x, 2) + pow(t, 2)), 0.5);
		cout << b << "\n";
	}
	if (task == 14)
	{
		//5a
		const double t = 4.1;
		double x, y, k;
		cin >> x;
		cin >> k;
		y = pow(tan(pow(x, 2)), 3);
		cout << y << "\n";
	}
	if (task == 15)
	{
		//5b
		const double t = 4.1;
		double x, p, k;
		cin >> p;
		cin >> k;
		x = p*t*t + pow(k, 0.5);
		cout << x << "\n";
	}

	if (task == 16)
	{
		const double p = 3;
		double k, t;
		cin >> t;
		k = pow(p*t, 0.5);
		cout << k << "\n";
	}
	if (task == 17)
		//6a
	{
		double a, b, y;
		cin >> a;
		cin >> b;
		y = pow(sin(a + pow(tan(b), 3)), 2);
		cout << y << "\n";
	}
	if (task == 18)
		//6b
	{
		const double x = 1.1;
		double a;
		a = pow(abs(x), 0.5);
		cout << a << "\n";
	}
	if (task == 19)
		//6c
	{
		const double m = 2;
		double b, x;
		cin >> x;
		b = pow(x, 4) + m*m;
		cout << b << "\n";
	}
	if (task == 20)
		//7a
	{
		double y, b, a;
		cin >> b;
		cin >> a;
		y = pow(cos(b), 2) + b*pow(cos(a*a), 4);
		cout << y << "\n";
	}

	if (task == 21)
		//7b
	{
		const int c = 9;
		double a, b;
		a = pow(abs(c + b), 1 / 3);
		cin >> b;
		cout << a << "\n";
	}
	if (task == 22)
		//7c
	{
		const double x = 8.52;
		double b, c;
		cin >> c;
		b = x + c*c;
	}

	if (task == 23)
		//8a
	{
		double y, a, b;
		cin >> a;
		cin >> b;
		y = pow(cos(a + pow(b, 3)), 3);
		cout << y << "\n";

	}
	if (task == 24)
		//8b
	{
		const double x = 0.9;
		double a, t, b;
		a = t*x + pow(abs(b), 0.5);
		cout << a << "\n";
	}
	if (task == 25)
		//8c
	{
		const double x = 0.9;
		double b;
		b = pow(log(abs(x)), 2);
		cout << b << "\n";
	}
	if (task == 26)
		//9a
	{
		double y, a, c;
		cin >> a;
		cin >> c;
		y = a*a*a / cos(c);
		cout << y << "\n";
	}
	if (task == 27)
		//9b
	{
		const double b = 9.5;
		double c, a;
		cin >> c;
		c = log(a) + b*b;
		cout << c << "\n";
	}
	if (task == 28)
		//9c
	{
		const double x = -8;
		double a, b;
		cin >> b;
		a = pow(abs(x), 0.5) + exp(pow(b, 0.5));
		cout << a << "\n";
	}
	if (task == 29)
		//10a
	{
		double x, p, t, y;
		cin >> x;
		cin >> p;
		cin >> t;
		y = x*p*p + pow(t, 5);
		cout << y << "\n";
	}

	if (task == 30)
		//10b
	{
		const double x = 4;
		double p;
		p = x*x - pow(abs(x), 0.5);
		cout << p << "\n";
	}
	if (task == 31)
		//10c
	{
		const double a = 3.7;
		double t, x;
		cin >> x;
		t = x*x + a*a;
		cout << t << "\n";
	}
	if (task == 32)
		//11a
	{
		double a, x, y, b;
		cin >> a;
		cin >> b;
		cin >> x;
		y = pow(sin(a*x), 3) + pow(b, 0.5)*cos(x)*cos(x);
		cout << y << "\n";
	}
	if(task==33)
	//11b
	{const double x = 1.4;
	double a;
	a = log10(abs(x));
	cout << a << "\n";
    }
	if (task == 34)
		//11c
	{
		const double p = 1.6;
		double b, x;
		cin >> x;
		b=pow(x, 4) + log(x*x*x);
		cout << b << "\n";
	}
	if (task == 35)
		//21a
	{
		const double b = 1.6;
		double y, a;
		y = log10(a) / log(pow(b, 3));
		cout << y << "\n";
	}
	if (task == 36)
		//21b
	{
		const double b = 1.6;
		double a, x;
		cin >> x;
		a = sin(x*x + b*b);
		cout << a << "\n";
	}
	if (task == 37)
		//21c
	{
		const double n = 8.1;
		double x, b;
		cin >> b;
		x = pow(n, b) + b*b;
		cout << x << "\n";
	}

	if (task == 38)
		//3
		//6.	//Задание: составить структурную схему алгоритма и проект программы, исходные данные ввести с клавиатуры, 
		//результат вывести на экран.
		//1.	Тело движется по закону S = t3 – 3t2 + 2. Вычислить скорость тела в момент времени t.Значение t ввести
		//с клавиатуры(Функция скорости есть производная от функции расстояния по времени).
	{
		double s, t;
		cin >> t;
		s = pow(t, 3) - 3 * t*t + 2;
		cout << s << "\n";
	}
	if (task == 39)
		/*/2.	Найти корни квадратного уравнения a•x2 + b•x + c = 0, введя с экрана коэффициенты
		a, b, c(коэффициент a не равен 0), для которых дискриминант положителен.*/
	{
		double a, b, c, x, y;
		cin >> a;
		cin >> b;
		cin >> c;
		if ((b*b - 4 * a*c) > 0)
		{
			x = (-b + pow((b*b - 4 * a*c), 0.5)) / 2 * a;
			y = (-b - pow((b*b - 4 * a*c), 0.5)) / 2 * a;
			cout << x << "\n";
			cout << y << "\n";
		}
		else
		{
			cout << "kornei net" << "\n";
		}
	}
		if (task == 40)
			//3.	Вычислить корень уравнения 2x / a + b - 12 = 0 при различных значениях параметров a, b.
			//Значения a, b ввести с экрана.
		{
			double a, b, x;
			cin >> a;
			cin >> b;
			x = 6 * (a + b);
			cout << x << "\n";
		}
		if (task == 41)
			/*/4.	Вычислить рентабельность работы предприятия за месяц по формуле рент = прибыль / себестоимость100%,
			если себестоимость продукции в текущем месяце уменьшилась по сравнению с прошлым на 5 % .
			Значение прибыли и себестоимости за прошлый месяц ввести с экрана*/
		{
			int r, p, s;
			cin >> p;
			cin >> s;
			r = p*s +p*s*0.05;
			cout << r << "\n";

		}
		if (task == 42)
			/*/5.	Идет k - я секунда суток.Определить, сколько целых часов(Н) и целых минут(М) прошло с начала суток.
			Вывести на экран фразу : «Эточасовминут».Вместо многоточий поставить вычисленные значения Н и М.*/
		{
			int s, h, m;
			cin >> s;
			h = s / 3600;
			m = s % 3600 ;
			cout << "Eto " << h << "chasov " << "i " << m << "minut" << "\n";
	    }
	system("pause");
	return (0);
}
