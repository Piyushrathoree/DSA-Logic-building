const lengthOfLastWord = function (s) {
    let str = s.trim().split(" ");
    console.log(str[str.length - 1].length);
    return str[str.length - 1].length;
};

lengthOfLastWord("hello  world and people  of  earth        "); // 5
