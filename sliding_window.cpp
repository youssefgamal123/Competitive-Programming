
/*
 In sliding window always start by lopping to get  K window size , to get the base window
 and then start removing and adding to the window with given constraints

so in all sliding window problems the window is either of length K or it's a dynamic window with no fixed size

for the fixed size length problems you itreate to K to get the initial window and at then the right_ptr of the window
will be pointing to K and from then you iterate through the rest of the array as right_ptr < arr.size()
and upon each iteration u check if the selected item meets ur requirements or not , in both cases
ur left most pointer shall be incremented so that u start a new window and the right pointer is increameneted
don't forget to maximize or minmimize whatever values u are looking for




however in the dynamic window approach you start the left and right pointers at the zero position
if it meets ur condition u increment the right pointer and so on untill you encounter a condtion where
 u need to start a new window ... and keep track of the required min or max value depeneding on the problem definition
 in a variable where u will max or min it
 in starting a new window u increament the left outer most pointer and carry on with the problem

 [[1,[2,3],4],5,6]  at k =3 1,2,3 is  a window and 2,3,4 is a window ... notice we increamented the left pointer
 to slide the window and open another

 also notice that when u increament the left pointer u remove it's value from the current window
 which means that if this element meets a certain condition in a sum or an arthimatic condition you are carrying
 then u have to take care of subtracting it's value from the window or the variable u were keeping track of
as it's out of the window now.

'

FIXED → shrink every step
DYNAMIC → shrink ONLY when invalid


*/
SLIDING WINDOW DECISION TREE

When you see a problem, ask these IN ORDER:

❓ 1. Is the window size FIXED?

Look for keywords:

“subarray of size k”
“substring of length k”
“permutation length”
✅ YES → FIXED WINDOW
🔥 Template:
for (int i = 0; i < k; i++) {
    // build first window
}

for (int right = k; right < n; right++) {
    // add right
    // remove left
    left++;

    // update answer
}
🧪 Examples:
Max sum subarray of size k
Permutation in string
Find all anagrams
❓ 2. If NOT fixed → is there a CONSTRAINT?

Look for:

“at most k”
“no duplicates”
“sum ≤ k”
“distinct characters”
✅ YES → DYNAMIC WINDOW

Now go to next decision 👇

❓ 3. What is the GOAL?
🎯 CASE A: LONGEST / MAX

Keywords:

“longest”
“maximum length”
✅ Pattern:
while (invalid) {
    left++;
}
update answer
🧪 Examples:
Longest substring without repeating
Longest subarray sum ≤ k
At most k distinct chars
🎯 CASE B: SHORTEST / MIN

Keywords:

“minimum”
“smallest window”
✅ Pattern:
while (valid) {
    update answer
    left++;
}
🧪 Examples:
Minimum window substring
Min subarray sum ≥ target
🎯 CASE C: COUNTING

Keywords:

“number of subarrays”
“count substrings”
✅ Pattern:
while (invalid) {
    left++;
}
count += (right - left + 1);
🧪 Examples:
Count subarrays with sum ≤ k
Count substrings with k distinct
💣 THE MASTER RULES
🟦 FIXED WINDOW
always shrink (every step)
🟥 DYNAMIC WINDOW
Goal	When to shrink
Longest	while invalid
Shortest	while valid
Count	while invalid
🧠 THE ONE-LINE TRUTH

Sliding window =
expand right, shrink left, based on condition

⚠️ COMMON TRAPS (you hit these)
❌ Trap 1:

Thinking permutation/anagram is dynamic
👉 It’s FIXED

❌ Trap 2:

Shrinking when valid in longest problems
👉 NO → shrink when invalid

❌ Trap 3:

Resetting window
👉 NEVER reset — always shrink gradually

🚀 HOW YOU SHOULD THINK NOW

When you read a problem:

1. Fixed size? → yes → done
2. Else → constraint?
3. Goal? longest / shortest / count
4. Apply template
💀 Final reality check

If you follow this:

You can solve ~90% of sliding window problems without thinking

If you want next step, I can:
👉 give you 5 medium/LeetCode-level problems and force you to apply this tree until it becomes instinct.

solve a problem on longest and shortest so that i can grasp claearly while valid and invalid and what's the diffrence and why can't we switch or do wtv we want

Perfect — this is exactly the confusion we need to kill 🔥
We’ll do 2 problems side by side so you feel the difference.

🟥 PROBLEM 1 — LONGEST (while INVALID)
🧪 Problem:

Longest substring without repeating characters

🧠 Goal:

Maximize length → so we expand as much as possible

✅ Code:
int lengthOfLongestSubstring(string s) {
    vector<int> freq(256, 0);
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.size(); right++) {
        freq[s[right]]++;

        // 🔴 shrink ONLY when invalid
        while (freq[s[right]] > 1) {
            freq[s[left]]--;
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}
🔥 Key Idea

👉 We shrink ONLY when forced to

We want the window as BIG as possible
So we only fix it when it breaks
🧠 Mental model
expand → expand → expand
oops invalid 😡 → shrink just enough → continue expanding
🟦 PROBLEM 2 — SHORTEST (while VALID)
🧪 Problem:

Minimum size subarray sum ≥ target

🧠 Goal:

Minimize length → so we shrink aggressively

✅ Code:
int minSubArrayLen(int target, vector<int>& nums) {
    int left = 0, sum = 0, minLen = INT_MAX;

    for (int right = 0; right < nums.size(); right++) {
        sum += nums[right];

        // 🔵 shrink WHILE valid
        while (sum >= target) {
            minLen = min(minLen, right - left + 1);
            sum -= nums[left];
            left++;
        }
    }

    return minLen == INT_MAX ? 0 : minLen;
}
🔥 Key Idea

👉 We shrink as much as possible

We already have a valid window
Try to make it smaller
🧠 Mental model
expand → valid 😎 → shrink shrink shrink 🔥 → invalid → expand again
💥 THE CORE DIFFERENCE
Type	When do we shrink?	Why?
LONGEST	while INVALID	Keep window as big as possible
SHORTEST	while VALID	Make window as small as possible
🚨 WHY YOU CAN’T SWITCH THEM

This is the part you asked for — pay attention 👇

❌ If you use while(valid) in LONGEST

You would:

expand → valid → shrink 😡

👉 You are destroying good windows

You’ll never get max length

❌ If you use while(invalid) in SHORTEST

You would:

expand → valid → do nothing 😐

👉 You miss the chance to shrink
👉 You won’t get the minimum

🧠 Intuition that will stick
🔴 LONGEST

“Don’t touch the window unless it breaks”

🔵 SHORTEST

“The moment it works, try to shrink it”

🔥 Visual intuition
LONGEST
[ expand expand expand ❌ ] → fix → expand again
SHORTEST
[ expand expand ✅ ] → shrink shrink shrink → repeat



/*
















#include <iostream>
#include <vector>
using namespace std;

int maxSum(vector<int>& arr, int k){
    int n = arr.size();

    // n must be greater
    if (n <= k) {
        cout << "Invalid";
        return -1;
    }

    // Compute sum of first window of size k
    int max_sum = 0;
    for (int i = 0; i < k; i++)
        max_sum += arr[i];

    // Compute sums of remaining windows by
    // removing first element of previous
    // window and adding last element of
    // current window.
    int window_sum = max_sum;
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k]; // arr[i] acts as a righ  pointer and arr[i-k] gives the left outer pointer where it's value shall be subtracted from the current sum as this element is not in our tracked window so keeping it will result in  a bigger sum , so we need to subtract it's value .. subtracting it's value literally means removing it from our window .. but we don't just remove or skip the element hypothetically only .. but we must deduce any value it affected .. in our case it's the sum .. as this element is outside the window so counting it's sum is meaniningless as this element is not in the current window.


        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}

int main(){
    vector<int> arr = {5, 2, -1, 0, 3};
    int k = 3;
    cout << maxSum(arr, k);
    return 0;
}



Given an array of positive integers and an integer target,
find the minimum length subarray whose sum ≥ target.
If no such subarray exists, return 0.




#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int n = nums.size();

    int left = 0;
    int currentSum = 0;
    int minLen = INT_MAX;

    for (int right = 0; right < n; right++) {
        // expand window
        currentSum += nums[right];

        // shrink window while condition is satisfied
        while (currentSum >= target) { // at this point u have a valid window
            minLen = min(minLen, right - left + 1);

            // remove leftmost element from window
            currentSum -= nums[left];
            left++;
        }
    }

    return (minLen == INT_MAX) ? 0 : minLen;
}

int main() {
    vector<int> arr = {2, 3, 1, 2, 4, 3};
    int target = 7;

    cout << minSubArrayLen(target, arr);
    return 0;
}


/*
==================== SLIDING WINDOW ====================

There are TWO types of sliding window problems:

1) Fixed Size Window (size = k)
2) Dynamic Window (size changes based on a condition)

-------------------------------------------------------
1) FIXED SIZE WINDOW
-------------------------------------------------------

Idea:
- The window size is always K
- First, build the initial window of size K
- Then slide the window one step at a time:
    - Add the new right element
    - Remove the old left element
    - Update the result

Key Concept:
When the window moves:
    - The right pointer adds a new element
    - The left pointer removes an old element

Example:
[1, 2, 3, 4], k = 3

Windows:
[1,2,3] → [2,3,4]

Notice:
- We increment left to "slide"
- We must REMOVE the effect of the old element
  (e.g., subtract from sum)

-------------------------------------------------------
2) DYNAMIC WINDOW (VARIABLE SIZE)
-------------------------------------------------------

Idea:
- Window size is NOT fixed
- It grows until it becomes invalid
- Then we shrink it until it becomes valid again

Pattern:
- Expand → Fix → Measure

Steps:
1) Expand window (move right)
2) If invalid → shrink (move left using WHILE)
3) When valid → update result

Key Rule:
Use WHILE (not IF), because:
- One removal might NOT be enough
- We must fix the window completely

-------------------------------------------------------
MENTAL MODEL
-------------------------------------------------------

Fixed Window:
    Grow → When size == K → Slide

Dynamic Window:
    Grow → While invalid → Shrink → Update answer

-------------------------------------------------------
IMPORTANT DETAIL
-------------------------------------------------------

When removing an element from the window:
- You must remove its EFFECT as well

Examples:
- If tracking sum → subtract it
- If tracking frequency → decrement it
- If using set → erase it

Otherwise, your window state becomes incorrect.

=======================================================
*/

#include <iostream>
#include <vector>
using namespace std;

int maxSum(vector<int>& arr, int k){
    int n = arr.size();

    // Edge case: invalid window
    if (n < k) {
        cout << "Invalid";
        return -1;
    }

    // 1) Build initial window of size k
    int window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    int max_sum = window_sum;

    // 2) Slide the window
    for (int right = k; right < n; right++) {

        // Add new element (right side)
        window_sum += arr[right];

        // Remove old element (left side)
        // right - k represents the index leaving the window
        window_sum -= arr[right - k];

        // Update result
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}

int main(){
    vector<int> arr = {5, 2, -1, 0, 3};
    int k = 3;

    cout << maxSum(arr, k);
    return 0;
}


// dynamic

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int n = nums.size();

    int left = 0;
    int currentSum = 0;
    int minLen = INT_MAX;

    for (int right = 0; right < n; right++) {

        // 1) Expand window
        currentSum += nums[right];

        // 2) Shrink window while condition is satisfied
        // (window is VALID: sum >= target)
        while (currentSum >= target) {

            // Update result (valid window)
            minLen = min(minLen, right - left + 1);

            // Remove leftmost element (shrink window)
            currentSum -= nums[left];
            left++;
        }
    }

    return (minLen == INT_MAX) ? 0 : minLen;
}

int main() {
    vector<int> arr = {2, 3, 1, 2, 4, 3};
    int target = 7;

    cout << minSubArrayLen(target, arr);
    return 0;
}


// Dynamic window standard boilerplate code :
int dynamicWindow(string s) {
    unordered_set<char> window;

    int left = 0;
    int result = 0;

    for (int right = 0; right < s.size(); right++) {

        // 1. expand window
        // (sometimes insert here, sometimes after while depending on problem)

        // 2. shrink while invalid
        while (/* window is invalid */) {
            // remove from window
            window.erase(s[left]);
            left++;
        }

        // 3. insert / finalize window
        window.insert(s[right]);

        // 4. update result
        result = max(result, right - left + 1);
    }

    return result;
}


