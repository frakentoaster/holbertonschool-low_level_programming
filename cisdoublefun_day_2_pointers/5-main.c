void print_array(int *, int);
void sort_array(int *, int);

int main(void)
{
     int a[10] = {0, 3, 8, 2, 1, 1024, 98, 402, -1337, -1};

     print_array(a, 10);
     sort_array(a, 10);
     print_array(a, 10);
     return (0);
}
