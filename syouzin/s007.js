process.stdin.resume();
process.stdin.setEncoding('utf8');

var lines = [];
var reader = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
});
reader.on('line', (line) => {
  lines.push(line);
});
reader.on('close', () => {
    const alphabets = "abcdefghijklmnopqrstuvwxyz";
    const input = lines[0];
    let numberStr = "";
    let numbers = [];
    let number = 1;
    let similar = {};
    let bracketCounter = 0;
    let result = {};
    let prevChar = "";
    let prevCharPos = 1;
    for (let i = 0; i < input.length; i++) {
      if (parseInt(input[i]) || input[i] === "0") {
        numberStr += input[i];
        if (parseInt(input[i + 1])) continue;
        if (input[i + 1] === "(" || input[i + 1] === ")") {
          numbers.push(parseInt(numberStr));
          number = 1;
        } else {
          number = parseInt(numberStr);
        }
        prevCharPos += 1;
      } else {
       if (input[i] === "(") {
          bracketCounter += 1;
        }
        if (input[i] === ")") {
          bracketCounter -= 1;
          numbers.pop();
        }
        numberStr = "";
        prevChar = input[i - prevCharPos];
        if (input[i] !== "(" && input[i] !== ")") {
          if (result[input[i]] !== undefined) {
            if (similar[input[i]] === undefined)
              similar[input[i]] = 1
            similar[input[i]] += 1
          }
          if (numbers.length === 0) {
            if (result[input[i]] !== undefined) {
              result[input[i]] += number;
              similar[input[i]] -= 1;
            } else {
              result[input[i]] = number;
            }
            number = 1;
          } else {
            let multiply = 1;
            if (numbers.length > 0)
              numbers.forEach(v => multiply *= v);
            if (result[input[i]] !== undefined) {
              result[input[i]] += multiply * number;
              similar[input[i]] -= 1;
            } else {
              result[input[i]] = multiply * number;
            }
            number = 1;
          }
        }
        if (bracketCounter === 0) {
          numbers = [];
        }
        prevCharPos = 1;
      }
    }
    for (let i = 0; i < alphabets.length; i++) {
      if (result[alphabets[i]] === undefined) {
        console.log(alphabets[i], 0);
      } else {
        if (similar[alphabets[i]] != undefined)
          console.log(alphabets[i], result[alphabets[i]] * similar[alphabets[i]]);
        else console.log(alphabets[i], result[alphabets[i]]);
      }
    }
});