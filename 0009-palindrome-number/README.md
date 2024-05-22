<고려사항>
1. 음수이거나 뒷자리가 0인경우 바로 false를 리턴한다.
if(x<0 || (x!=0 && x%10==0) return false;
2. x와 x의 역순으로 저장해서 둘이 동일한지 확인한다.
x가 123이라면 rev는 321
x가 11211이라면 rev는 11211
이후 리턴해줄때 x와 rev가 동일한지(짝수인경우), 혹은 x와 rev/10이 동일한지(홀수인경우 가운데 제외) 확인한다.

<h2><a href="https://leetcode.com/problems/palindrome-number">9. Palindrome Number</a></h2><h3>Easy</h3><hr><p>Given an integer <code>x</code>, return <code>true</code><em> if </em><code>x</code><em> is a </em><span data-keyword="palindrome-integer"><em><strong>palindrome</strong></em></span><em>, and </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> x = 121
<strong>Output:</strong> true
<strong>Explanation:</strong> 121 reads as 121 from left to right and from right to left.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> x = -121
<strong>Output:</strong> false
<strong>Explanation:</strong> From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> x = 10
<strong>Output:</strong> false
<strong>Explanation:</strong> Reads 01 from right to left. Therefore it is not a palindrome.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-2<sup>31</sup>&nbsp;&lt;= x &lt;= 2<sup>31</sup>&nbsp;- 1</code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Could you solve it without converting the integer to a string?
