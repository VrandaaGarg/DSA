<h1>Problem Statement</h1>
<p>Ninja is playing with numbers but hates when he gets duplicate numbers. Ninja is provided an array, and he wants to remove all duplicate elements and return the array, but he has to maintain the order in which the elements were supplied to him.</p>

<h3>Detailed Explanation</h3>

<h4>Input/Output Format:</h4>
<ul>
  <li><strong>Input:</strong></li>
  <ul>
    <li>The first line contains an integer <code>T</code>, the number of test cases.</li>
    <li>For each test case:</li>
    <ul>
      <li>The first line contains an integer <code>N</code>, the size of the array.</li>
      <li>The second line contains <code>N</code> integers which represent the elements of the array.</li>
    </ul>
  </ul>
  <li><strong>Output:</strong> A single line for each test case containing the array after removing duplicates while maintaining the order.</li>
</ul>

<h4>Constraints:</h4>
<ul>
  <li>1 ≤ <code>T</code> ≤ 10</li>
  <li>1 ≤ <code>N</code> ≤ 5 × 10<sup>3</sup></li>
  <li>-10<sup>5</sup> ≤ <code>arr[i]</code> ≤ 10<sup>5</sup></li>
</ul>

<p><strong>Time Limit:</strong> 1 second</p>

<h3>Sample Input 1:</h3>
<pre>
2
5
1 2 2 3 4
5
10 11 23 23 23
</pre>

<h3>Sample Output 1:</h3>
<pre>
1 2 3 4
10 11 23
</pre>

<h4>Explanation for Sample Input 1:</h4>
<p>In the first test case, <code>2</code> is a duplicate element, and there are two occurrences of <code>2</code>, so one <code>2</code> is removed, and the resultant array becomes [1 2 3 4].</p>
<p>In the second test case, <code>23</code> is a duplicate element, and there are three occurrences of <code>23</code>, so two occurrences of <code>23</code> must be removed, and the resultant array becomes [10 11 23].</p>

<h3>Sample Input 2:</h3>
<pre>
2
10
1 3 3 3 3 3 4 9 23 35
5
10 10 10 10 10
</pre>

<h3>Sample Output 2:</h3>
<pre>
1 3 4 9 23 35
10
</pre>
