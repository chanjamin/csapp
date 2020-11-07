

int strings_not_equal(char *x, char *y) //*x=readline *y=402400
{
    char *xx = x;
    char *yy = y;
    int z = 1;
    if (string_length(x) != string_length(y))
        return z = 0;
    while (z = ((int)*xx) << 31 != 0)
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
        rtn = c2-cp;
    } while (*c2 != 0);
    return rtn;
}

void phase2(){
    
}

void read_six_numbers(char * readline,int * y ){
    long *p1; // rsp-64
    int d=y;//d in rdx
    int c=y+1;//c in rcx
    int rtn=y+5;
    
}