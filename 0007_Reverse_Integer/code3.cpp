int reverse(int x)
{
    long return_value = 0;

    while(x != 0)
    {
        return_value = return_value * 10 + x % 10; //receive the remainder and plus remainder * 10 every cycle
        x = x / 10;
    }

    if ((int)return_value != return_value)
    {
        return 0;
    }

    return (int)return_value;
}
