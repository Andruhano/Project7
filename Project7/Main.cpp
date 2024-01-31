#include "DynamicArray.h"

DynamicArray GetObj() 
{
    DynamicArray obj(3);
    obj.Input();

    return obj;
}

int main()
{
    DynamicArray a(5); 
    a.Input();
    a.Output();

    a.ReSize(8);
    a.Output();

    a.Sort();
    a.Output();

    int searchResult = a.Search(7);
    if (searchResult != -1)
        cout << "Element found at index: " << searchResult << endl;
    else
        cout << "Element not found\n";

    a.Reverse();
    a.Output();

    DynamicArray b = a;
    b.Output();

    DynamicArray result = GetObj();

    system("pause");
    return 0;
}