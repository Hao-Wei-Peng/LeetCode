bool isPalindrome(int x)
{
    if(x < 0)
        return false;

    long reverse_value = 0;
    int y = x;

    while (y != 0)
    {
        reverse_value = reverse_value * 10 + y % 10;
        y = y / 10;
    }

    if(reverse_value == x)
        return true;
    else
        return false;
}




