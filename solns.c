/* Enter your solutions in this file */
#include <stdio.h>

int
max (int arr[], int n)
{
  int max = 0;
  for (int i = 0; i < n; i++)
    {
      if (arr[i] > max)
	{
	  max = arr[i];
	}
      else
	{
	  max = max;
	}
    }
  return max;
}

int
min (int arr[], int n)
{

  int min = 0;
  if (n == 1)
    {
      min = arr[0];
    }
  else
    {



      for (int i = 0; i < n; i++)
	{
	  if (arr[i] < min)
	    {
	      min = arr[i];
	    }
	  else
	    {
	      min = min;
	    }
	}
      return min;
    }
}


float
average (int arr[], int n)
{
  int total = 0;
  float average;
  for (int i = 0; i < n; i++)
    {
      total += arr[i];
    }
  average = (float) total / (float) n;
  return average;
}


int
mode (int arr[], int n)
{

  int mode = 0;
  int a = 0;
  for (int i = 0; i < n; i++)
    {
      int count = 0;
      for (int j = 0; j < n; j++)
	{
	  if (arr[i] == arr[j])
	    {
	      count += 1;
	    }
	}
      if (count > a)
	{
	  mode = arr[i];
	  a = count;
	}
      else
	{
	  continue;
	}
    }
  return mode;
}


int
factors (int n, int arr[])
{
  int i = 0;
  while (n % 2 == 0)
    {
      arr[i] = 2;
      i += 1;
      n = n / 2;
    }
  for (int b = 3; b < n; b += 2)
    {
      while (n % b == 0)
	{
	  arr[i] = b;
	  i += 1;
	  n = n / b;
	}

    }
  if (n > 2)
    {
      arr[i] = n;
    }
  return i+1;
}
