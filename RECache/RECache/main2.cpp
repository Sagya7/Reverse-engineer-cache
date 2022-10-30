//#include <iostream>
//#include <chrono>
//#include <cmath>
//#include <fstream>
//
//using namespace std::literals::chrono_literals;
//using namespace std;
//
//// Global variables.
//const size_t bigger_than_cachesize = 10 * 8 * 1024 * 1024;
//char *p = new char[bigger_than_cachesize];
//
//int main()
//{
//	fstream fout;
//	fout.open("reportcard.csv", ios::out | ios::app);
//
//	char *pointer;
//	using nano = std::chrono::nanoseconds;
//
//	int i;
//	for (i = 0; i < bigger_than_cachesize; i++)
//	{
//		p[i] = rand();
//	}
//
//	int j = 0;
//	j = 1;
//
//	char read_val = 0;
//
//	i = i + 513;
//	pointer = p + i;
//	//_mm_clflush(pointer);
//
//	while(j < 1024)
//	{
//		auto start = std::chrono::high_resolution_clock::now();
//		read_val = *pointer++;
//		auto finish = std::chrono::high_resolution_clock::now();
//		std::cout << "read took "
//			<< std::chrono::duration_cast<nano>(finish - start).count()
//			<< " nanoseconds\n";
//		fout << std::chrono::duration_cast<nano>(finish - start).count() << "\n";
//		j++;
//		i++;
//	}
//
//	fout.close();
//
//	delete p;
//
//	int stop;
//	scanf_s("%d", &stop);
//
//}
