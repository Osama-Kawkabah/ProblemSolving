#include <iostream>
#include <stdexcept>

template<typename T>
class Stack {
public:
    // «·⁄„·Ì«  «·√”«”Ì…
    virtual void push(T value) = 0;
    virtual void pop() = 0;
    virtual T top() const = 0;
    virtual bool isEmpty() const = 0;
    virtual ~Stack() {} // „œ„¯— «› —«÷Ì
};

template<typename T>
class ArrayStack : public Stack<T> {
private:
    static const int MAX_SIZE = 100;
    T data[MAX_SIZE];
    int topIndex;
public:
    ArrayStack() : topIndex(-1) {}

    void push(T value) override {
        if (topIndex < MAX_SIZE - 1) {
            data[++topIndex] = value;
        }
        else {
            throw std::overflow_error("Stack overflow");
        }
    }

    void pop() override {
        if (topIndex >= 0) {
            --topIndex;
        }
        else {
            throw std::underflow_error("Stack underflow");
        }
    }

    T top() const override {
        if (topIndex >= 0) {
            return data[topIndex];
        }
        else {
            throw std::underflow_error("Stack is empty");
        }
    }

    bool isEmpty() const override {
        return topIndex == -1;
    }
};
int main() {
    ArrayStack<int> stack;

    // «Œ »«— œ«·… isEmpty
    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    // ≈œ—«Ã ⁄‰«’— ›Ì «·ﬂœ”…
    stack.push(10);
    stack.push(20);
    stack.push(30);

    // ⁄—÷ «·⁄‰’— «·⁄·ÊÌ
    std::cout << "Top element: " << stack.top() << std::endl;

    // ≈“«·… «·⁄‰’— «·⁄·ÊÌ
    stack.pop();

    // ⁄—÷ «·⁄‰’— «·⁄·ÊÌ »⁄œ «·≈“«·…
    std::cout << "Top element after pop: " << stack.top() << std::endl;

    // «Œ »«— œ«·… isEmpty »⁄œ ≈œ—«Ã »⁄÷ «·⁄‰«’—
    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    // ≈“«·… Ã„Ì⁄ «·⁄‰«’—
    stack.pop();
    stack.pop();

    // „Õ«Ê·… ≈“«·… ⁄‰’— „‰ ﬂœ”… ›«—€… (ÌÃ» √‰ Ì—„Ì «” À‰«¡)
    try {
        stack.pop();
    }
    catch (const std::underflow_error& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
