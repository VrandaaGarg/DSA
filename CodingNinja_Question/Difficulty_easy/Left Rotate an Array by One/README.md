<h1>Problem Statement</h1>
<p>Given an array <code>arr</code> containing <code>n</code> elements, rotate this array left once and return it.</p>

<p>Rotating the array left by one means shifting all elements by one place to the left and moving the first element to the last position in the array.</p>

<h3>Example:</h3>
<pre>
<strong>Input:</strong> 
'a' = 5, 'arr' = [1, 2, 3, 4, 5]

<strong>Output:</strong>
[2, 3, 4, 5, 1]

<strong>Explanation:</strong>
We moved the 2nd element to the 1st position, the 3rd element to the 2nd position, the 4th element to the 3rd position, the 5th element to the 4th position, and the 1st element to the 5th position.

</pre>

<h3>Detailed Explanation</h3>

<h4>Input/Output Format:</h4>
<ul>
  <li><strong>Input:</strong></li>
  <ul>
    <li>An integer <code>n</code>, the size of the array.</li>
    <li>An array <code>arr</code> of size <code>n</code> containing the elements.</li>
  </ul>
  <li><strong>Output:</strong> An array after rotating it left once.</li>
</ul>

<h3>Constraints:</h3>
<ul>
  <li>1 ≤ <code>n</code> ≤ 10<sup>5</sup></li>
  <li>1 ≤ <code>arr[i]</code> ≤ 10<sup>9</sup></li>
</ul>
<p><strong>Time Limit:</strong> 1 second</p>
<p><strong>Expected Time Complexity:</strong> O(n), where <code>n</code> is the size of the input array.</p>

<h3>Sample Input 1:</h3>
<pre>
4
5 7 3 2
</pre>

<h3>Sample Output 1:</h3>
<pre>
7 3 2 5
</pre>

<h4>Explanation of Sample Input 1:</h4>
<p>Move the first element to the last, and shift all the other elements one position to the left.</p>

<h3>Sample Input 2:</h3>
<pre>
5
4 0 3 2 5
</pre>

<h3>Sample Output 2:</h3>
<pre>
0 3 2 5 4
</pre>

<h4>Explanation of Sample Input 2:</h4>
<p>Similar to Sample Input 1, move the first element to the last and shift the rest to the left.</p>
