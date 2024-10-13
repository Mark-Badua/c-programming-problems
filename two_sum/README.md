Two approaches implemented to get indices of elements in array `nums` that equal to `target`:
- Brute force
    - Checking all permutations if they equate to target
- Using a dictionary
    - Need to implement own version of a dictionary (data structure does not exist in C)
    - Algorithm
        - Suppose we have an empty dictionary `x`
        - Loop over each element in `nums` while keeping track of the index `i` of the element
        - For each element `nums[i]`:
            - if `nums[k]` is not yet a key in `x`, store `x[target - nums[k]] = k`
            - Otherwise, we have found the indices of the two elements that sum to target
                - one being `x[nums[i]] = k`
                - other being the index `i` of the current element


