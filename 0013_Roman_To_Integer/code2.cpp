int romanToInt(char * s)
{
    //'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000
    //six special situation(left smaller than right) => IV = 4, IX = 9, XL = 40, XC = 90, CD = 400, CM = 900

    int answer = 0;

    while(*s != 0)
    {
        if(*s == 'V') answer = answer + 5;
        else if(*s == 'L') answer = answer + 50;
        else if(*s == 'D') answer = answer + 500;
        else if(*s == 'M') answer = answer + 1000;
        else if(*s == 'I') answer = (*(s + 1) == 'V' || (*(s + 1) == 'X')) ? answer - 1 : answer + 1;
        else if(*s == 'X') answer = (*(s + 1) == 'L' || (*(s + 1) == 'C')) ? answer - 10 : answer + 10;
        else if(*s == 'C') answer = (*(s + 1) == 'D' || (*(s + 1) == 'M')) ? answer - 100 : answer + 100;
        s++;
    }
    return answer;
}



