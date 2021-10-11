import 'dart:io';

int fibonacci(int n) {
  if (n <= 1) {
    return n;
  }

  var prev = 1;
  var current = 1;
  for (var i = 2; i < n; i++) {
    var next = prev + current;
    prev = current;
    current = next;
  }

  return current;
}

main() {
  print('Enter an integer:');
  int input = int.parse(stdin.readLineSync()).abs();
  print(fibonacci(input));
}
