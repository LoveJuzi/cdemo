#include "dcl.h"

int main()
{
    for (;;)
    {
        initDatatype();
        if (getTokentype() == EOF)
        {
            break;
        }
        initDcl();
        dcl();
        if (getTokentype() != END)
        {
            // 报错
        }

        printf("%s : %s %s\n", getName(), getOut(), getDatatype());
    }

    return 0;
}