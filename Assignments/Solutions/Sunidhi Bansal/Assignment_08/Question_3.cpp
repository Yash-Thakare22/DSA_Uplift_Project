//Sorting : At least two greater elements

void merge(int *a, int lower, int mid, int upper) {
            int i = lower;
            int j = mid + 1;
            int k = lower;
            int arr[upper + 1];
            while (i <= mid && j <= upper) {
                if (a[i] <= a[j]) {
                    arr[k] = a[i];
                    i++;
                }
                else {
                    arr[k] = a[j];
                    j++;
                }
                k++;
            }   
            if (i > mid) {
                while (j <= upper) {
                    arr[k] = a[j];
                    k++;
                    j++;
                }
            }
            else {
                while (i <= mid) {
                    arr[k] = a[i];
                    k++;
                    i++;
                }
            }
            for (int i = lower; i <= upper; i++) {
                a[i] = arr[i];
            }
    }

void merge_sort(int *a, int lower, int upper) {
            if (lower < upper) {
                int mid  = (lower + upper) / 2;
                merge_sort(a, lower, mid);
                merge_sort(a, mid + 1, upper);
                merge(a, lower, mid, upper);
            }
        }

vector<int> findElements(int a[], int n)
        {
            merge_sort(a, 0, n - 1);
            vector<int> sorted_vect;
            for (int i = 0; i < n - 2; i++) {
                sorted_vect.push_back(a[i]);
            }
            return sorted_vect;
        }
