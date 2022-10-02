// This program finds the largest range in a given input array
// By Anish Shilpakar
// GitHub Username: juju2181

// for getting user input from terminal
// npm install prompt-sync to install node package
const prompt = require('prompt-sync')();
const array_size = prompt("Input the maximum size of array: ");
let input_array = [];
const largestRangeArray = [];

for(let i = 0; i< array_size;i++){
    input_array.push(Number(prompt(`element ${i+1} = `)));
}
console.log(`Given Numbers: ${input_array}`);
// Initially set the start and end number of largest range to first element of array
let startNumber = input_array[0];
let endNumber = input_array[0];


// function to get the next element in array 
const getNextElement = (number, array) => {
    // check if the number next to the given number is present in array
    if (array.includes(number + 1)) {
        // If yes find the longest series recursively
        return getNextElement(number + 1, array);
    } else {
        // return current number as the final number of series
        return number;
    }
}

// looping through each array elements 
input_array.forEach(number => {
    // get the current starting and its longest series
    const currentStartNumber = number;
    const currentEndNumber = getNextElement(number, input_array);
    // checking if the current range is longer than the original range 
    if (currentEndNumber - currentStartNumber > endNumber - startNumber) {
        startNumber = currentStartNumber;
        endNumber = currentEndNumber;
    }
});

console.log(`Largest Range is (${startNumber},${endNumber})`);