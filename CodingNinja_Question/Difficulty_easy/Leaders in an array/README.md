<h1>Problem Statement</h1>
<p>Given a sequence of numbers, find all leaders in the sequence. An element is a leader if it is strictly greater than all the elements on its right side.</p>

<h3>Notes:</h3>
<ul>
  <li>The rightmost element is always a leader.</li>
  <li>The order of elements in the return sequence must be the same as the given sequence.</li>
</ul>

<h3>Example:</h3>
<p>The given sequence is <code>13, 14, 3, 8, 2</code>.</p>
<ul>
  <li><strong>13:</strong> Not a leader because on the right side 14 is greater than 13.</li>
  <li><strong>14:</strong> It is a leader because no element on its right is greater.</li>
  <li><strong>3:</strong> Not a leader because on the right side 8 is greater than 3.</li>
  <li><strong>8:</strong> It is a leader because no element on its right is greater.</li>
  <li><strong>2:</strong> It is a leader because it is the rightmost element in the sequence.</li>
</ul>
<p>Hence, the leaders in the sequence are <code>14, 8, 2</code>.</p>

<h3>Detailed Explanation</h3>

<h4>Input/Output Format:</h4>
<ul>
  <li><strong>Input:</strong></li>
  <ul>
    <li><code>T</code>: The number of test cases.</li>
    <li>For each test case:</li>
    <ul>
      <li><code>N</code>: The size of the sequence.</li>
      <li>An array of integers of size <code>N</code>.</li>
    </ul>
  </ul>
  <li><strong>Output:</strong> For each test case, a list of leaders in the sequence.</li>
</ul>

<h3>Constraints:</h3>
<ul>
  <li>1 ≤ <code>T</code> ≤ 50</li>
  <li>1 ≤ <code>N</code> ≤ 10<sup>4</sup></li>
  <li>-10<sup>9</sup> ≤ <code>ELEMENTS[i]</code> ≤ 10<sup>9</sup></li>
</ul>
<p><strong>Time Limit:</strong> 1 second</p>

<h3>Sample Input 1:</h3>
<pre>
2
6
6 7 4 2 5 3
4
11 10 9 8
</pre>

<h3>Sample Output 1:</h3>
<pre>
7 5 3
11 10 9 8
</pre>

<h4>Explanation of Sample Output 1:</h4>
<p><strong>Test Case 1:</strong></p>
<ul>
  <li><strong>6:</strong> Not a leader because on the right side 7 is greater than 6.</li>
  <li><strong>7:</strong> It is a leader because no element on its right is greater.</li>
  <li><strong>4:</strong> Not a leader because on the right side 5 is greater than 4.</li>
  <li><strong>2:</strong> Not a leader because on the right side 5 and 3 are greater than 2.</li>
  <li><strong>5:</strong> It is a leader because no element on its right is greater.</li>
  <li><strong>3:</strong> It is a leader because it is the rightmost element.</li>
</ul>
<p>Hence, the leaders in sequence 1 are <code>7, 5, 3</code>.</p>
<p><strong>Test Case 2:</strong></p>
<p>The sequence is in descending order, so all elements are leaders. Leaders: <code>11, 10, 9, 8</code>.</p>

<h3>Sample Input 2:</h3>
<pre>
2
6
5 10 11 12 -1 -2
4
10 -11 -3 -2
</pre>

<h3>Sample Output 2:</h3>
<pre>
12 -1 -2
10 -2
</pre>

<h4>Explanation of Sample Output 2:</h4>
<p><strong>Test Case 1:</strong></p>
<ul>
  <li><strong>5:</strong> Not a leader because on the right side 10 is greater than 5.</li>
  <li><strong>10:</strong> Not a leader because on the right side 11 is greater than 10.</li>
  <li><strong>11:</strong> Not a leader because on the right side 12 is greater than 11.</li>
  <li><strong>12:</strong> It is a leader because no element on its right is greater.</li>
  <li><strong>-1:</strong> It is a leader because no element on its right is greater.</li>
  <li><strong>-2:</strong> It is a leader because it is the rightmost element.</li>
</ul>
<p>Leaders: <code>12, -1, -2</code>.</p>
<p><strong>Test Case 2:</strong></p>
<ul>
  <li><strong>10:</strong> It is a leader because no element on its right is greater.</li>
  <li><strong>-11:</strong> Not a leader because on the right side -3 is greater than -11.</li>
  <li><strong>-3:</strong> Not a leader because on the right side -2 is greater than -3.</li>
  <li><strong>-2:</strong> It is a leader because it is the rightmost element.</li>
</ul>
<p>Leaders: <code>10, -2</code>.</p>
