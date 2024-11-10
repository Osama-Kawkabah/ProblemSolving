#include<iostream> // ÊÖãíä ãßÊÈÉ áÅÏÎÇá æÅÎÑÇÌ ÇáÈíÇäÇÊ ãä æÅáì ÇáÌåÇÒ
#include<string> // ÊÖãíä ãßÊÈÉ áÏÚã ÇáäÕæÕ
#include<vector> // ÊÖãíä ãßÊÈÉ áÏÚã ÇáãÕİæİÇÊ ÇáÏíäÇãíßíÉ

using namespace std; // ÇÓÊÎÏÇã ÇáäØÇŞ ÇáŞíÇÓí áãßÊÈÉ C++

// ÊÚÑíİ åíßá ÇáÈíÇäÇÊ áÊÎÒíä ÇáÊæÇÑíÎ
struct stDate {
    short Year; // áÊÎÒíä ÇáÓäÉ
    short Month; // áÊÎÒíä ÇáÔåÑ
    short Day; // áÊÎÒíä Çáíæã
};

// ÏÇáÉ ÊŞæã ÈÊŞÓíã ÇáäÕ Åáì ÃÌÒÇÁ ÈÇÓÊÎÏÇã İÇÕá ãÍÏÏ æÊÎÒíä ÇáÃÌÒÇÁ İí ãÕİæİÉ
vector<string> SplitString(string S1, string Delim) {
    vector<string> vString; // ÊÚÑíİ ãÕİæİÉ áÊÎÒíä ÇáÃÌÒÇÁ
    short pos = 0; // ÊÚÑíİ ãÊÛíÑ áÊÎÒíä ãæŞÚ ÇáİÇÕá
    string sWord; // ÊÚÑíİ ãÊÛíÑ áÊÎÒíä ÇáÌÒÁ ÇáãÓÊäİÏ

    // ÍáŞÉ ÊÈÍË Úä ÇáİæÇÕá æÊŞæã ÈÊŞÓíã ÇáäÕ
    while ((pos = S1.find(Delim)) != std::string::npos) {
        sWord = S1.substr(0, pos); // ÇÓÊÎÑÇÌ ÇáÌÒÁ ãä ÈÏÇíÉ ÇáäÕ ÍÊì ÇáİÇÕá
        if (sWord != "") {
            vString.push_back(sWord); // ÅÖÇİÉ ÇáÌÒÁ Åáì ÇáãÕİæİÉ ÅĞÇ áã íßä İÇÑÛğÇ
        }
        S1.erase(0, pos + Delim.length()); // ÍĞİ ÇáÌÒÁ ÇáãÓÊäİÏ æÇáİÇÕá ãä ÇáäÕ æÇáÇäÊŞÇá ááÌÒÁ ÇáÊÇáí
    }

    if (S1 != "") {
        vString.push_back(S1); // ÅÖÇİÉ ÇáÌÒÁ ÇáÃÎíÑ ãä ÇáäÕ Åáì ÇáãÕİæİÉ ÅĞÇ ßÇä ÛíÑ İÇÑÛ
    }

    return vString; // ÅÑÌÇÚ ÇáãÕİæİÉ ÇáÊí ÊÍÊæí Úáì ÇáÃÌÒÇÁ ÇáãÓÊäİÏÉ ãä ÇáäÕ
}

// ÏÇáÉ ÊŞæã ÈÊÈÏíá ßáãÉ ãÚíäÉ ÈßáãÉ ÃÎÑì İí ÇáäÕ
string ReplaceWordInString(string S1, string StringToReplace, string sRepalceTo) {
    short pos = S1.find(StringToReplace); // ÇáÈÍË Úä ãæŞÚ ÇáßáãÉ ÇáãÑÇÏ ÊÈÏíáåÇ
    while (pos != std::string::npos) { // ÍáŞÉ ÊÓÊãÑ ÍÊì íÊã ÇáÚËæÑ Úáì ßá ÇáÍÇáÇÊ
        S1 = S1.replace(pos, StringToReplace.length(), sRepalceTo); // ÊÈÏíá ÇáßáãÉ ÈÇáßáãÉ ÇáÌÏíÏÉ
        pos = S1.find(StringToReplace); // ÇáÈÍË Úä ÇáßáãÉ ÇáãÑÇÏ ÊÈÏíáåÇ ÇáÊÇáíÉ
    }
    return S1; // ÅÑÌÇÚ ÇáäÕ ÈÚÏ ÇáÊÈÏíá
}

// ÏÇáÉ ÊŞæã ÈÊÍæíá ÇáÊÇÑíÎ ãä äæÚ stDate Åáì äÕ
string DateToString(stDate Date) {
    return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
}

// ÏÇáÉ ÊŞæã ÈÊÍæíá ÇáÊÇÑíÎ ãä äÕ Åáì åíßá stDate
stDate StringToDate(string DateString) {
    stDate Date; // ÊÚÑíİ ãÊÛíÑ ãä äæÚ stDate áÊÎÒíä ÇáÊÇÑíÎ
    vector<string> vDate; // ÊÚÑíİ ãÕİæİÉ áÊÎÒíä ÇáÃÌÒÇÁ ÇáãİÕæáÉ ãä ÇáÊÇÑíÎ
    vDate = SplitString(DateString, "/"); // ÇÓÊÎÏÇã ÏÇáÉ ÇáİÕá áİÕá ÇáÊÇÑíÎ Åáì ÃÌÒÇÁ
    Date.Day = stoi(vDate[0]); // ÊÍæíá Çáíæã Åáì ÚÏÏ ÕÍíÍ æÊÎÒíäå İí åíßá ÇáÈíÇäÇÊ
    Date.Month = stoi(vDate[1]); // ÊÍæíá ÇáÔåÑ Åáì ÚÏÏ ÕÍíÍ æÊÎÒíäå İí åíßá ÇáÈíÇäÇÊ
    Date.Year = stoi(vDate[2]); // ÊÍæíá ÇáÓäÉ Åáì ÚÏÏ ÕÍíÍ æÊÎÒíäå İí åíßá ÇáÈíÇäÇÊ
    return Date; // ÅÑÌÇÚ ÇáÊÇÑíÎ ßåíßá stDate
}

// ÏÇáÉ áÊäÓíŞ ÇáÊÇÑíÎ ÈÍÓÈ ŞæÇáÈ ãÎÊáİÉ
string FormateDate(stDate Date, string DateFormat = "dd/mm/yyyy") {
    string FormattedDateString = ""; // ÊÚÑíİ ãÊÛíÑ áÊÎÒíä ÇáÊÇÑíÎ ÈÇáÊäÓíŞ ÇáãØáæÈ
    FormattedDateString = ReplaceWordInString(DateFormat, "dd", to_string(Date.Day)); // ÊÈÏíá Çáíæã İí ÇáŞÇáÈ
    FormattedDateString = ReplaceWordInString(FormattedDateString, "mm", to_string(Date.Month)); // ÊÈÏíá ÇáÔåÑ İí ÇáŞÇáÈ
    FormattedDateString = ReplaceWordInString(FormattedDateString, "yyyy", to_string(Date.Year)); // ÊÈÏíá ÇáÓäÉ İí ÇáŞÇáÈ
    return FormattedDateString; // ÅÑÌÇÚ ÇáÊÇÑíÎ ÈÇáÊäÓíŞ ÇáãØáæÈ
}

// ÏÇáÉ áŞÑÇÁÉ ÇáÊÇÑíÎ ßäÕ ãä ÇáãÓÊÎÏã
string ReadStringDate(string Message) {
    string DateString; // ÊÚÑíİ ãÊÛíÑ áÊÎÒíä ÇáÊÇÑíÎ
    cout << Message; // ØÈÇÚÉ ÑÓÇáÉ ááãÓÊÎÏã
    getline(cin >> ws, DateString); // ŞÑÇÁÉ ÇáÊÇÑíÎ ßäÕ ãä ÇáãÓÊÎÏã
    return DateString; // ÅÑÌÇÚ ÇáÊÇÑíÎ ÇáĞí ÃÏÎáå ÇáãÓÊÎÏã
}

// ÇáÏÇáÉ ÇáÑÆíÓíÉ ááÈÑäÇãÌ
int main() {
    // ŞÑÇÁÉ ÇáÊÇÑíÎ ãä ÇáãÓÊÎÏã
    string DateString = ReadStringDate("\nPlease Inter Date dd/mm/yyyy: ");
    // ÊÍæíá ÇáäÕ Åáì åíßá stDate
    stDate Date = StringToDate(DateString);

    // ØÈÇÚÉ ÇáÊÇÑíÎ ÈÊäÓíŞÇÊ ãÎÊáİÉ
    cout << FormateDate(Date) << "\n";
    cout << FormateDate(Date, "yyyy/dd/mm") << "\n";
    cout << FormateDate(Date, "mm/dd/yyyy") << "\n";
    cout << FormateDate(Date, "mm-dd-yyyy") << "\n";
    cout << FormateDate(Date, "dd-mm-yyyy") << "\n";
    cout << FormateDate(Date, "Day:dd, Month:mm, Year:yyyy") << "\n";

    system("pause>0");
    return 0;
}