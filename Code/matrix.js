// const {performance} = require('perf_hooks');

class JSMatrix {

    multMatrix(n){
    
        let matrixA = [];
        let matrixB = [];
        let matrixC = [];

        for (let i = 0; i < n; i++){
            matrixA.push([Math.random().toFixed(5), Math.random().toFixed(5)])
            matrixB.push([Math.random().toFixed(5), Math.random().toFixed(5)])
            matrixC.push([Math.random().toFixed(5), Math.random().toFixed(5)])
        }
        const t0 = performance.now();
        this.multiplyMatrices(matrixA, matrixB);
        const t1 = performance.now();


        return (t1 - t0) // miliseconds

    }

    multiplyMatrices(m1, m2) {
        var result = [];
        for (var i = 0; i < m1.length; i++) {
            result[i] = [];
            for (var j = 0; j < m2[0].length; j++) {
                var sum = 0;
                for (var k = 0; k < m1[0].length; k++) {
                    sum += m1[i][k] * m2[k][j];
                }
                result[i][j] = sum;
            }
        }
        return result;
    }
}

// module.exports = { JSMatrix }

// const matrix = new JSMatrix();
// console.log(matrix.multMatrix(300).toFixed(5));