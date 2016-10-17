#include <iostream>
#include <stack>
int main()
{
    std::stack<int> s;	// LIFO queue

    s.push(1); s.push(2); s.push(3);

    while (!s.empty())
    {
        std::cout << s.top() << std::endl;
        s.pop();
    }
    return 0;
}
