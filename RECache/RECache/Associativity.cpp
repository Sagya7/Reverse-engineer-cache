#include <iostream>
#include <chrono>
#include <cmath>
#include <fstream>

using namespace std::literals::chrono_literals;
using namespace std;

const size_t bigger_than_cachesize =10 * 8 * 1024 * 1024;
char *p = new char[bigger_than_cachesize];
char *g = new char[bigger_than_cachesize];
int main()
{
	fstream fout;
	fout.open("associvity.csv", ios::out | ios::app);

	char *pointer;
	using nano = std::chrono::nanoseconds;

	int i;
	for (i = 0; i < bigger_than_cachesize; i++)
	{
		g[i] = rand();
	}
	int j = 0;
	j = 1;

	char read_val = 0;
	pointer = p;
	int set_associvity = 0;

	while (set_associvity < 16)
	{
		read_val = *pointer;
		pointer += 524288;
		set_associvity++;
	}

	set_associvity = 0;

	while (set_associvity < 16)
	{
		pointer -= 524288;
		auto start = std::chrono::high_resolution_clock::now();
		read_val = *pointer;
		auto finish = std::chrono::high_resolution_clock::now();
		std::cout << "read took "
			<< std::chrono::duration_cast<nano>(finish - start).count()
			<< " nanoseconds\n";
		fout << std::chrono::duration_cast<nano>(finish - start).count() << "\n";
		set_associvity++;
	}

	fout.close();

	int stop;
	scanf_s("%d", &stop);

}
