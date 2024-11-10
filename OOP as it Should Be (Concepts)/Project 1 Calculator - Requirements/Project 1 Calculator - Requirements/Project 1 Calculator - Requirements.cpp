#include<iostream>
using namespace std;

class clsCalculator {
private:
    float _Result = 0; // äÊíÌÉ ÇáÚãáíÉ ÇáÍÇáíÉ
    float _LastNumber = 0; // ÇáÑŞã ÇáÃÎíÑ ÇáãÓÊÎÏã
    string _LastOperation = "Clear"; // ÂÎÑ ÚãáíÉ Êã ÇÓÊÎÏÇãåÇ
    float _PreviousResult = 0; // äÊíÌÉ ÇáÚãáíÉ ÇáÓÇÈŞÉ

    // ÏÇáÉ ááÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÑŞã ãÓÇæíğÇ ááÕİÑ
    bool _IsZero(float Number) {
        return (Number == 0);
    }

public:
    // ÏÇáÉ áÅÖÇİÉ ÑŞã Åáì ÇáäÊíÌÉ ÇáÍÇáíÉ
    void Add(float Number) {
        _LastNumber = Number; // ÊÚííä ÇáÑŞã ÇáÃÎíÑ
        _PreviousResult = _Result; // ÊÚííä äÊíÌÉ ÇáÚãáíÉ ÇáÓÇÈŞÉ
        _LastOperation = "Adding"; // ÊÚííä äæÚ ÇáÚãáíÉ
        _Result += Number; // ÅÖÇİÉ ÇáÑŞã Åáì ÇáäÊíÌÉ
    }

    // ÏÇáÉ áØÑÍ ÑŞã ãä ÇáäÊíÌÉ ÇáÍÇáíÉ
    void Subtract(float Number) {
        _LastNumber = Number; // ÊÚííä ÇáÑŞã ÇáÃÎíÑ
        _PreviousResult = _Result; // ÊÚííä äÊíÌÉ ÇáÚãáíÉ ÇáÓÇÈŞÉ
        _LastOperation = "Subtracting"; // ÊÚííä äæÚ ÇáÚãáíÉ
        _Result -= Number; // ØÑÍ ÇáÑŞã ãä ÇáäÊíÌÉ
    }

    // ÏÇáÉ áŞÓãÉ ÇáäÊíÌÉ Úáì ÑŞã
    void Divide(float Number) {
        _LastNumber = Number; // ÊÚííä ÇáÑŞã ÇáÃÎíÑ

        // ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÑŞã ÇáĞí íÊã ŞÓãå ÕİÑ
        if (_IsZero(Number)) {
            Number = 1; // İí ÍÇáÉ ßÇä ÇáÑŞã ÇáĞí íÊã ŞÓãå ÕİÑ¡ ÓíÊã ÇÓÊÈÏÇáå ÈÇáæÇÍÏ
        }
        _PreviousResult = _Result; // ÊÚííä äÊíÌÉ ÇáÚãáíÉ ÇáÓÇÈŞÉ
        _LastOperation = "Dividing"; // ÊÚííä äæÚ ÇáÚãáíÉ
        _Result /= Number; // ŞÓã ÇáäÊíÌÉ Úáì ÇáÑŞã
    }

    // ÏÇáÉ áÖÑÈ ÇáäÊíÌÉ İí ÑŞã
    void Multiply(float Number) {
        _LastNumber = Number; // ÊÚííä ÇáÑŞã ÇáÃÎíÑ
        _LastOperation = "Multiplying"; // ÊÚííä äæÚ ÇáÚãáíÉ
        _PreviousResult = _Result; // ÊÚííä äÊíÌÉ ÇáÚãáíÉ ÇáÓÇÈŞÉ
        _Result *= Number; // ÖÑÈ ÇáäÊíÌÉ İí ÇáÑŞã
    }

    // ÏÇáÉ ááÍÕæá Úáì ÇáäÊíÌÉ ÇáäåÇÆíÉ
    float GetFinalResults() {
        return _Result;
    }

    // ÏÇáÉ áãÓÍ ÇáÍÇáÉ ÇáÍÇáíÉ ááÂáÉ ÇáÍÇÓÈÉ æÅÚÇÏÊåÇ Åáì ÇáæÖÚ ÇáÇİÊÑÇÖí
    void Clear() {
        _LastNumber = 0; // ÅÚÇÏÉ ÇáÑŞã ÇáÃÎíÑ Åáì ÇáÕİÑ
        _PreviousResult = 0; // ÅÚÇÏÉ äÊíÌÉ ÇáÚãáíÉ ÇáÓÇÈŞÉ Åáì ÇáÕİÑ
        _LastOperation = "Clear"; // ÅÚÇÏÉ äæÚ ÇáÚãáíÉ Åáì ÇáÇİÊÑÇÖí "Clear"
        _Result = 0; // ÅÚÇÏÉ ÇáäÊíÌÉ Åáì ÇáÕİÑ
    }

    // ÏÇáÉ áÅáÛÇÁ ÇáÚãáíÉ ÇáÓÇÈŞÉ æÇÓÊÚÇÏÉ ÇáäÊíÌÉ ÇáÓÇÈŞÉ
    void CancelLastOperation() {
        _LastNumber = 0; // ÅÚÇÏÉ ÇáÑŞã ÇáÃÎíÑ Åáì ÇáÕİÑ
        _LastOperation = "Cancelling Last Operation"; // ÊÚííä äæÚ ÇáÚãáíÉ Åáì ÅáÛÇÁ ÇáÚãáíÉ ÇáÓÇÈŞÉ
        _Result = _PreviousResult; // ÅÚÇÏÉ ÇáäÊíÌÉ Åáì äÊíÌÉ ÇáÚãáíÉ ÇáÓÇÈŞÉ
    }

    // ÏÇáÉ áØÈÇÚÉ ÇáäÊíÌÉ ÇáÍÇáíÉ
    void PrintResult() {
        // ØÈÇÚÉ ÇáäÊíÌÉ æäæÚ ÇáÚãáíÉ æÇáÑŞã ÇáÃÎíÑ
        cout << "Result After " << _LastOperation << " " << _LastNumber << " is: " << _Result << "\n";
    }
};

int main() {
    // ÅäÔÇÁ ßÇÆä ãä ÇáßáÇÓ clsCalculator
    clsCalculator Calculator1;

    // ãÓÍ ÇáÍÇáÉ ÇáÍÇáíÉ ááÂáÉ ÇáÍÇÓÈÉ
    Calculator1.Clear();

    // ÅÖÇİÉ ÇáÑŞã 10 æØÈÇÚÉ ÇáäÊíÌÉ
    Calculator1.Add(10);
    Calculator1.PrintResult();

    // ÅÖÇİÉ ÇáÑŞã 100 æØÈÇÚÉ ÇáäÊíÌÉ
    Calculator1.Add(100);
    Calculator1.PrintResult();

    // ØÑÍ ÇáÑŞã 20 æØÈÇÚÉ ÇáäÊíÌÉ
    Calculator1.Subtract(20);
    Calculator1.PrintResult();

    // ŞÓã ÇáäÊíÌÉ Úáì ÇáÕİÑ (ÓÊÊã ãÚÇáÌÉ ÇáÕİÑ ÈãÚÇÏáÊå Åáì 1) æØÈÇÚÉ ÇáäÊíÌÉ
    Calculator1.Divide(0);
    Calculator1.PrintResult();

    // ŞÓã ÇáäÊíÌÉ Úáì 2 æØÈÇÚÉ ÇáäÊíÌÉ
    Calculator1.Divide(2);
    Calculator1.PrintResult();

    // ÖÑÈ ÇáäÊíÌÉ İí 3 æØÈÇÚÉ ÇáäÊíÌÉ
    Calculator1.Multiply(3);
    Calculator1.PrintResult();

    // ÅáÛÇÁ ÇáÚãáíÉ ÇáÓÇÈŞÉ æØÈÇÚÉ ÇáäÊíÌÉ
    Calculator1.CancelLastOperation();
    Calculator1.PrintResult();

    // ãÓÍ ÇáÍÇáÉ ÇáÍÇáíÉ ááÂáÉ ÇáÍÇÓÈÉ æØÈÇÚÉ ÇáäÊíÌÉ
    Calculator1.Clear();
    Calculator1.PrintResult();

    // ÅíŞÇİ ÇáÊäİíĞ ÍÊì íÊã ÇáÖÛØ Úáì Ãí ãİÊÇÍ
    system("pause>0");

    return 0;
}
