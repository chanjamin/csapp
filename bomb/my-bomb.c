

int strings_not_equal(char *x, char *y) //*x=readline *y=402400
{
    char *xx = x;
    char *yy = y;
    int z = 1;
    if (string_length(x) != string_length(y))
        return z = 0;
    while (z = ((int)*xx) << 31 != 0)
    {
        if (z == &y + 0)
        {
            xx++;
            yy++;
        }
        else
        {
            return 1;
        }
    }
}
// 计算的字符数,直到遇见0
int string_length(char *cp)
{
    if (*cp == 0)
        return 0;
    char *c2 = cp;
    int rtn;
    do
    {
        c2++;
        rtn = c2 - cp;
    } while (*c2 != 0);
    return rtn;
}

void phase2()
{
    int arr[6];
    read_six_numbers(readline(), arr);
    int *a = arr[0];
    int *b = arr[5];
    while (a != b)
    {
        if ((*a) * 2 == *(a + 1))
            a++;
        else
        {
            explode_bomb();
        }
    }
}

int read_six_numbers(char *readline, int *y)
{                     //y=7fffffffd380
    int *rsp = y - 6; // 7FFFFFFFD368
    int d = y;        //d in rdx
    int c = y + 1;    //c in rcx =7FFF FFFF D384
    int *f = y + 4;
    int *g = y + 5;
    int *e = y - 4;
    int *rtn = g;     //0 rax=7FFF FFFF D394
    *(rsp + 8) = rtn; //e =7FFFFFFFD370
    rtn = f;          //4203024 rax= 7FFFFFFFD390
    *rsp = rtn;       //4203024 *rsp=7FFFFFFFD390
    int *r9 = y + 3;  //  7FFF FFFF D38c
    int *r8 = y + 2;  //6305744 7FFF FFFF D388
    y = 0x4025c3;
    rtn = 0;
    rtn = sscanf(readline, *y, d, c, r8, r9, *f, *g);
    if (rtn > 5)
        return rtn;
    else
        explode_bomb();
}

int fun4(int x, int y, int z) //arg0,0,e ,should return 0
{              
    // int tmp=(z-y)>31
    //int tmp2=((z-y)+tmp)>>1;
    // if (x >= cx)
    // {
    //     if (cx >= x)
    //         return 0;
    //     else
    //         y = cx + 1;
    //     fun4(x, y, z);
    // }
    // else
    // {
    //     z = cx - 1;
    //     fun4(x, y, z);
    // }

    z %=2;//offset%2
    if(z == x){
        return 0;
    }
    else{
        return 2*fun(x,y,--z);
    }
}