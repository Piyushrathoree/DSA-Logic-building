var longestCommonPrefix = function (strings) {
    if (strings.length === 0) {
        return "";
    }
    let prefix = strings[0];
    for (let i = 1; i < strings.length; i++) {
        while (strings[i].indexOf(prefix) !== 0) {
            prefix = prefix.substring(0, prefix.length - 1);
            if (prefix === "") return "";
        }
    }

    console.log(prefix);
    return prefix;
};

longestCommonPrefix(["piyush", "anurag", "birju"]);

//different method
var longestCommonPrefix = function (strings) {
    if (strings.length === 0) {
        return "";
    }

    let prefix = strings[0];
    for (let i = 1; i < strings.length; i++) {
        let j = 0;
        while (
            j < prefix.length &&
            j < strings[i].length &&
            prefix[j] === strings[i][j]
        ) {
            j++;
        }
        prefix = prefix.slice(0, j);
        if (prefix === "") return "";
    }

    console.log(prefix);
    return prefix;
};

longestCommonPrefix(["piyush", "anurag", "birju"]);

//another one 
var longestCommonPrefix = function (strings) {
    if (strings.length === 0) {
        return "";
    }
    let prefix = strings[0];
    for (let i = 1; i < strings.length; i++) {
        while (strings[i].slice(0, prefix.length) !== prefix) {
            prefix = prefix.slice(0, -1);
            if (prefix === "") return "";
        }
    }

    console.log(prefix);
    return prefix;
};

longestCommonPrefix(["piyush", "anurag", "birju"]);