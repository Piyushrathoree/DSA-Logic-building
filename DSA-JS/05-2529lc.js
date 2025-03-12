// take out the number of positive and negative from array and return the amount which is greater

function findPositiveAndNegativeInt(arr) {
    let positive = 0;
    let negative = 0;

    for (let i = 0; i < arr.length; i++) {
        if (arr[i] < 0) {
            negative++;
        } else if (arr[i] > 0) {
            positive++;
        }
    }
    if (positive > negative) {
        console.log(positive);
        return positive;
    } else {
        console.log(negative);
        return negative;
    }
}

findPositiveAndNegativeInt([-3, 5, 6, -1, 9, -9, -5, 6]);
