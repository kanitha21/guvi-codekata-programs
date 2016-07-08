#include <iostream>

using namespace std;
int digit_num(int n)
{
 int len = 0;

 if(n == 0){
 return 1;
 }

 while(n){
 len ++;
 n /= 10;
 }
 return len;
}

int generate_m_with_n_zeros(int m, int n)
{
    while(n > 0){
        m *= 10;
        n--;
    }

    return m;
}
int num_2s_in_1_with_n_zeros(int nzeros)
{
    if(nzeros == 1){
        return 1;
    }

    int total = 1;
    int l = 1;

    while (l < nzeros){
        total *= 10;
        total += generate_m_with_n_zeros(1, l);
        l ++;
    }

    return total;
}
int first_figure(int n)
{
    while(n / 10 != 0){
        n /= 10;
    }

    return n;
}
int num_2s(int n)
{
 int total = 0;
 int base = 1;
    
    if(n < 2){
        return 0;
    }
    else if(n <= 9)
    {
        return 1;
    }

    int l = digit_num(n);

 int two_zeros = generate_m_with_n_zeros(2, l - 1);
    int three_zeros = generate_m_with_n_zeros(3, l - 1);
    int first = first_figure(n);
    
    if(n >= three_zeros){
        total += 10 * generate_m_with_n_zeros(1, l - 2);
    }
    else if(n >= two_zeros){
        total += n - two_zeros + 1;
    }
    
    total += first * num_2s_in_1_with_n_zeros( l - 1);

    total += num_2s(n - generate_m_with_n_zeros(first, l - 1));

 return total;
}


int main(int argc, char* argv[])
{
 for(int i = 1; i < 10; i++){
 cout << "less than " << generate_m_with_n_zeros(1, i) << " has " << num_2s_in_1_with_n_zeros(i) << endl;
 }

    for(int i = 1; i < 1003; i += 39){
        cout << "below " << i << " has " << num_2s(i) << endl;
    } 
 
 return 0;
}
