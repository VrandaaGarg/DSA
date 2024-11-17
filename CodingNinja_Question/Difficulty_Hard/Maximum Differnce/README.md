<h1>Maximum Difference Between Consecutive Elements<h1>
<h1>Problem Statement</h1>
<p>
        You are given an integer array <code>arr</code> of size <code>N</code>. Your task is to find the maximum difference between two consecutive elements in the sorted form of the array <code>arr</code>.
    </p>
    <p>
        If the <code>arr</code> contains less than two elements, return <code>0</code>.
    </p>
    <h2>Example</h2>
    <p>
        You are given <code>arr = {1, 3, 8, 6, 7}</code>, then our answer will be <code>3</code>.
        <br>Sorted form of <code>arr = {1, 3, 6, 7, 8}</code>. The maximum absolute difference between two consecutive elements is <code>6 - 3 = 3</code>, which is the correct answer.
    </p>
    <h2>Detailed Explanation</h2>
    <p>
        <strong>Constraints:</strong>
        <ul>
            <li>1 &lt;= T &lt;= 10</li>
            <li>1 &lt;= N &lt;= 10<sup>6</sup></li>
            <li>0 &lt;= arr[i] &lt;= 10<sup>9</sup></li>
        </ul>
        <strong>Time limit:</strong> 1 sec
        <br><strong>Note:</strong> You do not need to input or print anything, as it has already been taken care of. Just implement the given function.
    </p>
    <h2>Sample Input 1:</h2>
    <pre>

2
5
1 3 8 6 7
5
0 6 4 8 9

</pre>
<h2>Sample Output 1:</h2>
<pre>
3
4
</pre>
<h3>Explanation:</h3>
<p>
For the first test case, you are given <code>arr = {1, 3, 8, 6, 7}</code>. Then our answer will be <code>3</code>.
<br>Sorted form of <code>arr = {1, 3, 6, 7, 8}</code>. The maximum absolute difference between two consecutive elements is <code>6 - 3 = 3</code>, which is the correct answer.
</p>
<p>
For the second test case, you are given <code>arr = {0, 6, 4, 8, 9}</code>. Then our answer will be <code>4</code>.
<br>Sorted form of <code>arr = {0, 4, 6, 8, 9}</code>. The maximum absolute difference between two consecutive elements is <code>4 - 0 = 4</code>, which is the correct answer.
</p>
<h2>Sample Input 2:</h2>
<pre>
2
4
1 3 2 4
5
4 4 1 9 10
</pre>
<h2>Sample Output 2:</h2>
<pre>
1
5
</pre>
