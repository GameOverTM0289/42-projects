

unsigned char reversebit(unsigned char octet)
{
    unsigned char reversed = 0;
    int i = 0;

    while (i < 8)
    {
        reversed = reversed << 1;
        reversed = reversed | (octet & 1);
        octet >>= 1;
        i++;
    }
    return reversed;
}