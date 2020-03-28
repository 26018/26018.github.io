---
title: ArrayList
tags: Java
data: 2020-03-28
layout: post
renderNumberedHeading: true
grammar_cjkRuby: true
excerpt_separator: <!--more-->
---
<p align="center"></p>
<!--more-->
=[enter description here](./attachments/Sqlist.cpp)

# ArrayList集合与数组的区别
1.  数组的长度不可以发生改变，但ArrayList集合的长度是可以随意变化的    
2.  对于Array List来说，有一个尖括号`<E>`表示泛型。   
		泛型：也就是装在集合当中的所有元素，全部都是统一的`引用`类型，不能是基本类型 
3. 如果希望使用基本类型，，必须使用基本类型的包装类。    
    只要将基本类型的首字母大写即可    
	其中: int --> Integer，char->Character较为特殊      
	

**注意事项：**     
	对于ArrayList集合来说，直接打印集合得到的不是地址值，而是集合中的元素     
	如果集合为空，则显示空的括号：[ ]
```java
public class Demo(){
	public static void main(String[] args){
		//创建了一个Array List集合，集合的名称是list，里面装的全部都是String字符串类型的数据
		//备注：从JDK1.7开始，右侧的尖括号里可以不写内容，但是<>本身还是要写的。
		ArrayList<String> list = new ArrayList<>();
		//public boolean add(E e):添加一个元素，返回一个Boolean类型(是否添加成功)
		//pubilc E get(int index):
		//public E remove(int index):
		//public int size(): 获取集合长度，返回一个int值
		list.add("周杰伦")；//添加元素,
		list.get(2);
		list.remove(3);
		list.size();
	}
}
```