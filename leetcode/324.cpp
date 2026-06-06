       auto mapIndex = [&](int i) {
            return (1 + 2*i) % (n | 1);
        };

        int left = 0, i = 0, right = n - 1;
        while (i <= right) {
            int mapped = mapIndex(i);
            if (nums[mapped] > median) {
                swap(nums[mapIndex(left)], nums[mapped]);
                left++;
                i++;
            } else if (nums[mapped] < median) {
                swap(nums[mapIndex(right)], nums[mapped]);
                right--;
            } else {
                i++;
            }
        }