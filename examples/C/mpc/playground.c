int fa(int * c, int a) {
    for (int i = 0; i < 5; i++) {
        c[i] = c[i] + a;
    }
    return 1;
}

int main(__attribute__((private(0))) int a, __attribute__((private(1))) int b) {
    int c[5] = {0,1,2,3,4};
    int ret = fa(c, a);
    int sum = ret;
    for (int i = 0; i < 5; i++) {
        sum += c[i];
    }
    return sum;
}



// int fa(int a, int b, int c) {
//     return a + b + c + 1;
// }

// int fb(int a) {
//     return fa(a, a, a) + 2;
// }

// int fc(int a) {
//     return fb(a) + 3;
// }

// int main(__attribute__((private(0))) int a, __attribute__((private(1))) int b) {
//     int c = fc(a) + fc(b); 
//     return c;
// }