/*Friend Class: Sometime we need to use private or protected member of a class to other classes so we use Friend class or
 Friend keyword in this case in which private or protected member is present..*/

#include <iostream>
#include<string>

using namespace std;
class Myclass
{
    friend class otherclass;
    private :
        int secret=10;
};

class otherclass
{
public:
    void showSecret(Myclass mc) ///object of myclass is passed here
    {
        mc.secret++;
        cout<<mc.secret<<endl;
    }
};

int main()
{
    otherclass c1;
    Myclass c2;
    c1.showSecret(c2);
    return 0;
}
