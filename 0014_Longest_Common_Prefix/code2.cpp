char * longestCommonPrefix(char ** strs, int strsSize)
{
    if(strsSize == 0)
        return "";

    //compare strs[0]'s character on by one
    for(int i = 0; i < strlen(strs[0]); i++)
    {
        //compare every string in the strs
        for(int j = 1; j < strsSize; j++)
        {
            if(strs[0][i] != strs[j][i])
            {
                strs[0][i] = '\0';
                //return strs[0];
            }
        }
    }
    return strs[0];
}




