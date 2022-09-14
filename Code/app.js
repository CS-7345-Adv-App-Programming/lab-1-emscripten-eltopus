const Module = require('./output.js');

Module['onRuntimeInitialized'] = function() {
    var matrix = new Module.Matrix();
    let total = 0.0;
    let l = 30;
    for (x = 0; x < l; x++){
        time_taken = matrix.multMatrix(300);
        total += time_taken;
        console.log("Time taken for run #: " + x + ": " + time_taken.toFixed(4) + " sec");
    }
    const avg = (total / l).toFixed(4)
    console.log("Average Time taken for " + x + " runs is: " + avg + " sec");
    
}