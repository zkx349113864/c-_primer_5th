#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::vector;


class Calendar {
public:
    // Calendar() = default;
    Calendar(const string &dateStr);

// private:


    unsigned year;
    unsigned month;
    unsigned day;
};

Calendar::Calendar(const string &md)
{
    unsigned format = 0;
    // 1/1/1990
    if (md.find_first_of("/") != string::npos) {
        format = 0x10;
    }

    // Jan 1, 1990
    if (md.find_first_of(",") >= 4 && md.find_first_of(",") != string::npos) {
        format = 0x01;
    }

    switch(format) {
        // format = 1/1/1990
        case 0x10:
            day = stoi(md.substr(0, md.find_first_of("/")));
            month = stoi(md.substr(md.find_first_of("/") + 1, md.find_first_of("/") - md.find_last_of("/")));
            year = stoi(md.substr(md.find_last_of("/") + 1, 4));
            break;
        case 0x01:
            day = stoi(md.substr(md.find_first_of("1234567890"), md.find_first_of(",") - md.find_first_of("1234567890")));
            if(md.find("Jan")<md.size()) month=1;
			if(md.find("Feb")<md.size()) month=2;
			if(md.find("Mar")<md.size()) month=3;
			if(md.find("Apr")<md.size()) month=4;
			if(md.find("May")<md.size()) month=5;
			if(md.find("Jun")<md.size()) month=6;
			if(md.find("Jul")<md.size()) month=7;
			if(md.find("Aug")<md.size()) month=8;
			if(md.find("Sep")<md.size()) month=9;
			if(md.find("Oct")<md.size()) month=10;
			if(md.find("Nov")<md.size()) month=11;
			if(md.find("Dec")<md.size()) month=12;
            year = stoi(md.substr(md.find_last_of(",") + 1, 4));
    }


}

int main()
{
    // string str("Jan, 1, 1990");
    Calendar date1("1/1/1990");
    // date1.formatDate(str);
    cout << date1.day << " " << date1.month << " " << date1.year;
    system("pause");
    return 0;
}