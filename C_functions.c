//==============  Cirular shift =================
int circular_shift(unsigned int num, char circular_type)
{
    int rotated_num = 0;
    if (circular_type == 'L')
    {
        unsigned int msb = num >> (sizeof(num) * 8 - 1);
        num = num << 1;
        rotated_num = num | msb;
    }
    else if (circular_type == 'R')
    {
        int lsb = num & 1;
        num = num >> 1;
        rotated_num = num | lsb;
    }
    return rotated_num;
};

// =========  swap two numbers ==============
void Swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
};

// ========== factorial number with recursive function ========

int factorial_number(int num)
{

    if (num >= 1)
    {
        return num * factorial_number(num - 1);
    }
    else
    {
        return 1;
    };
};

// ========== fibonacci series with recursive function ========
void fibonacci_series(int order)
{
    static int counter = 1;
    if (counter <= order)
    {
        static int prevous = 1, prePrevous = 0, now;

        now = prePrevous + prevous;
        printf("%d ", now);
        prePrevous = prevous;
        prevous = now;
        counter++;
        return fibonacci_series(order);
    }
};

// ============  bubble sorting algorithm  ============
void bubble_sort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                Swap(&arr[j], &arr[j + 1]);
            }
        }
    }
};

// =============== binary search algorithm  ===============
    // !the array must be sorted before use this algorithm.
    // return the index of this value if existed or (-1) if not existed.
int binary_search(const int arr[],int size,int value){
    //int size=sizeof(arr)/sizeof(arr[0]);
    int index=-1;
    int win_end=size-1,win_start=0;
    while (win_end>=win_start)
    {
        int win_median=(win_end+win_start)/2;
        if (value==arr[win_median])
        {
            index= win_median; 
            break;
            
        }else if (value>arr[win_median])
        {
            win_start=win_median+1;
            
        }else
        {
            win_end=win_median-1;
        }
        
    }
    
    return index;
};