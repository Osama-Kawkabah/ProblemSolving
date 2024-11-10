#pragma warning (disable : 4996);

#include <iostream>
#include <ctime>
using namespace std;
int main()
{


	time_t Time = time(0);

	tm *New_time = localtime(&Time);

	//// åÇĞÇ ãæÇÔÑ *New_time  áåÇĞÇ &Time ÇáãßÇä 
	//// localtime åÇĞå ÇáãßÊÈå ÊÍÊæí Úáì ÇáæŞÊ æßá ãÇíÎÕå 
	////ááæÕáæá Çáì ÎÕÇÆÕå ãä ÇáæŞÊ 
	//// ÇÓã ÇáãæÔÑ New_time->tm_year -> ÇáæŞÊ ÇáãÑÇÏ ÊÍÏíÏå

	cout << "Year: " << New_time->tm_year + 1900 << endl;
	cout << "Month: " << New_time->tm_mon + 1 << endl;
	cout << "Day: " << New_time->tm_mday << endl;
	cout << "Hour: " << New_time->tm_hour << endl;
	cout << "Min: " << New_time->tm_min << endl;
	cout << "Second: " << New_time->tm_sec << endl;

	cout << "Week Day (Days since sunday): " << New_time->tm_wday << endl;
	cout << "Year Day (Days since Jan 1st): " << New_time->tm_yday << endl;
	cout << "hours of daylight savings: " << New_time->tm_isdst << endl;

	cout << "-------------------------------------------------------\n";
	cout << "-------------------------------------------------------\n";


	time_t NowTime = time(0);


	tm* Now = localtime(&NowTime);

	cout << "Year  : " << Now->tm_year+1900 << " : ";
	cout << "Month   : " << Now->tm_mon + 1 << " : ";
	cout << "Day   : " << Now->tm_mday << endl;
	cout << "-------------------------------------------------------\n";

	cout << "Hour: " << Now->tm_hour;
	cout << " : " << "min  : " << Now->tm_min;
	cout << " : " << "Second  : " << Now->tm_sec;

	return 0;
}
