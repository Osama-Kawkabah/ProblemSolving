#pragma once  // استخدام #pragma once لضمان عدم تضمين الملف مرتين

#include <iostream>  // تضمين مكتبة الإدخال والإخراج
#include "clsDate.h"  // تضمين تعريف الفئة clsDate
#include <queue>  // تضمين مكتبة queue لاستخدام الصفوف
#include <stack>  // تضمين مكتبة stack لاستخدام الكومات

using namespace std;  // استخدام فضاء الأسماء std لتجنب كتابة std:: قبل أسماء الأنواع

class clsQueueLine  // تعريف فئة clsQueueLine
{

private:

    short _TotalTickets = 0;  // عدد القياسات الإجمالي في الطابور
    short _AverageServeTime = 0;  // وقت الخدمة المتوسط ​​لكل عميل
    string _Prefix = "";  // البادئة لرقم التذكرة

    class clsTicket  // تعريف فئة داخلية clsTicket لتمثيل التذاكر
    {
    private:

        short _Number = 0;  // رقم التذكرة
        string _Prefix;  // البادئة
        string _TicketTime;  // وقت إصدار التذكرة
        short _WaitingClients = 0;  // عدد العملاء الانتظار
        short _AverageServeTime = 0;  // وقت الخدمة المتوقع

    public:
        clsTicket(string Prefix, short Number, short WaitingClients, short AverageServeTime)
        {
            _Number = Number;
            _TicketTime = clsDate::GetSystemDateTimeString();  // الحصول على التاريخ والوقت الحالي
            _Prefix = Prefix;
            _WaitingClients = WaitingClients;
            _AverageServeTime = AverageServeTime;
        }

        string Prefix()
        {
            return _Prefix;

        }
        short Number()
        {
            return _Number;
        }

        string FullNumber()
        {
            return _Prefix + to_string(_Number);  // إرجاع الرقم التذكري بالبادئة
        }

        string TicketTime()
        {
            return _TicketTime;  // إرجاع وقت إصدار التذكرة
        }

        short WaitingClients()
        {
            return _WaitingClients;  // إرجاع عدد العملاء المنتظرين
        }

        short ExpectedServeTime()
        {
            return _AverageServeTime * _WaitingClients;  // حساب الوقت المتوقع لخدمة العميل
        }

        void Print()
        {
            cout << "\n\t\t\t  ـــــــــــــــــــــــ\n";
            cout << "\n\t\t\t\t    " << FullNumber();  // طباعة رقم التذكرة بالبادئة
            cout << "\n\n\t\t\t    " << _TicketTime;  // طباعة وقت إصدار التذكرة
            cout << "\n\t\t\t    Wating Clients = " << _WaitingClients;  // طباعة عدد العملاء المنتظرين
            cout << "\n\t\t\t      Serve Time In";
            cout << "\n\t\t\t       " << ExpectedServeTime() << " Minutes.";  // طباعة الوقت المتوقع للخدمة
            cout << "\n\t\t\t  ـــــــــــــــــــــــ\n";
        }
    };

public:

    queue <clsTicket> QueueLine;  // قائمة الانتظار للتذاكر

    clsQueueLine(string Prefix, short AverageServeTime)
    {
        _Prefix = Prefix;
        _TotalTickets = 0;
        _AverageServeTime = AverageServeTime;
    }

    // دالة لإصدار تذكرة جديدة
    void IssueTicket()
    {
        _TotalTickets++;
        clsTicket Ticket(_Prefix, _TotalTickets, WaitingClients(), _AverageServeTime);
        QueueLine.push(Ticket);  // إضافة التذكرة إلى قائمة الانتظار
    }

    // دالة للحصول على عدد العملاء المنتظرين
    int WaitingClients()
    {
        return QueueLine.size();
    }

    // دالة للحصول على رقم التذكرة القادمة
    string WhoIsNext()
    {
        if (QueueLine.empty())
            return "No Clients Left.";
        else
            return QueueLine.front().FullNumber();
    }

    // دالة لخدمة العميل التالي في الطابور
    bool ServeNextClient()
    {
        if (QueueLine.empty())
            return false;

        QueueLine.pop();  // إزالة العميل الأول من الطابور
        return true;
    }

    // دالة للحصول على عدد العملاء الذين تم خدمتهم
    short ServedClients()
    {
        return _TotalTickets - WaitingClients();
    }

    // دالة لطباعة معلومات الطابور
    void PrintInfo()
    {
        cout << "\n\t\t\t  ـــــــــــــــــــــــ\n";

        cout << "\n\t\t\t\tQueue Info";
        cout << "\n\t\t\t  ـــــــــــــــــــــــ\n";
        cout << "\n\t\t\t    Prefix   = " << _Prefix;
        cout << "\n\t\t\t    Total Tickets   = " << _TotalTickets;
        cout << "\n\t\t\t    Served Clients  = " << ServedClients();
        cout << "\n\t\t\t    Wating Clients  = " << WaitingClients(); ;
        cout << "\n\t\t\t  ـــــــــــــــــــــــ\n";
        cout << "\n";

    }

    void PrintTicketsLineRTL()
    {

        if (QueueLine.empty())
            cout << "\n\t\tTickets: No Tickets.";
        else
            cout << "\n\t\tTickets: ";

        //we copy the queue in order not to lose the original
        queue <clsTicket> TempQueueLine = QueueLine;


        while (!TempQueueLine.empty())
        {
            clsTicket Ticket = TempQueueLine.front();

            cout << " " << Ticket.FullNumber() << " <-- ";

            TempQueueLine.pop();
        }

        cout << "\n";

    }

    void PrintTicketsLineLTR()
    {
        if (QueueLine.empty())
            cout << "\n\t\tTickets: No Tickets.";
        else
            cout << "\n\t\tTickets: ";

        //we copy the queue in order not to lose the original
        queue <clsTicket> TempQueueLine = QueueLine;
        stack <clsTicket> TempStackLine;

        while (!TempQueueLine.empty())
        {
            TempStackLine.push(TempQueueLine.front());
            TempQueueLine.pop();
        }

        while (!TempStackLine.empty())
        {
            clsTicket Ticket = TempStackLine.top();

            cout << " " << Ticket.FullNumber() << " --> ";

            TempStackLine.pop();
        }
        cout << "\n";
    }


    void PrintAllTickets()
    {

        cout << "\n\n\t\t\t       ---Tickets---";

        if (QueueLine.empty())
            cout << "\n\n\t\t\t     ---No Tickets---\n";

        //we copy the queue in order not to lose the original
        queue <clsTicket> TempQueueLine = QueueLine;


        while (!TempQueueLine.empty())
        {
            TempQueueLine.front().Print();
            TempQueueLine.pop();
        }

    }


};

