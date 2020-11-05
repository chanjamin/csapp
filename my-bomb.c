

int string_not_equal(char *x, char *y)
{
    char *xx = x;
    char *yy = y;
    int z = 1;
    if (string_length(x) != string_length(y))
        return z = 0;
    while (z = ((int)&xx) << 31 != 0)
    {
        if (z == &y+0)
        {
            xx++;
            yy++;
        }else{
            return 1;
        }
    }
}
// 计算从cp 开始字符数直到遇见0
int string_length(char *cp)
{
    if (*cp == 0)
        return 0;
    char *c2 = cp;
    int rtn;
    do
    {
        c2++;
        rtn = c2;
        // rtn-=cp;
    } while (*c2 != 0);
    return rtn;
}