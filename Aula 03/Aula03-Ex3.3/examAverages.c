#include <stdio.h>

int main()
{
    float p1, p2, p3, t1, t2, mp, mt, mfinal;
    p1 = 10;
    p2 = 10;
    p3 = 10;
    t1 = 10;
    t2 = 9;

    mp = (2*p1 + 3*p2 + 3*p3) / 8;
    printf("Your exam note is:     %.2f\n", mp);

    mt = (t1 + t2) / 2;
    printf("Your homework note is: %.2f\n", mt);

    mfinal = (7*mp + 3*mt) / 10;
    printf("Your final note is:    %.2f\n", mfinal);

    if (mfinal < 5)
        printf("More luck in next time :(\n");
    else
        printf("Congratulations you passed this discipline :)\n");

    return 0;
}
