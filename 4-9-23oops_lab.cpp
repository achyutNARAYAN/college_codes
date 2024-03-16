// #include <iostream>
// #include <stack>
// #include <vector>
// // #include <algorithm>
// using namespace std;

// vector<int> traverseStack(stack<int> s)
// {
//     vector<int> v;
//     cout << "\nDirectly printing the stack elements\n";
//     while (s.top())
//     {
//         cout << s.top() << " ";
//         v.push_back(s.top());
//         s.pop();
//     }
//     return v;
// }

// int main()
// {
//     stack<int> s;

//     // LIFO
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);

//     int size = s.size();
//     cout << size << endl;

//     // traverse
//     vector<int> v = traverseStack(s);

//     cout << "\nPrinting the stack elements from vector\n";
//     for (int i = v.size() - 1; i >= 0; i--)
//     {
//         cout << v[i] << " ";
//     }

//     return 0;
// }
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> traverseStack(stack<int> s)
{
    vector<int> v;
    cout << "\nDirectly printing the stack elements\n";
    while (!s.empty()) // Change the condition to check if the stack is empty
    {
        cout << s.top() << " ";
        v.push_back(s.top());
        s.pop();
    }
    return v;
}

int main()
{
    stack<int> s;

    // LIFO
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    int size = s.size();
    cout << size << endl;

    // traverse
    vector<int> v = traverseStack(s);

    cout << "\nPrinting the stack elements from vector\n";
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }

    return 0;
}
