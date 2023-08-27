class Solution:
    def find_elements(self, arr, n):
        missing_repeat = [0, 0]
        
        sum_arr = sum(arr)
        sum_squares_arr = sum([x * x for x in arr])
        
        expected_sum = n * (n + 1) // 2
        expected_sum_squares = n * (n + 1) * (2 * n + 1) // 6
        sum_difference = expected_sum - sum_arr
        sum_squares_difference = expected_sum_squares - sum_squares_arr
        
        missing = (sum_difference + sum_squares_difference // sum_difference) // 2
        repeated = missing - sum_difference
        
        missing_repeat[0] = missing
        missing_repeat[1] = repeated
        
        return missing_repeat