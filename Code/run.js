
function runTests() {
    const l = document.getElementById("size").value;
    var matrix = new Module.Matrix();
    var jsmatrix = new JSMatrix();

    let total = 0.0;
    let jstotal = 0.0;
    for (x = 0; x < 30; x++){
        const time_taken = matrix.multMatrix(l);
        const js_time_taken = jsmatrix.multMatrix(l);
        total += time_taken;
        jstotal += js_time_taken;
        console.log("WASM Time taken for run #: " + x + ": " + time_taken.toFixed(4) + " milisecs");
        console.log("JS Time taken for run #: " + x + ": " + js_time_taken.toFixed(4) + " milisecs");
    }
    const avg = (total / l).toFixed(4)
    const js_avg = (jstotal/ l).toFixed(4)
    console.log("WASM Average Time taken for " + l + " runs is: " + avg + " milisecs");
    console.log("JavaScript Average Time taken for " + l + " runs is: " + js_avg + " milisecs");
    let input = "<font size=5>WASM Code Average time taken: " + avg + " milisecs" + 
    "<br> Java Script Average time taken: " + js_avg + " milisecs" +
    "<br> WASM Code is: " + (Math.abs(js_avg - avg).toFixed(4)) + " milisecs faster than Javascript Code" + "</font><br/>";
    document.getElementById("tk").innerHTML = input;
}