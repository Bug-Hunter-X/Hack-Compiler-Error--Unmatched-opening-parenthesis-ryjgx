function foo(x: int): int {
  return x + 1;
}

function bar(x: int): int {
  return foo(x) * 2;
}

function baz(x: int): int {
  return bar(x) - 1;
}

<<HH
$ hh2cpp --no-runtime-check test.hh
>>
Error: test.hh:3:14: Unmatched opening parenthesis
Error: test.hh:3:14: Expected a closing parenthesis
Error: test.hh:3:14: Expected an expression
Error: test.hh:4:14: Unmatched opening parenthesis
Error: test.hh:4:14: Expected a closing parenthesis
Error: test.hh:4:14: Expected an expression
Error: test.hh:5:14: Unmatched opening parenthesis
Error: test.hh:5:14: Expected a closing parenthesis
Error: test.hh:5:14: Expected an expression
>>