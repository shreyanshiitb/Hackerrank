int solve(vector<int> &v) {
    int c = 0;
    // Insertion sort
    for (int i = 1; i <v.size(); ++i) {
        int tmp = v[i];
        int j = i - 1;
        for (; j >= 0 && v[j] > tmp; --j) {
            v[j + 1] = v[j];
            // On the line with a count variable here
            ++c;
        }
        v[j + 1] = tmp;
    }

    return c;
}
