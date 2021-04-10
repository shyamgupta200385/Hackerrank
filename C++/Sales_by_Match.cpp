int sockMerchant(int n, vector<int> ar) {
    int counter = 0,pair = 0;
    set<int> s;
    for(int i : ar)
    {
        if(find(s.begin(),s.end(),i) != s.end())
        {
            continue;
        }
        else {
            counter = count(ar.begin(), ar.end(), i);
            s.insert(i);
            if(counter > 1)
            {
                pair +=counter/2;
            }
        }
    }
    return pair;
}
