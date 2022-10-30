//#include <iostream>
//#include <chrono>
//#include <cmath>
//
//using namespace std::literals::chrono_literals;
//
//// Global variables.
//const size_t bigger_than_cachesize = 2 * 8 * 1024 * 1024;
//long *p = new long[bigger_than_cachesize];
//
//int main()
//{
//
//	int a[100] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,
//	               21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,
//	               41,42,43,44,45,46,47,48,49,50}; 
//	int temp = 0;
//	using nano = std::chrono::nanoseconds;
//	// When you want to "flush" cache. 
//	for (int i = 0; i < bigger_than_cachesize; i++)
//	{
//		p[i] = rand();
//	}
//
//	for (int i = 0; i < 50; i++)
//	{
//		auto start = std::chrono::high_resolution_clock::now();
//		temp = a[99];
//		auto finish = std::chrono::high_resolution_clock::now();
//		std::cout << "array" << i << " read took "
//			<< std::chrono::duration_cast<nano>(finish - start).count()
//			<< " nanoseconds\n";
//	}
//
//
//	// _mm_clflush(a);
//	
//	int stop;
//	scanf_s("%d", &stop);
//
//}
