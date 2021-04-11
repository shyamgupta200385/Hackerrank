long repeatedString(string s, long n) {
    vector<long> mark(26, 0);
    long len = s.length();
    long i = 0;
    bool exit = true;
    int index;
    while(i < n)
    {
        // Main logic
        if ('a' <= s[i] && s[i] <= 'z')
            index = s[i] - 'a';
        else
            continue;
        mark[index] = mark[index] + 1;
        i++;

        // Corner case and to fit the execution in time limit
        if(i >= len)
        {
            // If there is no small a in the string return 0
            if(mark[0] == 0)
                return 0;
            // Check if only a in the string then return given length for loop
            for(int j = 1; j<mark.size()-1;j++)
            {
                if(mark[j] != 0)
                {
                    // found other then a
                    exit = false;
                    break;
                }
            }
            if (exit == true)
                return n;
            else
            {
                // Here optimize the execution
                // calculate total number of string for given length
                // and multiply with the number of a in the given string
                // if given string length % string length = 0 then return the multiplication
                // or else reduce the n = n%len which will be less then len
                if (n%len)
                {
                    mark[0] = mark[0] * (n/len);
                    n = n % len;
                    i = 0;
                }
                else
                {
                    return (mark[0] * (n/len));
                }
            }
        }
    }
    return mark[0];
}