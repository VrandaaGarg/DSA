<h1>Problem Statement</h1>
<p>Given an unsorted array of integers, you have to move the array elements in a way such that all the zeroes are transferred to the end, and all the non-zero elements are moved to the front. The non-zero elements must be ordered in their order of appearance.</p>

<h3>Example:</h3>
<p>If the input array is: <code>[0, 1, -2, 3, 4, 0, 5, -27, 9, 0]</code>, then the output array must be:</p>
<pre>[1, -2, 3, 4, 5, -27, 9, 0, 0, 0]</pre>

<h3>Expected Complexity:</h3>
<ul>
  <li>Time Complexity: <code>O(n)</code></li>
  <li>Space Complexity: <code>O(1)</code></li>
</ul>
<p>Here, <code>n</code> is the size of the array.</p>

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
  <li><strong>Output:</strong> For each test case, output a single line with the array after moving all zeroes to the end while maintaining the order of non-zero elements.</li>
</ul>

<h4>Sample Input 1:</h4>
<pre>
2
7
2 0 4 1 3 0 28
5
0 0 0 0 1
</pre>

<h4>Sample Output 1:</h4>
<pre>
2 4 1 3 28 0 0
1 0 0 0 0
</pre>

<h4>Explanation for Sample Output 1:</h4>
<p>
In the first test case, all the zeros are moved towards the end of the array, and the non-zero elements are pushed towards the left, maintaining their order with respect to the original array.<br>
In the second test case, all zeros are moved towards the end, hence the only non-zero element (<code>1</code>) is at the start of the array.
</p>

<h4>Sample Input 2:</h4>
<pre>
2
5
0 3 0 2 0
4
0 0 0 0
</pre>

<h4>Sample Output 2:</h4>
<pre>
3 2 0 0 0
0 0 0 0
</pre>
