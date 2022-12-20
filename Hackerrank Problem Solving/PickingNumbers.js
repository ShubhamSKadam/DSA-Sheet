function pickingNumbers(a) {
    const arr = a.sort((a,b) => a-b);
    let longestSuite = 0;
    let increment = 0;
    for (let i = 0; i < arr.length; i += increment) {
        let j = i;
        let suite = 0;
        while(arr[j] - arr[i] <= 1) {
            suite++;
            j++;
        }
        if (suite > longestSuite) longestSuite = suite;
        increment = suite === 0 ? 1 : suite;
    }
    return longestSuite;
}