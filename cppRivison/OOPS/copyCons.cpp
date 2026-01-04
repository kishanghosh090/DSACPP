class Test
{
public:
    int *x;

    Test(int a)
    {
        x = new int(a); // heap memory
    }
    // COPY CONSTRUCTOR
    Test(const Test &t)
    {
        x = new int(*t.x); // deep copy
    }

    Test &operator=(const Test &t)
    {
        if (this != &t)
        {                      // self-assignment check
            delete x;          // free old memory
            x = new int(*t.x); // deep copy
        }
        return *this;
    }
    ~Test()
    {
        delete x;
    }
};
int main()
{
    Test t1(10); // it deletes memory of x in destructor
    // then now t2 tries to access the same memory which is already deleted
    Test t2 = t1; // ❌ PROBLEM // default copy constructor (shallow)
                  // ➡ Both objects point to same memory

    /*
    💣 Destruction Time (DISASTER)

When objects go out of scope:

1️⃣ t2 destructor → delete x ✔
2️⃣ t1 destructor → delete x ❌ DOUBLE DELETE
*/

    // The default copy constructor performs a shallow copy, which is unsafe for classes that allocate dynamic memory. A custom copy constructor ensures deep copying and proper resource management.

    Test t3(10);
    Test t4(20);

    t3 = t4; // ❌ PROBLEM

    /*🔥 What Goes Wrong?

t2.x already points to heap memory

Assignment overwrites pointer

Old memory is lost → memory leak
*/

    return 0;
}