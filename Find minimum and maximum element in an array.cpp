

pair<long long, long long> getMinMax(long long a[], int n) 
{
    sort(a,a+n);
    pair<long long, long long> min_max;
    min_max = make_pair(a[0],a[n-1]);
    return min_max;
}
