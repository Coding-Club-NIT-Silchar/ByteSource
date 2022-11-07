// Also known as Union Find
struct DSU {
    vector<int> aux;
    int components = 0;
    DSU(int n = 0) {
        aux.assign(n + 1, -1), components = n;
    }
    int find(int x) {
        return aux[x] < 0 ? x : aux[x] = find(aux[x]);
    }
    int size(int x) {
        return -aux[find(x)];
    }
    bool unite(int x, int y) {
        x = find(x), y = find(y);
        if (x != y)
        {
            if (size(x) < size(y))
                swap(x, y);
            aux[x] += aux[y], aux[y] = x, components--;
            return true;
        }
        return false;
    }
};
