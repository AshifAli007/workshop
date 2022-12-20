const add = (a, b) => {
  return a + b;
};
const subtract = (a, b) => {
  return a - b;
};

const multiply = (a, b) => {
  return a * b;
};
const divide = (a, b) => {
  return a / b;
};

console.log({ sum: add(9, 19) });
console.log({ multiplication: multiply(9, 19) });
console.log({ division: divide(9, 19) });
console.log({ subtraction: subtract(9, 19) });
