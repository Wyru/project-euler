function isPalindrome(num) {
    return num == num.toString().split("").reverse().join("")
}

function findAnswer() {
    var largest = 0;
    for (i = 100; i <= 999; i++) {
        for (j = 100; j <= 999; j++) {
            num = i * j
            if (isPalindrome(num) && num > largest) {
                largest = num
            }
        }
    }
    return largest
}

console.log(findAnswer())